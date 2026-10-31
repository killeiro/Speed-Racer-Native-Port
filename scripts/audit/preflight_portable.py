"""Check the media-absent portable GUI contract; never certify game boot.

Provide the built executable beside its four MinGW/SDL DLLs. Tests copy those
files into a new --out directory; the input package is never modified. --elf
optionally supplies a legitimate local ELF for private discovery-only fixtures.
"""
from pathlib import Path
import argparse, hashlib, json, os, shutil, struct, subprocess

DLLS = ('SDL2.dll', 'libstdc++-6.dll', 'libgcc_s_seh-1.dll', 'libwinpthread-1.dll')
digest = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--exe', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--elf', type=Path)
    parser.add_argument('--development-exe', type=Path,
        help='Optional known development build whose ELF fallback exists and disc fallback is absent')
    args = parser.parse_args()
    if os.name != 'nt': parser.error('This checker requires Windows')
    args.exe = args.exe.resolve(); args.out = args.out.resolve()
    if not args.exe.is_file(): parser.error('--exe does not exist')
    if args.elf:
        args.elf = args.elf.resolve()
        if not args.elf.is_file(): parser.error('--elf does not exist')
    if args.development_exe:
        args.development_exe = args.development_exe.resolve()
        if not args.development_exe.is_file(): parser.error('--development-exe does not exist')
    for program in [args.exe] + ([args.development_exe] if args.development_exe else []):
        for name in DLLS:
            if not (program.parent/name).is_file(): parser.error('Missing bundled DLL: '+name)
    inputs=[args.exe] + [args.exe.parent/name for name in DLLS]
    if args.elf: inputs.append(args.elf)
    if args.development_exe:
        inputs += [args.development_exe] + [args.development_exe.parent/name for name in DLLS]
    input_hashes={path:digest(path) for path in inputs}
    # An existing output is rejected; no fixture, save or package is overwritten.
    args.out.mkdir(parents=True, exist_ok=False)
    def stage(name, program):
        folder=args.out/name;folder.mkdir()
        shutil.copyfile(program,folder/'SpeedRacer.exe')
        for dll in DLLS: shutil.copyfile(program.parent/dll,folder/dll)
        return folder/'SpeedRacer.exe'
    exe=stage('portable',args.exe);data=exe.read_bytes()
    if len(data)<0x40: raise ValueError('Truncated PE header')
    pe=struct.unpack_from('<I',data,0x3c)[0]
    if pe+94>len(data) or data[pe:pe+4]!=b'PE\0\0': raise ValueError('Invalid PE header')
    subsystem=struct.unpack_from('<H',data,pe+24+68)[0]
    if subsystem!=2: raise ValueError('Expected the Windows GUI subsystem')
    env={k:v for k,v in os.environ.items() if not k.startswith(('PS2_','SDL_'))}
    system=Path(env.get('SystemRoot') or env['SYSTEMROOT'])
    env['PATH']=str(system/'System32')+';'+str(system)
    rows=[]
    def run(name,program,options,expected,message,cwd=None):
        case=args.out/name;case.mkdir()
        local_env=env.copy();local_env['APPDATA']=str(case/'prefs');local_env['LOCALAPPDATA']=str(case/'local')
        with (case/'run.log').open('w',encoding='utf-8') as log:
            # Explicit private card and one-frame limit protect the optional
            # development control if its original ISO unexpectedly reappears.
            result=subprocess.run([str(program),*map(str,options),
                '--memcard',str(case/'private.ps2'),'--frames','1'],cwd=cwd or case,
                env=local_env,stdout=log,stderr=log,timeout=20)
        text=(case/'run.log').read_text(encoding='utf-8',errors='replace')
        if result.returncode!=expected or message not in text:
            raise AssertionError(f'{name}: exit={result.returncode}; expected={expected}; {text}')
        if (case/'saves').exists() or (case/'private.ps2').exists() or (program.parent/'saves').exists() or '[ee] stopped' in text:
            raise AssertionError(name+': unexpected save/game execution')
        rows.append({'case':name,'exit':result.returncode,'expected_exit':expected,
            'message_matched':True,'no_game_frames_or_save_created':True,
            'minimal_system_path':True,'exe_sha256':digest(program)})
        print(name,'PASS',flush=True)
    run('help',exe,['--help'],0,'Speed Racer for Windows')
    run('missing-both-no-development-fallback',exe,[],1,'Speed Racer executable not found.')
    run('explicit-missing-elf',exe,[args.out/'absent/SLUS_218.12'],1,'Speed Racer executable not found.')
    run('argument-value-is-not-help-option',exe,['--arg','--help'],1,'Speed Racer executable not found.')
    run('conflicting-window-flags',exe,['--headless','--window'],1,'Use --headless or --window/--fullscreen, not both.')
    if args.elf:
        cwd=args.out/'misleading-working-directory';(cwd/'data').mkdir(parents=True)
        shutil.copyfile(args.elf,cwd/'data/SLUS_218.12')
        run('working-directory-is-not-data-directory',exe,[],1,'Speed Racer executable not found.',cwd=cwd)
        run('explicit-legitimate-elf-needs-disc',exe,[args.elf],1,'Speed Racer disc image not found.')
        unicode_exe=stage('Teste João 雨',args.exe)
        (unicode_exe.parent/'data').mkdir();shutil.copyfile(args.elf,unicode_exe.parent/'data/SLUS_218.12')
        run('unicode-directory-disc-still-required',unicode_exe,[],1,'Speed Racer disc image not found.')
    if args.development_exe:
        control=stage('development-control',args.development_exe)
        run('development-launcher-control',control,[],1,'Speed Racer disc image not found.')
    for path,expected in input_hashes.items():
        if digest(path)!=expected: raise AssertionError('Input changed: '+str(path))
    result={'candidate_exe_sha256':digest(exe),'pe_subsystem':subsystem,'case_count':len(rows),
        'cases':rows,'minimal_path':'%SystemRoot%/System32;%SystemRoot%',
        'source_package_not_modified':True,'actual_game_boot_frames':0,'clean_pc_test':False,
        'unicode_scope':'Executable-directory/ELF existence discovery only; runtime ELF/ISO IO not certified.',
        'private_elf_fixture':bool(args.elf),'development_negative_control':bool(args.development_exe)}
    (args.out/'summary.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print('Portable preflight:',len(rows),'cases passed; no game boot certification',flush=True)

if __name__ == '__main__': main()
