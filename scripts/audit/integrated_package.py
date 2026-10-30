"""Engineering tools for verified Windows candidates based on integrated v38.

Use a trusted SHA256SUMS.json digest. Stage into a NEW directory, optionally
copying a closed game's profile. Archive only clean packages. Players do not
need Python; this tool does not install, run or upload anything.
"""
from pathlib import Path, PurePosixPath
import argparse
import hashlib
import json
import os
import re
import shutil
import stat
import struct
import tempfile
import zipfile

MANIFEST = 'SHA256SUMS.json'
RUNTIME_DIRS = {'saves', 'cache', 'diagnostics', 'textures'}
PROFILE_FILES = ('saves/speedracer.ps2', 'SpeedRacer.ini', 'Keyboard.ini')
REQUIRED = {'SpeedRacer.exe', 'SpeedRacerGS.dll', 'data/game.srpak', 'data/SLUS_218.12',
            'SOURCE-INFO.json', 'DEPENDENCIES.json'}
HEX = re.compile(r'[0-9a-f]{64}\Z')
VERSION = re.compile(r'[A-Za-z0-9][A-Za-z0-9._-]{0,63}\Z')
CHUNK = 8 * 1024 * 1024


def need(ok, message):
    if not ok:
        raise ValueError(message)


def digest(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as f:
        for block in iter(lambda: f.read(CHUNK), b''):
            h.update(block)
    return h.hexdigest()


def portable(name):
    need(isinstance(name, str) and name and len(name) <= 1024, 'Invalid package path')
    need(not any(c in name for c in '\\:<>"|?*') and all(ord(c) >= 32 for c in name), 'Unsafe package path')
    parts = name.split('/')
    need(all(p and p not in ('.', '..') and p[-1] not in '. ' for p in parts), 'Unsafe package component')
    reserved = {'CON', 'PRN', 'AUX', 'NUL'} | {f'{p}{i}' for p in ('COM', 'LPT') for i in range(1, 10)}
    need(all(p.split('.')[0].upper() not in reserved for p in parts), 'Reserved Windows path')
    return PurePosixPath(name)


def reparse(path):
    value = Path(path).lstat()
    return stat.S_ISLNK(value.st_mode) or bool(getattr(value, 'st_file_attributes', 0) & 0x400)


def local(root, name):
    path = Path(root)
    need(path.is_dir() and not reparse(path), 'Package root must be a real directory')
    for part in portable(name).parts:
        path = path / part
        need(not reparse(path), 'Links and reparse points are not package files')
    need(path.is_file(), 'Missing package file: ' + name)
    return path


def no_duplicates(pairs):
    result = {}
    for key, value in pairs:
        need(key not in result, 'Duplicate JSON key')
        result[key] = value
    return result


def read_json(path):
    need(path.stat().st_size <= 1024 * 1024, 'Metadata is too large')
    return json.loads(path.read_text(encoding='utf-8'), object_pairs_hook=no_duplicates)


def runtime_name(name):
    return (name.split('/')[0].casefold() in RUNTIME_DIRS or name.casefold() in {'speedracer.ini', 'keyboard.ini'} or
            bool(re.fullmatch(r'speedracer\.ini\.pending\.[0-9]+\.[0-9]+', name, flags=re.IGNORECASE)))


def distribution_name(name):
    portable(name)
    need(not runtime_name(name) and not name.casefold().endswith(('.iso', '.ps2', '.state', '.log', '.wav', '.csv')),
         'User/runtime/media file is not a distribution entry: ' + name)


def pe_gui(path):
    with path.open('rb') as f:
        head = f.read(64)
        need(len(head) == 64 and head[:2] == b'MZ', 'Invalid Windows executable')
        offset = struct.unpack_from('<I', head, 60)[0]
        need(64 <= offset <= 1024 * 1024, 'Invalid PE offset')
        f.seek(offset)
        pe = f.read(96)
    need(len(pe) == 96 and pe[:4] == b'PE\0\0', 'Truncated PE header')
    need(struct.unpack_from('<H', pe, 4)[0] == 0x8664 and
         struct.unpack_from('<H', pe, 24)[0] == 0x20b and
         struct.unpack_from('<H', pe, 92)[0] == 2, 'Expected x64 Windows GUI executable')


def verify(root, manifest_sha, *, installed=False):
    root = Path(root).absolute()
    need(isinstance(manifest_sha, str) and HEX.fullmatch(manifest_sha), 'A trusted manifest SHA256 is required')
    path = local(root, MANIFEST)
    need(digest(path) == manifest_sha, 'Manifest SHA256 mismatch')
    entries = read_json(path)
    need(isinstance(entries, dict) and 0 < len(entries) <= 4096, 'Invalid manifest entries')
    need(REQUIRED <= entries.keys(), 'Integrated package files are missing')
    folded = set()
    for name, expected in entries.items():
        distribution_name(name)
        need(name.casefold() != MANIFEST.casefold(), 'Manifest cannot hash itself')
        need(name.casefold() not in folded, 'Case-colliding package paths')
        folded.add(name.casefold())
        need(isinstance(expected, str) and HEX.fullmatch(expected), 'Invalid content SHA256')
    for name in folded:
        need(not any('/'.join(name.split('/')[:i]) in folded for i in range(1, len(name.split('/')))),
             'File/directory path collision')
    for name, expected in entries.items():
        need(digest(local(root, name)) == expected, 'Content SHA256 mismatch: ' + name)
    # The source may be an installed copy; runtime branches are pruned, never
    # walked/copied. A distribution/ZIP must contain only manifested content.
    for folder, directories, files in os.walk(root, followlinks=False):
        rel = Path(folder).relative_to(root)
        for name in directories[:]:
            item = (rel / name).as_posix()
            if installed and runtime_name(item):
                directories.remove(name)
            else:
                need(not reparse(Path(folder)/name), 'Linked package directory')
                need(any(n.startswith(item + '/') for n in entries), 'Untracked package directory: ' + item)
        for name in files:
            item = (rel / name).as_posix()
            if installed and runtime_name(item):
                continue
            need(item == MANIFEST or item in entries, 'Untracked package file: ' + item)
    pe_gui(local(root, 'SpeedRacer.exe'))
    with local(root, 'data/game.srpak').open('rb') as f:
        need(f.read(8) == b'SRDATA1\0', 'Expected integrated game data')
    info = read_json(local(root, 'SOURCE-INFO.json'))
    need(isinstance(info, dict) and info.get('exe_sha256') == entries['SpeedRacer.exe'] and
         info.get('ISO_required_to_play') is False, 'Inconsistent integrated package metadata')
    return entries


def target_path(destination, source):
    destination = Path(destination).absolute()
    need(not os.path.lexists(destination), 'Destination already exists')
    portable(destination.name)
    parent = destination.parent.resolve(strict=True)
    need(parent.is_dir(), 'Destination parent must exist')
    destination = parent / destination.name
    source = Path(source).resolve(strict=True)
    need(not destination.is_relative_to(source) and not source.is_relative_to(destination), 'Source/destination overlap')
    return destination


class Stage:
    def __init__(self, parent):
        self.root = Path(tempfile.mkdtemp(prefix='.speedracer-stage-', dir=parent))
        self.parent = Path(parent).resolve()
        self.identity = self.root.stat().st_ino
        self.files = []
        self.directories = set()
    def output(self, name):
        portable(name)
        path = self.root / name
        for folder in list(reversed(list(path.parent.parents))) + [path.parent]:
            if folder == self.root or folder.is_relative_to(self.root):
                if not folder.exists():
                    folder.mkdir(); self.directories.add(folder)
        self.files.append(path)
        return path
    def copy(self, source, name, expected):
        source = Path(source)
        before = source.stat()
        need(source.is_file() and not reparse(source), 'Source must be a regular file')
        target = self.output(name)
        h = hashlib.sha256()
        with source.open('rb') as src, target.open('xb') as out:
            for block in iter(lambda: src.read(CHUNK), b''):
                h.update(block); out.write(block)
            out.flush(); os.fsync(out.fileno())
        after = source.stat()
        need((before.st_ino, before.st_size, before.st_mtime_ns) ==
             (after.st_ino, after.st_size, after.st_mtime_ns) and h.hexdigest() == expected,
             'Source changed during copy: ' + name)
        need(digest(target) == expected, 'Copied content verification failed: ' + name)
    def json(self, name, value):
        path = self.output(name)
        with path.open('x', encoding='utf-8', newline='\n') as f:
            json.dump(value, f, indent=2, ensure_ascii=False); f.write('\n'); f.flush(); os.fsync(f.fileno())
    def cleanup(self):
        if not self.root.exists():
            return
        # Fixed owned files only; no recursive removal or following replacements.
        need(self.root.resolve().parent == self.parent and not reparse(self.root) and
             self.root.stat().st_ino == self.identity, 'Staging identity changed; cleanup refused')
        for path in reversed(self.files):
            if path.exists():
                local(self.root, path.relative_to(self.root).as_posix()).unlink()
        for path in sorted(self.directories, key=lambda p: len(p.parts), reverse=True):
            path.rmdir()
        self.root.rmdir()


def stage(base, destination, version, manifest_sha, *, executable=None, source_commit=None, profile=None):
    need(os.name == 'nt', 'Atomic directory publication currently requires Windows')
    need(isinstance(version, str) and VERSION.fullmatch(version), 'Invalid candidate version')
    base = Path(base).absolute()
    destination = target_path(destination, base)
    entries = verify(base, manifest_sha, installed=True)
    if source_commit is not None:
        need(re.fullmatch(r'[0-9a-f]{40}', source_commit), 'Invalid source commit')
    if executable:
        executable = Path(executable)
        need(not reparse(executable), 'Executable cannot be a link')
        pe_gui(executable)
        need(source_commit and re.fullmatch(r'[0-9a-f]{40}', source_commit), 'Replacement executable requires its source commit')
    profile_entries = {}
    if profile:
        profile = Path(profile).absolute()
        need(not destination.is_relative_to(profile.resolve()), 'Profile/destination overlap')
        for name in PROFILE_FILES:
            if os.path.lexists(profile/name):
                profile_entries[name] = digest(local(profile, name))
        need(profile_entries, 'No save/settings found in the explicit profile source')
    required = sum(local(base, name).stat().st_size for name in entries)
    required += sum(local(profile, name).stat().st_size for name in profile_entries)
    if executable:
        required += max(0, executable.stat().st_size - (base/'SpeedRacer.exe').stat().st_size)
    need(shutil.disk_usage(destination.parent).free >= required + 1024 * 1024, 'Insufficient free space for candidate')
    temporary = Stage(destination.parent)
    try:
        for name, expected in entries.items():
            if name not in ('SOURCE-INFO.json', 'DEPENDENCIES.json'):
                temporary.copy(executable if name == 'SpeedRacer.exe' and executable else local(base, name),
                               name, digest(executable) if name == 'SpeedRacer.exe' and executable else expected)
        parent_info = read_json(local(base, 'SOURCE-INFO.json'))
        exe_sha = digest(temporary.root/'SpeedRacer.exe')
        dlls = {n: digest(temporary.root/n) for n in entries if n.lower().endswith('.dll')}
        info = dict(version=version, source_commit=source_commit or parent_info.get('source_commit'),
            exe_sha256=exe_sha, GS_sha256=dlls['SpeedRacerGS.dll'],
            parent_manifest_sha256=manifest_sha, parent_version=parent_info.get('version'),
            runtime_executable_identical_to_parent=exe_sha == entries['SpeedRacer.exe'],
            ISO_required_to_play=False, contains_converted_game_data=True, game_data_format='SRDATA1',
            default_quality=parent_info.get('default_quality'),
            candidate_gameplay_validation='pending; do not inherit parent acceptance',
            public_release=False)
        temporary.json('SOURCE-INFO.json', info)
        temporary.json('DEPENDENCIES.json', dict(bundled_file_hashes={'SpeedRacer.exe': exe_sha, **dlls},
            loader_check='Run SpeedRacer.exe --verify-install on the candidate; hashes do not certify DLL loading'))
        candidate = {n: digest(temporary.root/n) for n in entries}
        temporary.json(MANIFEST, candidate)
        candidate_sha = digest(temporary.root/MANIFEST)
        verify(temporary.root, candidate_sha)
        for name, expected in profile_entries.items():
            temporary.copy(local(profile, name), name, expected)
        for name, expected in profile_entries.items():
            need(digest(local(profile, name)) == expected, 'Profile changed during staging')
        if profile_entries:
            verify(temporary.root, candidate_sha, installed=True)
        # On Windows rename refuses even an empty destination created in a race.
        os.rename(temporary.root, destination)
        return dict(version=version, manifest_sha256=candidate_sha, files=len(candidate)+1,
                    profile_files_copied=len(profile_entries), parent_manifest_sha256=manifest_sha)
    finally:
        temporary.cleanup()


def archive(package, destination, manifest_sha):
    package = Path(package).absolute()
    entries = verify(package, manifest_sha)  # Strict: reject personal/runtime data.
    destination = target_path(destination, package)
    fd, name = tempfile.mkstemp(prefix='.speedracer-zip-', suffix='.tmp', dir=destination.parent)
    os.close(fd)
    temporary = Path(name)
    try:
        with zipfile.ZipFile(temporary, 'w', compression=zipfile.ZIP_DEFLATED, compresslevel=6) as z:
            for item in sorted([*entries, MANIFEST]):
                z.write(local(package, item), package.name+'/'+item)
        with zipfile.ZipFile(temporary) as z:
            for item, expected in {**entries, MANIFEST: manifest_sha}.items():
                h = hashlib.sha256()
                with z.open(package.name+'/'+item) as f:
                    for block in iter(lambda: f.read(CHUNK), b''):
                        h.update(block)
                need(h.hexdigest() == expected, 'Archived content verification failed: ' + item)
        # No replacement on either supported engineering host; same-volume link.
        os.link(temporary, destination)
        return dict(bytes=destination.stat().st_size, sha256=digest(destination), files=len(entries)+1)
    finally:
        temporary.unlink(missing_ok=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    v = sub.add_parser('verify'); v.add_argument('package', type=Path); v.add_argument('--installed', action='store_true')
    s = sub.add_parser('stage'); s.add_argument('base', type=Path); s.add_argument('destination', type=Path)
    s.add_argument('--version', required=True); s.add_argument('--exe', type=Path); s.add_argument('--source-commit')
    s.add_argument('--profile-from', type=Path, help='Explicit previous package; close its game before copying progress')
    a = sub.add_parser('archive'); a.add_argument('package', type=Path); a.add_argument('destination', type=Path)
    for command in (v, s, a):
        command.add_argument('--manifest-sha', required=True, help='Trusted SHA256SUMS.json digest')
    args = parser.parse_args()
    try:
        if args.command == 'verify':
            result = dict(files=len(verify(args.package, args.manifest_sha, installed=args.installed)), integrity='verified')
        elif args.command == 'stage':
            result = stage(args.base, args.destination, args.version, args.manifest_sha,
                           executable=args.exe, source_commit=args.source_commit, profile=args.profile_from)
        else:
            result = archive(args.package, args.destination, args.manifest_sha)
    except (ValueError, OSError, zipfile.BadZipFile) as error:
        parser.exit(1, 'Package verification failed: '+str(error)+'\n')
    print(json.dumps(result, indent=2, ensure_ascii=False))


if __name__ == '__main__':
    main()
