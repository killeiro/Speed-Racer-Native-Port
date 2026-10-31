"""Exercise the CI coverage boundary, especially false-green omissions."""
import importlib.util
import io
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch
import xml.etree.ElementTree as ET

path = Path(__file__).resolve().parents[1] / "scripts/ci_checks.py"
spec = importlib.util.spec_from_file_location("ci_checks", path)
ci = importlib.util.module_from_spec(spec)
spec.loader.exec_module(ci)


class CoverageBoundary(unittest.TestCase):
    def inventory_for(self, names):
        return [{"name": name} for name in names]

    def test_required_coverage_is_not_optional(self):
        for names in ([], ci.REQUIRED_CPU_TESTS - {"keyboard"}):
            with self.assertRaisesRegex(ValueError, "Required CPU tests"):
                ci.classify(self.inventory_for(names))

    def test_new_tests_require_classification(self):
        with self.assertRaisesRegex(ValueError, "Classify new tests"):
            ci.classify(self.inventory_for(ci.REQUIRED_CPU_TESTS | {"new_gpu_test"}))

    def test_external_requirements_remain_visible(self):
        tiers = ci.classify(self.inventory_for(ci.CPU_TESTS | ci.VULKAN_TESTS | ci.HARDWARE_GS_TESTS))
        self.assertEqual(set(tiers["cpu"]), ci.CPU_TESTS)
        self.assertEqual(set(tiers["not_run_requires_vulkan"]), ci.VULKAN_TESTS)
        self.assertEqual(set(tiers["not_run_external_hardware_gs"]), ci.HARDWARE_GS_TESTS)
        self.assertFalse(set(tiers["cpu"]) & (ci.VULKAN_TESTS | ci.HARDWARE_GS_TESTS))

    def test_duplicate_inventory_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "Duplicate"):
            ci.classify(self.inventory_for(list(ci.REQUIRED_CPU_TESTS) + ["keyboard"]))

    def test_same_count_with_wrong_or_duplicate_junit_names_fails(self):
        for xml in ('<testsuite><testcase name="one"/><testcase name="wrong"/></testsuite>',
                    '<testsuite><testcase name="one"/><testcase name="one"/></testsuite>'):
            self.assertIn('coverage_error', ci.junit_coverage(ET.fromstring(xml), ['one', 'two']))

    def test_missing_junit_and_skips_are_not_passing_coverage(self):
        missing = Path(__file__).parent / 'ci-deliberately-missing-junit.xml'
        self.assertIn('coverage_error', ci.junit_result(missing, ['one']))
        xml = ET.fromstring('<testsuite><testcase name="one"><skipped/></testcase></testsuite>')
        result = ci.junit_coverage(xml, ['one'])
        self.assertEqual(result['cpu_skipped'], ['one'])
        self.assertNotIn('coverage_error', result)
        self.assertNotEqual(ci.result_status(0, result), 0)

    def test_windows_console_preserves_failure_output_without_encoding_crash(self):
        output, errors = io.BytesIO(), io.BytesIO()
        stdout = io.TextIOWrapper(output, encoding='cp1252', errors='strict')
        stderr = io.TextIOWrapper(errors, encoding='cp1252', errors='strict')
        with patch.object(sys, 'stdout', stdout), patch.object(sys, 'stderr', stderr):
            ci.configure_console()
            print('failure path: \u7af6\u8cfd', flush=True)
            print('error path: \u7af6\u8cfd', file=sys.stderr, flush=True)
        self.assertIn(b'\\u7af6\\u8cfd', output.getvalue())
        self.assertIn(b'\\u7af6\\u8cfd', errors.getvalue())

    def test_selection_uses_actual_ctest_regex_and_exact_names(self):
        ctest = os.environ.get('CI_CTEST') or shutil.which('ctest')
        self.assertTrue(ctest, 'CTest is required for this integration check; set CI_CTEST or PATH')
        fixture_root = path.parents[1] / 'build/ci-selection-tests'
        fixture_root.mkdir(parents=True, exist_ok=True)
        selected = ['cpu_case', 'cpu_case_calls', 'cpu.case']
        decoys = ['cpu_case_suffix', 'x_cpu_case', 'cpuXcase']
        # Keep the disposable fixture inside the build tree, not a private save
        # directory or the OS temp location. Verify the absolute cleanup target.
        with tempfile.TemporaryDirectory(dir=fixture_root) as temporary:
            fixture = Path(temporary).resolve()
            self.assertTrue(fixture.is_relative_to(fixture_root.resolve()))
            python = Path(sys.executable).as_posix()
            commands = [f'add_test({name} "{python}" "-c" "pass")\n'
                        for name in selected + decoys]
            (fixture / 'CTestTestfile.cmake').write_text(''.join(commands), encoding='utf-8')
            result = subprocess.run(
                [ctest, '--test-dir', str(fixture), '--show-only=json-v1',
                 '-R', ci.selection_regex(selected)],
                capture_output=True, text=True, encoding='utf-8', errors='replace', check=True,
            )
            actual = [test['name'] for test in json.loads(result.stdout)['tests']]
            self.assertCountEqual(actual, selected)
        with self.assertRaisesRegex(ValueError, 'must not be empty'):
            ci.selection_regex([])


if __name__ == "__main__":
    unittest.main()
