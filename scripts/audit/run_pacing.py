"""Compare legacy and experimental pacing in the same native Windows executable.

Uses run_tracks.py: native threaded rendering, scripted inputs, no screenshots.
Private Class 1 states must start at VBlank 10600. Never publish these inputs.
"""
from pathlib import Path
import argparse,hashlib,json,subprocess,sys

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for name in ['exe','states','memcard','out']:p.add_argument('--'+name,type=Path,required=True)
    p.add_argument('--tracks',nargs='+',default=['Thunderhead-0','Grand-Prix-0','Fuji-3','Skorost-1'])
    p.add_argument('--pairs',type=int,default=3);p.add_argument('--frames',type=int,default=600)
    a=p.parse_args()
    if a.pairs<1 or a.frames<75:p.error('Use at least one pair and 75 frames (60 warm-up frames).')
    exe=a.exe.resolve()
    if not exe.is_file():p.error('Executable missing')
    # Keep all prior evidence; each invocation needs a new output directory.
    a.out.mkdir(parents=True,exist_ok=False)
    digest=lambda:hashlib.sha256(exe.read_bytes()).hexdigest()
    expected=digest();rows=[]
    for track in a.tracks:
        for pair in range(1,a.pairs+1):
            order=['legacy','deadline'] if pair%2 else ['deadline','legacy']
            for mode in order:
                if digest()!=expected:raise RuntimeError('Executable changed before replay')
                out=a.out/f'{track}-{mode}-{pair}'
                setting='PS2_LEGACY_PACING=1' if mode=='legacy' else 'PS2_EXPERIMENTAL_PACING=1'
                cmd=[sys.executable,str(Path(__file__).with_name('run_tracks.py')),'--exe',str(exe),
                     '--states',str(a.states.resolve()),'--memcard',str(a.memcard.resolve()),'--out',str(out.resolve()),
                     '--tracks',track,'--frames',str(a.frames),'--maneuvers','--env',setting]
                subprocess.run(cmd,check=True)
                result=json.loads((out/'summary.json').read_text(encoding='utf-8'))
                if len(result)!=1:raise RuntimeError('Expected exactly one replay')
                row=result[0]
                if row['exit']!=0 or row['frames_recorded']!=a.frames:raise RuntimeError('Replay failed or frame count mismatched')
                if row['exe_sha256']!=expected or digest()!=expected:raise RuntimeError('Executable changed during replay')
                row.update(pair=pair,variant=mode,same_binary=True,same_executable_path=True)
                rows.append(row)
                (a.out/'comparisons.json').write_text(json.dumps(rows,indent=2)+'\n',encoding='utf-8')
    print(f'{len(rows)} replays passed; raw private evidence: {a.out}')

if __name__=='__main__':main()
