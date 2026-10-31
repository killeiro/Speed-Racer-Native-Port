"""Fetch the hash-pinned wgpu build input; no toolchain or game installation."""
from pathlib import Path, PurePosixPath
import argparse, hashlib, json, urllib.request, zipfile

LOCK = dict(version='v29.0.1.1',
    url='https://github.com/gfx-rs/wgpu-native/releases/download/v29.0.1.1/wgpu-windows-x86_64-gnu-release.zip',
    sha256='d471e3614733c1d4ddd61bfd19868356477d0d37bf531bf8c6cb64a7f579bd2a')
INPUTS = {
    'lib/libwgpu_native.a': '0b5206ac8313a33d5f276417328ed8d077e1c0cc1b25f3a700da6dd0f284b326',
    'include/webgpu/webgpu.h': '2516cf5a7bec4385bf76ecc550d45015c1e3df77962211f3cef3f57507b2f2c8',
    'include/webgpu/wgpu.h': '873faa1c1b63d48e4d866000fc51a163e85d0f7c6c01425c687d3f12d073ff74',
}
def sha(path):
    with path.open('rb') as f: return hashlib.file_digest(f,'sha256').hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cache', type=Path, default=Path('build/download-cache'))
    args=parser.parse_args()
    repo=Path(__file__).resolve().parents[1]
    cache=args.cache.resolve();cache.mkdir(parents=True,exist_ok=True)
    archive=cache/'wgpu-windows-x86_64-gnu-release-v29.0.1.1.zip'
    if not archive.exists():
        part=archive.with_suffix('.part')
        req=urllib.request.Request(LOCK['url'],headers={'User-Agent':'SpeedRacer-source-build'})
        with urllib.request.urlopen(req,timeout=90) as src,part.open('wb') as dst:
            while block:=src.read(1<<20):dst.write(block)
        if sha(part)!=LOCK['sha256']:raise RuntimeError('wgpu archive SHA256 mismatch')
        part.replace(archive)
    if sha(archive)!=LOCK['sha256']:raise RuntimeError('Cached wgpu archive SHA256 mismatch')
    target=repo/'third_party/wgpu-native'
    # All archive paths are validated before extracting or modifying the target.
    with zipfile.ZipFile(archive) as z:
        members=[]
        for entry in z.infolist():
            parts=PurePosixPath(entry.filename).parts
            if entry.is_dir():continue
            if not parts or any(p in ('.','..') or ':' in p or '\\' in p for p in parts):raise RuntimeError('Unsafe wgpu archive path')
            if PurePosixPath(entry.filename).is_absolute() or (entry.external_attr>>16)&0o170000==0o120000:raise RuntimeError('Archive links/absolute paths are not supported')
            out=target.joinpath(*parts)
            if not out.resolve().is_relative_to(target.resolve()):raise RuntimeError('Archive target escapes directory')
            members.append((entry,out))
        for entry,out in members:
            data=z.read(entry)
            if out.exists() and out.read_bytes()!=data:raise RuntimeError('Refusing to replace different dependency: '+out.name)
        for entry,out in members:
            if not out.exists():out.parent.mkdir(parents=True,exist_ok=True);out.write_bytes(z.read(entry))
    if not (target/'lib/libwgpu_native.a').is_file():raise RuntimeError('Missing wgpu static library')
    for name,digest in INPUTS.items():
        if sha(target/name)!=digest:raise RuntimeError('Installed wgpu input changed: '+name)
    print(json.dumps(dict(wgpu=LOCK,installed=True),indent=2))
if __name__=='__main__':main()
