"""Generate additional VU AOT programs from local captures without replacing the base set.

Example: python scripts/compile_vu_extra.py --vurecomp build/tools/vurecomp.exe
         --recorded games/speedracer/vu1-new --generated generated/speedracer
         --scratch work/vu-extra-generation
The scratch directory must be new. Captures and generated game code stay local.
"""
import argparse
from pathlib import Path
import re
import subprocess

parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--vurecomp',required=True,type=Path)
parser.add_argument('--recorded',required=True,type=Path)
parser.add_argument('--generated',required=True,type=Path)
parser.add_argument('--scratch',required=True,type=Path)
args=parser.parse_args()
base_table=args.generated/'vu1_table.cpp'
if not base_table.is_file():parser.error('generated directory must contain vu1_table.cpp')
if args.scratch.exists():parser.error('scratch directory must be new')
args.scratch.mkdir(parents=True)
subprocess.run([str(args.vurecomp.resolve()),str(args.recorded.resolve()),str(args.scratch.resolve())],check=True)
base=set(re.findall(r'0x([0-9A-F]+)ull',base_table.read_text()))
parts={}
for p in sorted(args.scratch.glob('vu1_*.cpp')):
    for match in re.finditer(r'^void vu1_([0-9A-F]+)\([^\n]+\) \{\n.*?^\}\n',p.read_text(),re.M|re.S):
        if match[1] not in base:parts[match[1]]=match[0]
all_keys=set(re.findall(r'0x([0-9A-F]+)ull',(args.scratch/'vu1_table.cpp').read_text()))
if set(parts)!=all_keys-base:raise RuntimeError('Generated function/table mismatch; refusing partial output')
if not parts:raise RuntimeError('No additional programs found; existing extra file left untouched')
# Preserve previously captured variants when extending coverage with a new session.
existing=args.generated/'extra'/'vu_extra.cpp'
if existing.is_file():
    for match in re.finditer(r'^void vu1_([0-9A-F]+)\([^\n]+\) \{\n.*?^\}\n',existing.read_text(),re.M|re.S):
        if match[1] not in base:parts.setdefault(match[1],match[0])
text='#include "ps2/vu_ops.hpp"\nnamespace gen_extra {\nusing namespace ps2;\nusing namespace ps2::vuops;\n'
text+='\n'.join(parts[k] for k in sorted(parts))
text+='\nconst ps2::vu::Program programs[] = {\n'+''.join(f'    {{0x{k}ull, vu1_{k}}},\n' for k in sorted(parts))+'};\n}\n'
text+=f'void register_generated_vu_extra() {{ ps2::vu::register_programs(gen_extra::programs, {len(parts)}); }}\n'
out=args.generated/'extra';out.mkdir(exist_ok=True)
(out/'vu_extra.cpp').write_text(text)
print(f'{len(parts)} additional programs written to {out / "vu_extra.cpp"}')
