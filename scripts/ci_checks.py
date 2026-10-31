"""Inventory CTest coverage and run the explicitly classified no-GPU tier.

No game files are consumed. Unknown test names fail rather than silently falling
out of CI. GPU/physical-device checks remain separately documented in docs/CI.md.
"""
import argparse
from collections import Counter
import json
from pathlib import Path
import re
import subprocess
import sys
import xml.etree.ElementTree as ET


CPU_TESTS = frozenset("""
vu_extra_manifest render_scale display osd_display audio_output frame_pacer
scripted_input vif_nop gs_mtba gs_date vif_path3 gs_bounds sio2_input
save_import media_import integrated_package data_pack host_paths atomic_file
card_lease sio2_save runtime_lifecycle_vu runtime_lifecycle_direct
runtime_lifecycle_empty vif_upload controllers keyboard vu_packet vu_q_inline
vu_q_inline_calls vu_q_delay_history vu_q_delay_history_full vu_q_analysis
vu_normalize vu_normalize_avx2 vu_isa vu_continuation vu_continuation_profile
vu_profile vu_code_equal speedracer_clock spu2_audio vu_local_cache
vu_local_cache_PS2_VU_LOCAL_BLOCKS_OFF vu_local_cache_PS2_VU_CONT_OFF
vu_local_cache_PS2_VU_INTERPRET vu_local_cache_PS2_VU_RANGE_REUSE_OFF
vu_local_differential vu_cache queue vu_clip_latency vu_clip_micro_fast
vu_clip_micro_exact gs_mip_cpu gs_mip_hazards gs_region gs_setup gs_reads
gs_snapshot gs_feedback
""".split())
VULKAN_TESTS = frozenset({"gs_scale_1x", "gs_scale_2x", "gs_scale_3x", "gs_scale_4x", "gs_mip_gpu"})
HARDWARE_GS_TESTS = frozenset({
    "gs_hw_runtime_direct", "gs_hw_runtime_queued", "gs_hw_runtime_window",
    "gs_hw_runtime_failurequeued", "gs_hw_runtime_missing",
})
# This workflow uses the full accepted Windows configuration. A reduced-feature
# build must have a separate explicit profile, not silently drop its regressions.
REQUIRED_CPU_TESTS = CPU_TESTS


def classify(tests):
    names = [test["name"] for test in tests]
    if len(set(names)) != len(names):
        raise ValueError("Duplicate test names in CTest inventory")
    known = CPU_TESTS | VULKAN_TESTS | HARDWARE_GS_TESTS
    unknown = set(names) - known
    if unknown:
        raise ValueError("Classify new tests in scripts/ci_checks.py: " + ", ".join(sorted(unknown)))
    missing = REQUIRED_CPU_TESTS - set(names)
    if missing:
        raise ValueError("Required CPU tests were not configured: " + ", ".join(sorted(missing)))
    return {
        "cpu": sorted(set(names) & CPU_TESTS),
        "not_run_requires_vulkan": sorted(set(names) & VULKAN_TESTS),
        "not_run_external_hardware_gs": sorted(set(names) & HARDWARE_GS_TESTS),
    }


def junit_result(path, selected):
    if not path.exists():
        return {"coverage_error": "CTest did not produce a JUnit report"}
    return junit_coverage(ET.parse(path).getroot(), selected)


def junit_coverage(root, selected):
    cases = root.findall(".//testcase")
    result = {
        "cpu_reported_count": len(cases),
        "cpu_skipped": [case.get("name") for case in cases if case.find("skipped") is not None],
        "cpu_failed": [case.get("name") for case in cases
                       if case.find("failure") is not None or case.find("error") is not None],
    }
    if Counter(case.get("name") for case in cases) != Counter(selected):
        result["coverage_error"] = "JUnit test names do not match the selected CPU tier"
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ctest", default="ctest")
    parser.add_argument("--build-dir", required=True, type=Path)
    parser.add_argument("--report", required=True, type=Path)
    parser.add_argument("--run-cpu", action="store_true")
    args = parser.parse_args()
    build = args.build_dir.resolve()
    report = args.report.resolve()
    report.parent.mkdir(parents=True, exist_ok=True)
    inventory = subprocess.run(
        [args.ctest, "--test-dir", str(build), "--show-only=json-v1"],
        capture_output=True, text=True, encoding="utf-8", errors="replace", check=True,
    )
    tests = json.loads(inventory.stdout)["tests"]
    tiers = classify(tests)
    result = {
        "schema": 1, "scope": "Compiled CTest no-GPU tier; no game or physical-device certification",
        "configured_count": len(tests), "tiers": tiers,
        "cpu_executed": False, "cpu_exit_code": None,
        "not_configured_external_hardware_gs": sorted(HARDWARE_GS_TESTS - {test["name"] for test in tests}),
        "physical_devices_tested": False,
    }
    report.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, indent=2), flush=True)
    if not args.run_cpu:
        return 0
    selection = "^(?:" + "|".join(re.escape(name) for name in tiers["cpu"]) + ")$"
    junit = report.with_suffix(".xml")
    # An old result must not provide coverage for a failed/new CTest invocation.
    junit.unlink(missing_ok=True)
    command = [args.ctest, "--test-dir", str(build), "--output-on-failure",
               "--parallel", "1", "--no-tests=error", "--output-junit", str(junit), "-R", selection]
    completed = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace")
    report.with_suffix(".log").write_text(completed.stdout + completed.stderr, encoding="utf-8")
    print(completed.stdout, end="", flush=True)
    print(completed.stderr, end="", file=sys.stderr, flush=True)
    result.update(cpu_executed=True, cpu_exit_code=completed.returncode)
    result.update(junit_result(junit, tiers["cpu"]))
    report.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return completed.returncode or (1 if result.get("coverage_error") or result.get("cpu_failed") else 0)


if __name__ == "__main__":
    raise SystemExit(main())
