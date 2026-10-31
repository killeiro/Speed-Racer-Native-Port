"""Exercise the CI coverage boundary, especially false-green omissions."""
import importlib.util
from pathlib import Path
import unittest
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


if __name__ == "__main__":
    unittest.main()
