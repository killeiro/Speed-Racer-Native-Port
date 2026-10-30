"""Compile captured VU subroutines while preserving the caller pipeline.

Captures and output contain game-derived data and must remain private.
The scratch directory must be new. A manifest protects edited generated files.
"""
import argparse, hashlib, json, re, shutil, subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__)
for name in ['vurecomp','recorded','generated','scratch']:p.add_argument('--'+name,type=Path,required=True)
a=p.parse_args()
if not (a.generated/'vu1_table.cpp').is_file():p.error('generated directory must contain vu1_table.cpp')
if a.scratch.exists():p.error('scratch directory must be new')
a.scratch.mkdir(parents=True)
subprocess.run([str(a.vurecomp.resolve()),str(a.recorded.resolve()),str(a.scratch.resolve()),'--subroutine-continuations'],check=True)
files=sorted(a.scratch.glob('vu_cont_*.cpp'))
if not files or not (a.scratch/'vu_cont_table.cpp').is_file():raise RuntimeError('Incomplete generated output')
out=a.generated/'extra';out.mkdir(exist_ok=True)
manifest=out/'.vu-cont-manifest.json'
old=json.loads(manifest.read_text())['files'] if manifest.exists() else {}
digest=lambda path:hashlib.sha256(path.read_bytes()).hexdigest()
for file in out.glob('vu_cont_*.cpp'):
    if file.name not in old or digest(file)!=old[file.name]:raise RuntimeError(f'Unowned or modified output: {file}')
current={f.name:digest(f) for f in files}
for name in old:
    if not re.fullmatch(r'vu_cont_(?:[0-9]+|table)\.cpp',name):raise RuntimeError('Invalid manifest filename')
    if name not in current:(out/name).unlink(missing_ok=True)
for file in files:
    if not (out/file.name).exists() or digest(out/file.name)!=current[file.name]:shutil.copyfile(file,out/file.name)
manifest.write_text(json.dumps({'files':current,'generator_sha256':digest(a.vurecomp),'capture_count':len(list(a.recorded.glob('*.bin')))},indent=2))
print(f'Installed {len(files)-1} private continuation translation units')
