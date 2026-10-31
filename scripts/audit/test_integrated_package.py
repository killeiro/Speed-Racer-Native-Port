"""Synthetic package filesystem tests; no game data or gameplay claims."""
from pathlib import Path
import hashlib
import json
import os
import struct
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch
from types import SimpleNamespace
import integrated_package as subject


def gui():
    data = bytearray(160)
    data[:2] = b'MZ'; struct.pack_into('<I', data, 60, 64)
    data[64:68] = b'PE\0\0'; struct.pack_into('<H', data, 68, 0x8664)
    struct.pack_into('<H', data, 88, 0x20b); struct.pack_into('<H', data, 156, 2)
    return data


class Package(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory(prefix='sr-integrated-test-')
        self.root = Path(self.tmp.name)/'Equipe João 雨'; self.root.mkdir()
        self.base = self.root/'base'; self.base.mkdir()
        files = {'SpeedRacer.exe': gui(), 'SpeedRacerGS.dll': b'fixture-DLL',
                 'data/game.srpak': b'SRDATA1\0'+bytes(128), 'data/SLUS_218.12': b'fixture-ELF',
                 'DEPENDENCIES.json': b'{}\n', 'LEIA-ME.txt': b'fixture guide\n'}
        info = dict(version='v38-fixture', source_commit='a'*40, ISO_required_to_play=False,
                    exe_sha256=hashlib.sha256(files['SpeedRacer.exe']).hexdigest(), default_quality='High 3x')
        files['SOURCE-INFO.json'] = json.dumps(info).encode()
        self.entries = {}
        for name, data in files.items():
            path = self.base/name; path.parent.mkdir(parents=True, exist_ok=True); path.write_bytes(data)
            self.entries[name] = subject.digest(path)
        self.write_manifest(self.entries)
    def tearDown(self):
        self.tmp.cleanup()
    def write_manifest(self, entries):
        (self.base/subject.MANIFEST).write_text(json.dumps(entries), encoding='utf-8')
        self.pin = subject.digest(self.base/subject.MANIFEST)
    def stage(self, name='candidate', **kw):
        return subject.stage(self.base, self.root/name, 'v38-check', self.pin, **kw)
    def assert_no_stage(self):
        self.assertEqual(list(self.root.glob('.speedracer-stage-*')), [])
    def test_verify_and_unicode_stage(self):
        self.assertEqual(subject.verify(self.base, self.pin), self.entries)
        result = self.stage(); output = self.root/'candidate'
        got = subject.verify(output, result['manifest_sha256'])
        self.assertEqual(got['data/game.srpak'], self.entries['data/game.srpak'])
        self.assertFalse((output/'saves').exists()); self.assert_no_stage()
        metadata = json.loads((output/'SOURCE-INFO.json').read_text())
        self.assertEqual(metadata['candidate_gameplay_validation'], 'pending; do not inherit parent acceptance')
        self.assertEqual(subject.verify(self.base, self.pin), self.entries)
    def test_manifest_pin_required(self):
        for pin in ['', None, '0'*64, 'A'*64]:
            with self.subTest(pin=pin), self.assertRaises(ValueError):
                subject.verify(self.base, pin)
    def test_content_corruption_refuses_publication(self):
        (self.base/'data/game.srpak').write_bytes(b'corrupt')
        with self.assertRaises(ValueError): self.stage()
        self.assertFalse((self.root/'candidate').exists()); self.assert_no_stage()
    def test_duplicate_json_keys(self):
        (self.base/subject.MANIFEST).write_text('{"x":"a","x":"b"}')
        with self.assertRaises(ValueError): subject.verify(self.base, subject.digest(self.base/subject.MANIFEST))
    def test_portable_manifest_paths(self):
        for name in ['../outside','/absolute','x//y','x/./y','x\\y','C:/x','x:stream','NUL.txt',
                     'COM1/test','x.','x ','x/../y','bad\0name','a?b','./x']:
            with self.subTest(name=name):
                entries = {**self.entries, name: '0'*64}; self.write_manifest(entries)
                with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_case_and_parent_collisions(self):
        for name in ['speedracer.EXE','data']:
            with self.subTest(name=name):
                self.write_manifest({**self.entries, name: '0'*64})
                with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_user_data_cannot_enter_manifest(self):
        for name in ['saves/speedracer.ps2','SpeedRacer.ini','Keyboard.ini','cache/a.bin','diagnostics/a.txt','source.iso','run.log']:
            with self.subTest(name=name):
                self.write_manifest({**self.entries, name: '0'*64})
                with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_required_files(self):
        for name in subject.REQUIRED:
            with self.subTest(name=name):
                self.write_manifest({n:h for n,h in self.entries.items() if n != name})
                with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_invalid_hash_type_and_length(self):
        for invalid in [None, 123, 'a', 'z'*64]:
            with self.subTest(invalid=invalid):
                self.write_manifest({**self.entries, 'LEIA-ME.txt': invalid})
                with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_untracked_content(self):
        (self.base/'accidental.bin').write_bytes(b'extra')
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin, installed=True)
    def test_untracked_empty_directory(self):
        (self.base/'unknown').mkdir()
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_installed_profile_is_not_copied_by_default(self):
        (self.base/'saves').mkdir(); (self.base/'saves/speedracer.ps2').write_bytes(b'user-progress')
        (self.base/'SpeedRacer.ini').write_bytes(b'resolution=3\n')
        (self.base/'cache').mkdir(); (self.base/'cache/private.bin').write_bytes(b'GPU-cache')
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
        subject.verify(self.base, self.pin, installed=True)
        result = self.stage(); candidate = self.root/'candidate'
        subject.verify(candidate, result['manifest_sha256'])
        self.assertFalse((candidate/'saves').exists()); self.assertFalse((candidate/'cache').exists())
        self.assertFalse((candidate/'SpeedRacer.ini').exists())
    def test_explicit_profile_preserved_in_source_and_candidate(self):
        profile = self.root/'profile'; (profile/'saves').mkdir(parents=True)
        card = profile/'saves/speedracer.ps2'; card.write_bytes(b'complete-progress')
        config = profile/'SpeedRacer.ini'; config.write_bytes(b'resolution=2\nantialiasing=off\n')
        result = self.stage(profile=profile); target = self.root/'candidate'
        self.assertEqual(result['profile_files_copied'], 2)
        self.assertEqual(card.read_bytes(), b'complete-progress')
        self.assertEqual((target/'saves/speedracer.ps2').read_bytes(), card.read_bytes())
        self.assertEqual((target/'SpeedRacer.ini').read_bytes(), config.read_bytes())
        subject.verify(target, result['manifest_sha256'], installed=True)
        with self.assertRaises(ValueError): subject.archive(target, self.root/'private.zip', result['manifest_sha256'])
        self.assertFalse((self.root/'private.zip').exists())
    def test_interrupted_settings_are_installed_only(self):
        pending = self.base/'SpeedRacer.ini.pending.321.1'; pending.write_bytes(b'partial settings')
        subject.verify(self.base, self.pin, installed=True)
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
        result = self.stage()
        self.assertFalse((self.root/'candidate'/pending.name).exists())
        self.assertEqual(pending.read_bytes(), b'partial settings')
        subject.verify(self.root/'candidate', result['manifest_sha256'])
    def test_keyboard_overrides_are_private_profile_data(self):
        config = self.base/'Keyboard.ini'; config.write_bytes(b'[Keyboard]\npreset=classic\n')
        subject.verify(self.base, self.pin, installed=True)
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
        result = self.stage(); candidate = self.root/'candidate'
        self.assertFalse((candidate/'Keyboard.ini').exists())
        subject.verify(candidate, result['manifest_sha256'])
        copied = self.stage(name='with-keyboard', profile=self.base)
        target = self.root/'with-keyboard'
        self.assertEqual((target/'Keyboard.ini').read_bytes(), config.read_bytes())
        self.assertEqual(copied['profile_files_copied'], 1)
        subject.verify(target, copied['manifest_sha256'], installed=True)
        with self.assertRaises(ValueError): subject.archive(target, self.root/'private-keyboard.zip', copied['manifest_sha256'])
    def test_renderer_texture_directory_is_installed_only(self):
        texture = self.base/'textures'; texture.mkdir()
        subject.verify(self.base, self.pin, installed=True)
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
        (texture/'local.bin').write_bytes(b'local renderer data')
        subject.verify(self.base, self.pin, installed=True)
        result = self.stage()
        self.assertFalse((self.root/'candidate/textures').exists())
        self.assertEqual((texture/'local.bin').read_bytes(), b'local renderer data')
        subject.verify(self.root/'candidate', result['manifest_sha256'])
    def test_missing_profile_is_error(self):
        profile = self.root/'profile'; profile.mkdir()
        with self.assertRaises(ValueError): self.stage(profile=profile)
        self.assert_no_stage()
    def test_profile_mutation_rolls_back(self):
        profile = self.root/'profile'; profile.mkdir(); (profile/'SpeedRacer.ini').write_bytes(b'original')
        original = subject.Stage.copy
        def mutate(stage, source, name, expected):
            original(stage, source, name, expected)
            if name == 'SpeedRacer.ini': Path(source).write_bytes(b'new-setting')
        with patch.object(subject.Stage, 'copy', mutate):
            with self.assertRaises(ValueError): self.stage(profile=profile)
        self.assertEqual((profile/'SpeedRacer.ini').read_bytes(), b'new-setting')
        self.assertFalse((self.root/'candidate').exists()); self.assert_no_stage()
    def test_existing_destinations_preserved(self):
        target = self.root/'candidate'; target.mkdir()
        with self.assertRaises(ValueError): self.stage()
        self.assertTrue(target.is_dir())
        marker = target/'keep'; marker.write_bytes(b'keep')
        with self.assertRaises(ValueError): self.stage()
        self.assertEqual(marker.read_bytes(), b'keep')
    def test_destination_race_no_overwrite(self):
        original = subject.os.rename
        def race(src, dst):
            Path(dst).mkdir(); (Path(dst)/'keep').write_bytes(b'raced')
            return original(src, dst)
        with patch.object(subject.os, 'rename', race):
            with self.assertRaises(OSError): self.stage()
        self.assertEqual((self.root/'candidate/keep').read_bytes(), b'raced'); self.assert_no_stage()
    def test_copy_failure_cleans_owned_files(self):
        original = subject.Stage.copy
        def fail(stage, source, name, expected):
            original(stage, source, name, expected)
            if name == 'data/game.srpak': raise OSError('simulated disk error')
        with patch.object(subject.Stage, 'copy', fail):
            with self.assertRaises(OSError): self.stage()
        self.assertFalse((self.root/'candidate').exists()); self.assert_no_stage()
        self.assertEqual(subject.verify(self.base, self.pin), self.entries)
    def test_destination_inside_base_refused(self):
        with self.assertRaises(ValueError):
            subject.stage(self.base, self.base/'nested', 'v38-check', self.pin)
    def test_insufficient_space_before_staging(self):
        with patch.object(subject.shutil, 'disk_usage', return_value=SimpleNamespace(free=0)):
            with self.assertRaises(ValueError): self.stage()
        self.assertFalse((self.root/'candidate').exists()); self.assert_no_stage()
    def test_invalid_version(self):
        for value in ['../bad','', 'new version','a'*65]:
            with self.subTest(value=value), self.assertRaises(ValueError):
                subject.stage(self.base, self.root/'candidate', value, self.pin)
    def test_links_refused(self):
        original = subject.reparse
        def linked(path): return Path(path).name == 'game.srpak' or original(path)
        with patch.object(subject, 'reparse', linked):
            with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_replacement_GUI_and_commit(self):
        exe = self.root/'replacement.exe'; data = gui(); data.extend(b'new-compiled-code'); exe.write_bytes(data)
        with self.assertRaises(ValueError): self.stage(executable=exe)
        result = self.stage(executable=exe, source_commit='b'*40)
        info = json.loads((self.root/'candidate/SOURCE-INFO.json').read_text())
        self.assertEqual(info['exe_sha256'], subject.digest(exe))
        self.assertFalse(info['runtime_executable_identical_to_parent'])
        subject.verify(self.root/'candidate', result['manifest_sha256'])
    def test_non_GUI_or_wrong_architecture_rejected(self):
        for at, value in [(156,3),(68,0x14c),(88,0x10b)]:
            with self.subTest(at=at):
                data = gui(); struct.pack_into('<H', data, at, value)
                exe = self.root/'bad.exe'; exe.write_bytes(data)
                with self.assertRaises(ValueError): self.stage(executable=exe, source_commit='b'*40)
    def test_metadata_cannot_claim_another_executable(self):
        path = self.base/'SOURCE-INFO.json'; info = json.loads(path.read_text()); info['exe_sha256']='0'*64
        path.write_text(json.dumps(info)); self.entries['SOURCE-INFO.json']=subject.digest(path); self.write_manifest(self.entries)
        with self.assertRaises(ValueError): subject.verify(self.base, self.pin)
    def test_archive_crc_hashes_and_no_overwrite(self):
        path = self.root/'package.zip'; result = subject.archive(self.base, path, self.pin)
        self.assertEqual(result['sha256'], subject.digest(path))
        initial = path.read_bytes()
        with self.assertRaises(ValueError): subject.archive(self.base, path, self.pin)
        self.assertEqual(path.read_bytes(), initial)
    def test_archive_mutation_not_published(self):
        original = subject.zipfile.ZipFile.write
        def corrupt(z, path, name):
            if str(path).endswith('LEIA-ME.txt'): Path(path).write_bytes(b'changed during archive')
            return original(z, path, name)
        with patch.object(subject.zipfile.ZipFile, 'write', corrupt):
            with self.assertRaises(ValueError): subject.archive(self.base, self.root/'bad.zip', self.pin)
        self.assertFalse((self.root/'bad.zip').exists())
        self.assertEqual(list(self.root.glob('.speedracer-zip-*')), [])
    def test_cli_verification_and_controlled_failure(self):
        command = [sys.executable, str(Path(subject.__file__)), 'verify', str(self.base), '--manifest-sha']
        ok = subprocess.run([*command,self.pin], capture_output=True, text=True)
        self.assertEqual(ok.returncode, 0); self.assertEqual(json.loads(ok.stdout)['integrity'],'verified')
        bad = subprocess.run([*command,'0'*64], capture_output=True, text=True)
        self.assertEqual(bad.returncode, 1); self.assertNotIn('Traceback',bad.stderr)


if __name__ == '__main__':
    unittest.main(verbosity=2)
