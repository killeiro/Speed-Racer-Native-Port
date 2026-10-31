"""Synthetic import tests only: no game image, runtime or gameplay validation."""
import hashlib
import io
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import prepare_speedracer_data as subject

S = subject.SECTOR
CNF = b'BOOT2 = cdrom0:\\SLUS_218.12;1\r\nVER = 1.02\r\nVMODE = NTSC\r\n'
ELF = bytearray(subject.CHUNK+97)
ELF[:7] = b'\x7fELF\x01\x01\x01'
struct.pack_into('<H', ELF, 18, 8)
struct.pack_into('<I', ELF, 24, 0x100008)
ELF = bytes(ELF)
VERSION = subject._Version(len(ELF), hashlib.sha256(ELF).hexdigest(), 0x100008)


def dual(data, offset, value, width=4):
    data[offset:offset+width] = value.to_bytes(width, 'little')
    data[offset+width:offset+width*2] = value.to_bytes(width, 'big')


def record(name, sector, size, flags=0):
    data = bytearray(33+len(name)+(len(name) % 2 == 0))
    data[0] = len(data)
    dual(data, 2, sector)
    dual(data, 10, size)
    data[25] = flags
    dual(data, 28, 1, 2)
    data[32] = len(name)
    data[33:33+len(name)] = name
    return data


def fixture(elf=ELF):
    sectors = 23+(len(elf)+S-1)//S
    image = bytearray(sectors*S)
    pvd = bytearray(S)
    pvd[:7] = b'\x01CD001\x01'
    dual(pvd, 80, sectors)
    dual(pvd, 120, 1, 2)
    dual(pvd, 124, 1, 2)
    dual(pvd, 128, S, 2)
    root = record(b'\0', 20, S, 2)
    pvd[156:156+len(root)] = root
    image[16*S:17*S] = pvd
    image[17*S:17*S+7] = b'\xffCD001\x01'
    entries = [record(b'\0', 20, S, 2), record(b'\1', 20, S, 2),
               record(b'SYSTEM.CNF;1', 21, len(CNF)),
               record(b'SLUS_218.12;1', 22, len(elf))]
    position = 20*S
    offsets = []
    for entry in entries:
        offsets.append(position)
        image[position:position+len(entry)] = entry
        position += len(entry)
    image[21*S:21*S+len(CNF)] = CNF
    image[22*S:22*S+len(elf)] = elf
    return image, offsets


@unittest.skipUnless(os.name == 'nt', 'Windows-only publishing semantics')
class PreparationTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix='speedracer-synthetic-',
            dir=os.environ.get('SPEEDRACER_TEST_TMP'))
        self.folder = Path(self.temporary.name).resolve()
        self.iso = self.folder/'synthetic.iso'
        self.out = self.folder/'data'
        self.image, self.offsets = fixture()

    def tearDown(self):
        self.temporary.cleanup()

    def write(self):
        self.iso.write_bytes(self.image)

    def run_import(self):
        self.write()
        before = self.iso.read_bytes()
        manifest = subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(before, self.iso.read_bytes())
        self.assertEqual(before, (self.out/'disc.iso').read_bytes())
        self.assertEqual(ELF, (self.out/subject.ELF_NAME).read_bytes())
        self.assertEqual(manifest, json.loads((self.out/'preparation.json').read_text()))
        self.assertFalse(manifest['gameplay_validated'])
        self.assertEqual(set(p.name for p in self.out.iterdir()), {'disc.iso', subject.ELF_NAME, 'preparation.json'})
        self.assertFalse(list(self.folder.glob('.speedracer-import-*')))
        return manifest

    def reject(self, pattern=None):
        self.write()
        before = self.iso.read_bytes()
        with self.assertRaisesRegex(subject.PreparationError, pattern or '.'):
            subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(before, self.iso.read_bytes())
        self.assertFalse(self.out.exists())
        self.assertFalse(list(self.folder.glob('.speedracer-import-*')))

    def test_valid_streaming_import(self):
        manifest = self.run_import()
        self.assertEqual(hashlib.sha256(self.image).hexdigest(), manifest['iso_sha256'])

    def test_unicode_paths(self):
        directory = self.folder/'Teste João 雨'
        directory.mkdir()
        self.iso = directory/'cópia legítima.iso'
        self.out = directory/'dados'
        self.run_import()

    def test_existing_directory_including_empty(self):
        self.out.mkdir()
        self.write()
        with self.assertRaisesRegex(subject.PreparationError, 'already exists'):
            subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(list(self.out.iterdir()), [])

    def test_existing_files_and_saves_preserved(self):
        self.out.mkdir()
        (self.out/'disc.iso').write_bytes(b'do not replace')
        save = self.folder/'saves/private.ps2'
        save.parent.mkdir()
        save.write_bytes(b'private save')
        self.write()
        with self.assertRaisesRegex(subject.PreparationError, 'already exists'):
            subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual((self.out/'disc.iso').read_bytes(), b'do not replace')
        self.assertEqual(save.read_bytes(), b'private save')

    def test_existing_file_destination(self):
        self.out.write_bytes(b'keep')
        self.write()
        with self.assertRaisesRegex(subject.PreparationError, 'already exists'):
            subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(self.out.read_bytes(), b'keep')

    def test_missing_parent(self):
        self.write()
        with self.assertRaises(FileNotFoundError):
            subject._prepare(self.iso, self.folder/'missing/data', VERSION)
        self.assertFalse((self.folder/'missing').exists())

    def test_not_iso(self):
        self.image[16*S] = 0
        self.reject('primary')

    def test_short_image(self):
        self.image = self.image[:100]
        self.reject('complete raw')

    def test_non_sector_aligned(self):
        self.image.pop()
        self.reject('complete raw')

    def test_truncated_volume(self):
        self.image = self.image[:-S]
        self.reject('Truncated')

    def test_disagreeing_volume_endianness(self):
        self.image[16*S+84] ^= 1
        self.reject('endian')

    def test_bad_block_size(self):
        dual(self.image, 16*S+128, 512, 2)
        self.reject('block size')

    def test_multi_volume(self):
        dual(self.image, 16*S+120, 2, 2)
        self.reject('Multi-volume')

    def test_missing_terminator(self):
        self.image[17*S:17*S+7] = b'\x02CD001\x01'
        self.reject('descriptor')

    def test_duplicate_primary_descriptor(self):
        self.image[17*S] = 1
        self.reject('duplicate')

    def test_oversized_root(self):
        dual(self.image, 16*S+166, subject.MAX_ROOT+1)
        self.reject('oversized')

    def test_root_outside_volume(self):
        dual(self.image, 16*S+158, len(self.image)//S+1)
        self.reject('outside')

    def test_root_not_directory(self):
        self.image[16*S+156+25] = 0
        self.reject('root')

    def test_root_overlaps_descriptors(self):
        dual(self.image, 16*S+158, 17)
        self.reject('overlaps')

    def test_bad_record_length(self):
        self.image[self.offsets[2]] = 4
        self.reject('Malformed')

    def test_bad_identifier_length(self):
        self.image[self.offsets[2]+32] = 255
        self.reject('identifier')

    def test_record_crosses_sector(self):
        # Fill the root with legal unused records until fewer than 34 bytes
        # remain, then advertise a record crossing the sector boundary.
        self.image[20*S:21*S] = b'\0'*S
        rec = record(b'X', 0, 0)
        end = 20*S
        while end+len(rec) < 21*S:
            self.image[end:end+len(rec)] = rec
            end += len(rec)
        self.image[end] = len(rec)
        self.reject('boundary')

    def test_nonzero_padding(self):
        self.image[self.offsets[3]+self.image[self.offsets[3]]+2] = 99
        self.reject('padding')

    def test_file_extent_outside_volume(self):
        dual(self.image, self.offsets[3]+2, len(self.image)//S)
        self.reject('outside')

    def test_file_overlaps_metadata(self):
        dual(self.image, self.offsets[3]+2, 20)
        self.reject('overlaps')

    def test_required_files_overlap(self):
        dual(self.image, self.offsets[2]+2, 22)
        self.reject('overlap')

    def test_duplicate_required_file(self):
        duplicate = record(b'system.cnf;1', 21, len(CNF))
        offset = self.offsets[3]+self.image[self.offsets[3]]
        self.image[offset:offset+len(duplicate)] = duplicate
        self.reject('Duplicate')

    def test_missing_required_file(self):
        self.image[self.offsets[3]+33] = ord('X')
        self.reject('Missing')

    def test_unsupported_iso_file_version(self):
        self.image[self.offsets[3]+33+len(b'SLUS_218.12;')] = ord('2')
        self.reject('version-1')

    def test_path_traversal_name(self):
        self.image[self.offsets[3]+33] = ord('/')
        self.reject('Unsafe')

    def test_multiextent(self):
        self.image[self.offsets[3]+25] = 128
        self.reject('Multi-extent')

    def test_interleaved_file(self):
        self.image[self.offsets[3]+26] = 1
        self.reject('interleaved')

    def test_wrong_boot(self):
        self.image[21*S+CNF.index(b'SLUS')] = ord('X')
        self.reject('does not boot')

    def test_duplicate_boot(self):
        cnf = CNF+CNF
        self.image[21*S:21*S+len(cnf)] = cnf
        dual(self.image, self.offsets[2]+10, len(cnf))
        self.reject('does not boot')

    def test_wrong_elf_size(self):
        dual(self.image, self.offsets[3]+10, len(ELF)-1)
        self.reject('ELF size')

    def test_wrong_elf_architecture(self):
        self.image[22*S+18] = 3
        self.reject('MIPS')

    def test_wrong_elf_magic(self):
        self.image[22*S] = 0
        self.reject('ELF32')

    def test_oversized_cnf(self):
        dual(self.image, self.offsets[2]+10, 4097)
        self.reject('SYSTEM.CNF size')

    def test_oversized_image_bound(self):
        with self.assertRaisesRegex(subject.PreparationError, 'complete raw'):
            subject._inspect(io.BytesIO(), subject.MAX_ISO+S, VERSION)

    def test_read_only_source(self):
        self.write()
        os.chmod(self.iso, 0o444)
        try:
            manifest = subject._prepare(self.iso, self.out, VERSION)
            self.assertEqual((self.out/'disc.iso').read_bytes(), bytes(self.image))
            self.assertTrue(manifest['source_opened_read_only'])
        finally:
            os.chmod(self.iso, 0o666)

    def test_wrong_entry(self):
        self.image[22*S+24] ^= 1
        self.reject('entry')

    def test_wrong_elf_hash(self):
        self.image[22*S+100] ^= 1
        self.reject('SHA-256')

    def test_public_api_does_not_accept_synthetic_elf(self):
        self.write()
        with self.assertRaisesRegex(subject.PreparationError, 'ELF size'):
            subject.prepare(self.iso, self.out)
        self.assertFalse(self.out.exists())

    def test_insufficient_space(self):
        with patch.object(subject.shutil, 'disk_usage', return_value=shutil._ntuple_diskusage(100, 100, 0)):
            self.reject('Insufficient')

    def test_copy_failure_rolls_back(self):
        self.write()
        before = self.iso.read_bytes()
        def failure(file, destination, size):
            destination.write_bytes(b'partial')
            raise OSError('injected write failure')
        with patch.object(subject, '_copy', side_effect=failure):
            with self.assertRaisesRegex(OSError, 'injected'):
                subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(self.iso.read_bytes(), before)
        self.assertFalse(self.out.exists())
        self.assertFalse(list(self.folder.glob('.speedracer-import-*')))

    def test_copy_hash_mismatch(self):
        original = subject._copy
        def corrupt(file, destination, size):
            result = original(file, destination, size)
            with destination.open('r+b') as output:
                output.write(b'X')
            return result
        with patch.object(subject, '_copy', side_effect=corrupt):
            self.reject('Copied ISO hash mismatch')

    def test_mutated_source_is_rejected(self):
        original = subject._copy
        def mutate(file, destination, size):
            result = original(file, destination, size)
            with self.iso.open('r+b') as output:
                output.write(b'X')
            return result
        self.write()
        with patch.object(subject, '_copy', side_effect=mutate):
            with self.assertRaisesRegex(subject.PreparationError, 'Source ISO changed'):
                subject._prepare(self.iso, self.out, VERSION)
        self.assertFalse(self.out.exists())
        self.assertFalse(list(self.folder.glob('.speedracer-import-*')))

    def test_publication_race_does_not_replace_empty_destination(self):
        self.write()
        original = subject._publish
        def race(staged, destination):
            destination.mkdir()
            original(staged, destination)
        with patch.object(subject, '_publish', side_effect=race):
            with self.assertRaises(OSError):
                subject._prepare(self.iso, self.out, VERSION)
        self.assertEqual(list(self.out.iterdir()), [])
        self.assertFalse(list(self.folder.glob('.speedracer-import-*')))

    def test_bounded_copy_fails_on_eof(self):
        with self.assertRaisesRegex(subject.PreparationError, 'EOF'):
            subject._copy(io.BytesIO(b'a'), self.folder/'partial', 2)

    def test_bounded_hash_fails_on_eof(self):
        with self.assertRaisesRegex(subject.PreparationError, 'EOF'):
            subject._hash(io.BytesIO(b'a'), 2)

    def test_bounded_copy_rejects_growth(self):
        with self.assertRaisesRegex(subject.PreparationError, 'grew'):
            subject._copy(io.BytesIO(b'abc'), self.folder/'partial', 2)

    def test_cli_help_and_missing_source(self):
        script = Path(subject.__file__)
        help_result = subprocess.run([sys.executable, '-X', 'utf8', str(script), '--help'], capture_output=True, text=True)
        self.assertEqual(help_result.returncode, 0)
        failure = subprocess.run([sys.executable, '-X', 'utf8', str(script), '--iso', str(self.iso), '--out', str(self.out)], capture_output=True, text=True)
        self.assertEqual(failure.returncode, 1)
        self.assertIn('Preparation failed', failure.stderr)
        self.assertFalse(self.out.exists())


if __name__ == '__main__':
    unittest.main(verbosity=2)
