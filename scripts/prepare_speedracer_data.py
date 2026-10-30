"""Prepare a NEW portable data directory from your own audited USA ISO.

Windows engineering tool (Python 3.10+), not a game download or game validator.
Example: python prepare_speedracer_data.py --iso D:/own-disc.iso --out D:/Port/data
The parent of --out must exist and --out itself must NOT exist, even if empty.
The existing preflight bundle's placeholder data directory is therefore rejected;
prepare a separate directory first. No force/overwrite or alternate-version flag.
"""
from __future__ import annotations

import argparse
from dataclasses import dataclass
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import stat
import struct
import tempfile

SECTOR = 2048
CHUNK = 1024 * 1024
MAX_ISO = 16 * 1024**3
MAX_ROOT = 1024 * 1024
ELF_NAME = 'SLUS_218.12'


class PreparationError(ValueError):
    """Invalid, unsupported, changed or unsafe input; no directory published."""


@dataclass(frozen=True)
class _Version:
    size: int
    sha256: str
    entry: int


_AUDITED = _Version(5329820,
    '6d6b8e257c7019e859fa5c54276800a3566680289420a664a83609088edc7fda',
    0x100008)


def _need(condition, message):
    if not condition:
        raise PreparationError(message)


def _dual(data, offset, width):
    left = int.from_bytes(data[offset:offset+width], 'little')
    right = int.from_bytes(data[offset+width:offset+width*2], 'big')
    _need(left == right, 'ISO little/big-endian fields disagree')
    return left


def _read(file, offset, size, limit):
    _need(0 <= offset <= limit and 0 <= size <= limit-offset, 'ISO extent outside volume')
    file.seek(offset)
    data = file.read(size)
    _need(len(data) == size, 'Truncated ISO read')
    return data


def _record(data):
    _need(len(data) >= 34 and data[0] == len(data), 'Malformed ISO directory record')
    count = data[32]
    _need(count > 0 and 33+count+(count % 2 == 0) <= len(data), 'Truncated ISO identifier')
    _need(data[1] == data[26] == data[27] == 0, 'Extended/interleaved ISO records unsupported')
    _need(not (data[25] & ~3), 'Multi-extent or unsupported ISO record flags')
    _need(_dual(data, 28, 2) == 1, 'Multi-volume ISO record unsupported')
    return (_dual(data, 2, 4)*SECTOR, _dual(data, 10, 4),
            data[25], data[33:33+count])


def _inspect(file, size, version):
    _need(18*SECTOR <= size <= MAX_ISO and size % SECTOR == 0,
          'Expected a complete raw 2048-byte-sector ISO, at most 16 GiB')
    pvd = _read(file, 16*SECTOR, SECTOR, size)
    _need(pvd[:7] == b'\x01CD001\x01' and pvd[7] == 0, 'Missing ISO9660 primary volume descriptor')
    _need(_dual(pvd, 128, 2) == SECTOR, 'Unsupported ISO logical block size')
    _need(_dual(pvd, 120, 2) == _dual(pvd, 124, 2) == 1, 'Multi-volume ISO unsupported')
    volume_size = _dual(pvd, 80, 4)*SECTOR
    _need(18*SECTOR <= volume_size <= size, 'Truncated or invalid ISO volume')
    # Bound descriptor scanning; do not recurse through the filesystem.
    for sector in range(17, min(volume_size//SECTOR, 80)):
        descriptor = _read(file, sector*SECTOR, SECTOR, volume_size)
        _need(descriptor[1:7] == b'CD001\x01', 'Invalid ISO volume descriptor')
        _need(descriptor[0] in (0, 2, 3, 255), 'Unexpected duplicate/unsupported volume descriptor')
        if descriptor[0] == 255:
            break
    else:
        raise PreparationError('Missing bounded ISO descriptor terminator')
    root = _record(pvd[156:156+pvd[156]])
    _need(root[2] & 2 and root[3] == b'\0' and 0 < root[1] <= MAX_ROOT,
          'Invalid or oversized ISO root directory')
    _need(root[0] >= (sector+1)*SECTOR, 'Root overlaps volume descriptors')
    data = _read(file, root[0], root[1], volume_size)
    found = {}
    offset = 0
    wanted = {'SYSTEM.CNF', ELF_NAME}
    while offset < len(data):
        length = data[offset]
        if not length:
            end = min((offset//SECTOR+1)*SECTOR, len(data))
            _need(not any(data[offset:end]), 'Nonzero ISO directory sector padding')
            offset = end
            continue
        _need(offset+length <= len(data) and offset % SECTOR+length <= SECTOR,
              'ISO directory record crosses a sector/buffer boundary')
        extent, length_bytes, flags, name = _record(data[offset:offset+length])
        offset += length
        _need(extent <= volume_size and length_bytes <= volume_size-extent,
              'ISO file extent outside volume')
        if name in (b'\0', b'\1'):
            continue
        _need(all(32 <= ch < 127 for ch in name) and not any(ch in name for ch in (b'/', b'\\', b':')),
              'Unsafe/non-ASCII ISO identifier')
        canonical = name.decode('ascii').upper().split(';')[0]
        if canonical not in wanted:
            continue
        _need(canonical not in found, 'Duplicate required ISO file: '+canonical)
        _need(name.decode('ascii').upper() == canonical+';1' and not flags & 2,
              'Required ISO file must be a regular version-1 file')
        _need(extent >= (sector+1)*SECTOR and
              (extent+length_bytes <= root[0] or extent >= root[0]+root[1]),
              'Required file overlaps ISO metadata')
        found[canonical] = (extent, length_bytes)
    _need(set(found) == wanted, 'Missing SYSTEM.CNF or '+ELF_NAME+' in ISO root')
    cnf_offset, cnf_size = found['SYSTEM.CNF']
    elf_offset, elf_size = found[ELF_NAME]
    _need(0 < cnf_size <= 4096, 'Invalid SYSTEM.CNF size')
    _need(elf_size == version.size, 'Unsupported Speed Racer ELF size/version')
    _need(cnf_offset+cnf_size <= elf_offset or elf_offset+elf_size <= cnf_offset,
          'Required ISO files overlap')
    try:
        cnf = _read(file, cnf_offset, cnf_size, volume_size).decode('ascii')
    except UnicodeDecodeError as exc:
        raise PreparationError('SYSTEM.CNF must be ASCII') from exc
    boot = re.findall(r'^\s*BOOT2\s*=\s*(.*?)\s*$', cnf, re.I | re.M)
    _need(len(boot) == 1 and boot[0].upper() == 'CDROM0:\\'+ELF_NAME+';1',
          'SYSTEM.CNF does not boot the audited USA executable')
    elf = _read(file, elf_offset, elf_size, volume_size)
    _need(elf[:7] == b'\x7fELF\x01\x01\x01' and len(elf) >= 52,
          'Expected a little-endian ELF32 executable')
    _need(struct.unpack_from('<H', elf, 18)[0] == 8 and
          struct.unpack_from('<I', elf, 24)[0] == version.entry, 'Unsupported MIPS executable/entry')
    _need(hashlib.sha256(elf).hexdigest() == version.sha256,
          'Unsupported or modified ELF: SHA-256 differs from audited USA version')
    return {'elf': elf, 'volume_bytes': volume_size}


def _fingerprint(file):
    info = os.fstat(file.fileno())
    _need(stat.S_ISREG(info.st_mode), 'ISO source must be a regular file')
    return (info.st_dev, info.st_ino, info.st_size, info.st_mtime_ns, info.st_ctime_ns)


def _hash(file, size):
    file.seek(0)
    result = hashlib.sha256()
    left = size
    while left:
        part = file.read(min(CHUNK, left))
        _need(bool(part), 'Unexpected EOF while hashing ISO')
        result.update(part)
        left -= len(part)
    _need(not file.read(1), 'ISO grew during preparation')
    return result.hexdigest()


def _copy(file, destination, size):
    file.seek(0)
    result = hashlib.sha256()
    left = size
    with destination.open('xb') as output:
        while left:
            part = file.read(min(CHUNK, left))
            _need(bool(part), 'Unexpected EOF while copying ISO')
            _need(output.write(part) == len(part), 'Short ISO write')
            result.update(part)
            left -= len(part)
        _need(not file.read(1), 'ISO grew during preparation')
        output.flush()
        os.fsync(output.fileno())
    return result.hexdigest()


def _publish(staged, destination):
    # Windows directory rename refuses an existing destination, including empty
    # directories: a race cannot overwrite a directory created by another actor.
    os.rename(staged, destination)


def _prepare(source, destination, version):
    _need(os.name == 'nt', 'This preparation tool currently supports Windows only')
    source = Path(source).resolve(strict=True)
    destination = Path(os.path.abspath(destination))
    _need(not os.path.lexists(destination), '--out already exists; no files overwritten')
    parent = destination.parent.resolve(strict=True)
    destination = parent / destination.name
    _need(not os.path.lexists(destination), '--out already exists; no files overwritten')
    with source.open('rb') as file:
        before = _fingerprint(file)
        details = _inspect(file, before[2], version)
        required_space = before[2]+version.size+1024*1024
        _need(shutil.disk_usage(parent).free >= required_space, 'Insufficient free space for a full ISO copy')
        # Only our newly created, bounded staging tree is ever cleaned up.
        with tempfile.TemporaryDirectory(prefix='.speedracer-import-', dir=parent) as temporary:
            staging_root = Path(temporary)
            _need(staging_root.parent == parent, 'Invalid staging parent')
            staged = staging_root/'data'
            staged.mkdir()
            iso_hash = _copy(file, staged/'disc.iso', before[2])
            with (staged/'disc.iso').open('rb') as copied:
                _need(_hash(copied, before[2]) == iso_hash, 'Copied ISO hash mismatch')
                copied_details = _inspect(copied, before[2], version)
            _need(copied_details == details, 'ISO required files changed during copy')
            with (staged/ELF_NAME).open('xb') as output:
                output.write(copied_details['elf'])
                output.flush()
                os.fsync(output.fileno())
            _need(hashlib.sha256((staged/ELF_NAME).read_bytes()).hexdigest() == version.sha256,
                  'Extracted ELF hash mismatch')
            # Compare the full source again, not only its size/mtime. Nothing
            # below writes the original ISO or creates/touches a memory card.
            _need(_hash(file, before[2]) == iso_hash and _fingerprint(file) == before,
                  'Source ISO changed during preparation')
            source_path_info = os.stat(source)
            _need(source_path_info.st_ino == before[1] and source_path_info.st_dev == before[0],
                  'Source ISO path was replaced during preparation')
            manifest = {'schema': 1, 'serial': ELF_NAME, 'purpose': 'private portable data preparation',
                'iso_bytes': before[2], 'iso_sha256': iso_hash, 'volume_bytes': details['volume_bytes'],
                'elf_bytes': version.size, 'elf_sha256': version.sha256, 'elf_entry': hex(version.entry),
                'source_opened_read_only': True, 'source_rehashed_and_unchanged_at_check': True,
                'gameplay_validated': False, 'saves_created': False}
            with (staged/'preparation.json').open('x', encoding='utf-8', newline='\n') as output:
                json.dump(manifest, output, indent=2)
                output.write('\n')
                output.flush()
                os.fsync(output.fileno())
            _publish(staged, destination)
    return manifest


def prepare(source, destination):
    """Fixed audited version; alternate versions are not exposed by the CLI."""
    return _prepare(source, destination, _AUDITED)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--iso', required=True, type=Path)
    parser.add_argument('--out', required=True, type=Path)
    args = parser.parse_args()
    try:
        manifest = prepare(args.iso, args.out)
    except (OSError, PreparationError) as exc:
        parser.exit(1, 'Preparation failed: '+str(exc)+'\n')
    print('Prepared a new data directory. Game boot/performance have NOT been validated.')
    print(json.dumps(manifest, indent=2))


if __name__ == '__main__':
    main()
