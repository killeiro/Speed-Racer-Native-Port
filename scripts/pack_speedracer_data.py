#!/usr/bin/env python3
"""Build a lossless sector-preserving game.srpak for the local Windows package.

Engineering tool only; players do not need Python or an ISO once packaged.
No extraction of untrusted filenames and no replacement of existing data.
"""
from pathlib import Path
import argparse
import hashlib
import json
import os
import struct
import tempfile

MAGIC = b'SRDATA1\0'
BLOCK = 256 * 1024
HEADER = struct.Struct('<8sIIQII32s')
USA_BYTES = 2877095936
USA_SHA = 'a3bd02ad919c744b2dac65e1f9a4e6cdf3804d14678ca00d44ca1190084e3755'
ELF_BYTES = 5329820
ELF_SHA = '6d6b8e257c7019e859fa5c54276800a3566680289420a664a83609088edc7fda'


def build(source, destination, *, expected_size=USA_BYTES, expected_sha=USA_SHA):
    """Publish a new pack only after full independent reconstruction verification."""
    source, destination = Path(source), Path(destination)
    if destination.exists():
        raise ValueError('Destination already exists; use a new package directory.')
    if not destination.parent.is_dir():
        raise ValueError('Destination parent must exist.')
    before = source.stat()
    if before.st_size != expected_size or expected_size % 2048 or not 18*2048 <= expected_size <= 16 << 30:
        raise ValueError('Unexpected source size; the audited USA image is required.')
    count = (expected_size + BLOCK - 1) // BLOCK
    descriptor, temporary = tempfile.mkstemp(prefix='.srpak-', suffix='.tmp', dir=destination.parent)
    stage = Path(temporary)
    try:
        offsets = []
        digest = hashlib.sha256()
        with source.open('rb') as src, os.fdopen(descriptor, 'w+b') as out:
            descriptor = None
            out.write(bytes(HEADER.size + count * 8))
            for index in range(count):
                n = min(BLOCK, expected_size - index * BLOCK)
                block = src.read(n)
                if len(block) != n:
                    raise ValueError('Source truncated during conversion.')
                digest.update(block)
                if block.count(0) == len(block):
                    offsets.append(0)
                else:
                    offsets.append(out.tell())
                    out.write(block)
            if src.read(1) or digest.hexdigest() != expected_sha:
                raise ValueError('Source SHA256 does not match the audited image.')
            if (os.fstat(src.fileno()).st_size, os.fstat(src.fileno()).st_mtime_ns) != (before.st_size, before.st_mtime_ns):
                raise ValueError('Source changed during conversion.')
            out.seek(0)
            out.write(HEADER.pack(MAGIC, 1, BLOCK, expected_size, count, 0, bytes.fromhex(expected_sha)))
            out.write(struct.pack('<' + 'Q' * count, *offsets))
            out.flush()
            os.fsync(out.fileno())
        verified = verify(stage)
        if verified['source_sha256'] != expected_sha:
            raise ValueError('Reconstructed data differs from the source.')
        after = source.stat()
        if (after.st_size, after.st_mtime_ns) != (before.st_size, before.st_mtime_ns):
            raise ValueError('Source path changed during conversion.')
        # A hard link publishes the verified file atomically, without replacing
        # a destination created by another process. Both paths are on one volume.
        os.link(stage, destination)
        return verified
    finally:
        if descriptor is not None:
            os.close(descriptor)
        stage.unlink(missing_ok=True)


def verify(path):
    path = Path(path)
    with path.open('rb') as f:
        header = f.read(HEADER.size)
        if len(header) != HEADER.size:
            raise ValueError('Truncated pack header.')
        magic, version, block, size, count, flags, source_hash = HEADER.unpack(header)
        if (magic, version, block, flags) != (MAGIC, 1, BLOCK, 0):
            raise ValueError('Unsupported pack header.')
        if not 18*2048 <= size <= 16 << 30 or size % 2048 or count != (size+BLOCK-1)//BLOCK:
            raise ValueError('Invalid pack dimensions.')
        table = f.read(count*8)
        if len(table) != count*8:
            raise ValueError('Truncated pack index.')
        offsets = struct.unpack('<'+'Q'*count, table)
        next_offset = HEADER.size + len(table)
        digest = hashlib.sha256()
        for i, offset in enumerate(offsets):
            n = min(BLOCK, size-i*BLOCK)
            if offset:
                if offset != next_offset:
                    raise ValueError('Noncanonical pack offset.')
                data = f.read(n)
                if len(data) != n:
                    raise ValueError('Truncated pack block.')
                next_offset += n
            else:
                data = bytes(n)
            digest.update(data)
        if f.read(1) or digest.digest() != source_hash:
            raise ValueError('Pack integrity check failed.')
    return dict(format='SRDATA1', virtual_bytes=size, packed_bytes=path.stat().st_size,
                blocks=count, zero_blocks=offsets.count(0), source_sha256=digest.hexdigest())


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('destination', type=Path, nargs='?')
    parser.add_argument('--verify', action='store_true')
    args = parser.parse_args()
    if args.verify:
        if args.destination:
            parser.error('--verify takes only the existing pack path')
        result = verify(args.source)
    else:
        if args.destination is None:
            parser.error('destination is required')
        result = build(args.source, args.destination)
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
