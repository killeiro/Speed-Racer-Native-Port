"""Build the isolated native GS bridge from locked open-source inputs on Windows.

No game files are consumed. No installed toolchain or player build is changed.
The new work directory must not exist. Cache downloads are checked before use.
"""
from pathlib import Path, PurePosixPath
import argparse, hashlib, importlib.util, json, os, subprocess, time, urllib.request, zipfile

LOCK={
 'kzgs':{'repo':'drakolordx7/KillzoneRecomp','commit':'5f0700079f9ac4e14799d66d01747dbcdcec55f6',
         'sha256':'e8c8d4285a4443147065dcc3f376a4ed480fea5bde7f123fd3ef5b58cb091252'},
 'pcsx2':{'repo':'PCSX2/pcsx2','commit':'646df006a4688063e56c0826e7ea4b8bb0c112c4',
          'sha256':'b926e3248b5418d4572ce0c576373a0636ce657ae45ea7bdc7815db81c332989'},
 'deps':{'url':'https://github.com/killeiro/Speed-Racer-Native-Port/releases/download/v0.1.0/PCSX2-build-dependencies-a3133c78.7z',
         'original_upstream_url':'https://github.com/PCSX2/pcsx2-windows-dependencies/releases/download/latest-windows-dependencies/pcsx2-windows-dependencies.7z',
         'sha256':'a3133c7841e8fbdab6f4d1d5ad8efec31fb1ecda95ffed39f4d1f36bb7eb0007'}
}
def digest(path):
    result=hashlib.sha256()
    with path.open('rb') as stream:
        while block:=stream.read(1<<20):result.update(block)
    return result.hexdigest()
def download(url,path,expected):
    if not path.exists():
        temporary=path.with_suffix(path.suffix+'.part')
        request=urllib.request.Request(url,headers={'User-Agent':'SpeedRacer-native-GS-build'})
        with urllib.request.urlopen(request,timeout=90) as source,temporary.open('wb') as target:
            while block:=source.read(1<<20):target.write(block)
        if digest(temporary)!=expected:raise RuntimeError('Downloaded input changed: '+path.name)
        temporary.replace(path)
    if digest(path)!=expected:raise RuntimeError('Cached input changed: '+path.name)
    return path
def extract_zip(archive,target,kzgs):
    with zipfile.ZipFile(archive) as source:
        for entry in source.infolist():
            parts=PurePosixPath(entry.filename).parts[1:]
            if entry.is_dir() or not parts:continue
            if any(part in ('.','..') or ':' in part or '\\' in part for part in parts):raise RuntimeError('Unsafe archive member')
            if (entry.external_attr>>16)&0o170000==0o120000:raise RuntimeError('Archive links are not supported')
            if kzgs:
                if parts[:2]==('ext','kzgs'):parts=parts[2:]
                elif len(parts)==1 and parts[0].startswith('LICENSE'):pass
                else:continue
            if not parts:continue
            output=target.joinpath(*parts)
            if not output.resolve().is_relative_to(target.resolve()):raise RuntimeError('Archive escapes target')
            output.parent.mkdir(parents=True,exist_ok=True);output.write_bytes(source.read(entry))
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--work',type=Path,required=True)
    parser.add_argument('--cache',type=Path,required=True)
    parser.add_argument('--tools',type=Path,default=Path('C:/msys64/mingw64/bin'))
    parser.add_argument('--jobs',type=int,default=4)
    args=parser.parse_args()
    if os.name!='nt' or not 1<=args.jobs<=16:parser.error('Windows and 1..16 jobs are required')
    if args.work.exists():parser.error('--work must be a new directory')
    work=args.work.resolve();cache=args.cache.resolve();tools=args.tools.resolve()
    for tool in ['clang.exe','clang++.exe','cmake.exe','ctest.exe']:
        if not (tools/tool).is_file():parser.error('Tool not found: '+str(tools/tool))
    work.mkdir(parents=True);cache.mkdir(parents=True,exist_ok=True)
    for name in ['kzgs','pcsx2']:
        source=LOCK[name];url=f'https://codeload.github.com/{source["repo"]}/zip/{source["commit"]}'
        archive=download(url,cache/(name+'-'+source['commit']+'.zip'),source['sha256'])
        extract_zip(archive,work/'upstream'/name,name=='kzgs')
    archive=download(LOCK['deps']['url'],cache/'pcsx2-windows-dependencies.7z',LOCK['deps']['sha256'])
    # Check all member paths before invoking the native 7z-capable tar reader.
    names=subprocess.run(['tar','-tf',str(archive)],check=True,capture_output=True,text=True).stdout.splitlines()
    for name in names:
        member=PurePosixPath(name.replace('\\','/'))
        if member.is_absolute() or '..' in member.parts or ':' in name:raise RuntimeError('Unsafe dependency archive member')
    dependencies=work/'dependencies';dependencies.mkdir()
    subprocess.run(['tar','-xf',str(archive),'-C',str(dependencies)],check=True)
    repo=Path(__file__).resolve().parents[2]
    spec=importlib.util.spec_from_file_location('srgs_compat',repo/'native/gs_hw/compat.py')
    compat=importlib.util.module_from_spec(spec);spec.loader.exec_module(compat)
    adapter=compat.prepare(work)
    env=os.environ.copy();env['PATH']=str(tools)+';'+env['PATH']
    for key in list(env):
        if key.startswith(('KZGS_','SRGS_','PS2_')):env.pop(key)
    commands=[
      [str(tools/'cmake.exe'),'-S',str(repo/'native/gs_hw'),'-B',str(work/'build'),'-G','Ninja',
       '-DCMAKE_BUILD_TYPE=Release','-DCMAKE_C_COMPILER='+str(tools/'clang.exe'),
       '-DCMAKE_CXX_COMPILER='+str(tools/'clang++.exe'),'-DSRGS_KZGS_SOURCE_DIR='+str(adapter)],
      [str(tools/'cmake.exe'),'--build',str(work/'build'),'-j',str(args.jobs)],
      [str(tools/'ctest.exe'),'--test-dir',str(work/'build'),'--output-on-failure','-j','1']]
    proof={'locked_inputs':LOCK,'steps':[]}
    for index,command in enumerate(commands):
        started=time.monotonic()
        with (work/f'step-{index}.log').open('w',encoding='utf-8') as output:
            result=subprocess.run(command,env=env,stdout=output,stderr=output)
        proof['steps'].append({'command':command,'exit':result.returncode,'seconds':time.monotonic()-started})
        (work/'proof.json').write_text(json.dumps(proof,indent=2)+'\n')
        print('step',index,'exit',result.returncode,flush=True)
        if result.returncode:return result.returncode
    proof['dll_sha256']=digest(work/'build/SpeedRacerGS.dll')
    proof['source_hashes']={str(path.relative_to(repo)):digest(path) for path in (repo/'native/gs_hw').glob('*') if path.is_file()}
    proof['source_hashes'].update({str(path.relative_to(repo)):digest(path) for path in [repo/'tests/gs_hw_bridge.c',repo/'tests/gs_hw_packets.cpp',Path(__file__).resolve()]})
    (work/'proof.json').write_text(json.dumps(proof,indent=2)+'\n');return 0
if __name__=='__main__':raise SystemExit(main())
