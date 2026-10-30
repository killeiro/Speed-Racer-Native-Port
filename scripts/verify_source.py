"""Check every pinned source file; requires no game data or third-party binaries."""
from pathlib import Path, PurePosixPath
import hashlib, json

def main():
    repo=Path(__file__).resolve().parents[1]
    manifest=json.loads((repo/'source-manifest.json').read_text(encoding='utf-8'))
    failures=[]
    for name,expected in manifest['files'].items():
        rel=PurePosixPath(name)
        if rel.is_absolute() or '..' in rel.parts or ':' in name or '\\' in name:
            raise RuntimeError('Invalid source manifest path')
        path=repo.joinpath(*rel.parts)
        if not path.is_file():failures.append((name,'missing'));continue
        with path.open('rb') as stream:digest=hashlib.file_digest(stream,'sha256').hexdigest()
        if path.stat().st_size!=expected['bytes'] or digest!=expected['sha256']:failures.append((name,'changed'))
    if failures:
        for name,reason in failures:print(reason+': '+name)
        return 1
    print(f"Verified {len(manifest['files'])} source files for {manifest['source_tag']}")
    return 0
if __name__=='__main__':raise SystemExit(main())
