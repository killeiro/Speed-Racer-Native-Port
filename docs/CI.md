# Automated checks and their limits

The `Source checks` workflow uses hosted runners and read-only `contents`
permission. It does not publish releases, write commits, use repository secrets,
run on a maintainer's machine, or download game files. Fork PRs run as ordinary
`pull_request` jobs, never `pull_request_target`. Checkout credentials are not
persisted. Actions are pinned to full commit IDs.

## Coverage

| Check | What it establishes | What it does not establish |
| --- | --- | --- |
| Source integrity | Tracked snapshot bytes match the deliberately updated manifest; CI classification guard works | Security certification or correctness of arbitrary changes |
| Windows compile and CPU tests | All port targets compile with the public MINGW64 recipe; explicitly classified no-GPU CTests execute | Hardware GS DLL build, Vulkan rendering, real game audio/performance or physical controller support |
| Separate renderer verification | Build pinned GS through `scripts/audit/build_hw_gs.py` and run applicable bridge/runtime tests with a working Vulkan driver | Whole-game fidelity or all-track acceptance |
| Targeted integrated-package checks | Changed behavior works within a documented game scenario and isolated package | Every route, device, OS or sustained 60 FPS |

The Windows workflow does not pass `-HardwareGSDll`. Its receipt explicitly says
the external GS was not built, and the test report lists hardware tests that were
not configured. The five compute-GPU tests are inventoried but not executed on
the hosted runner. Several GS preparation tests exercise actual source entirely
on the CPU and are included; their names alone do not indicate Vulkan coverage.

`scripts/ci_checks.py` reads CTest's JSON inventory, rejects unknown names and
missing mandatory coverage, selects the exact CPU tier, and writes CTest JUnit
plus a JSON report. Skips remain listed as skips and fail this supported-AVX2
profile: all 60 selected CPU tests must actually pass. The full UTF-8 log and
final JSON result are saved before console output, which escapes characters
that a local Windows console cannot represent. Adding a test requires an
explicit classification and appropriate runner; a new test must not disappear
behind a permissive name pattern.

## Run the same host checks locally

Use a fresh build directory. Fetch the verified wgpu dependency as described in
[BUILDING.md](BUILDING.md), then run:

```powershell
$env:CI_CTEST = 'C:/msys64/mingw64/bin/ctest.exe'
python -B -m unittest discover -s tests -p ci_checks_test.py -v
.\scripts\ci_windows.ps1 -Tools C:/msys64/mingw64/bin -Python C:/Path/To/python.exe
```

This compiles all host/runtime/game targets but runs only the no-GPU tier. The
coverage guard also exercises CTest's actual regular-expression engine on a
tiny generated test inventory, including similar names that must not match.
It requires CTest on PATH or the explicit `CI_CTEST` path; it does not skip that
check when CTest is missing. The
normal `build_windows.ps1` command still runs the full configured CTest suite.
For already configured builds, inventory without executing tests using:

```powershell
python scripts/ci_checks.py --ctest C:/msys64/mingw64/bin/ctest.exe --build-dir build/ci-native --report build/ci-reports/cpu-tests.json
```

The CI receipt records tool versions, MSYS2 package versions when available,
dependency/source-manifest hashes and built launcher hashes. MSYS2 packages and
hosted runner images advance; this is an observable clean-build recipe, not a
bit-identical reconstruction of the published v0.1.0 binaries. MINGW64 is retained
to match that recipe despite its upstream deprecation; a toolchain migration
needs independent validation rather than an incidental CI change.

Only `build/ci-reports` is retained for seven days. No EXE/DLL, game data or save
is uploaded. Local reports can contain local build paths: review them before
sharing. Never upload an entire working directory to diagnose a failure.

## Review and branch protection

A prepared workflow is not evidence that GitHub has executed it. Inspect the
actual run's source commit, result and coverage before claiming a pass. Enable
required status checks only after the workflow has succeeded on the repository.
Renderer/runtime changes still need the separate checks above; a green CPU job
does not waive them. Physical USB/Bluetooth input and category-specific game
audio require relevant manual or purpose-built validation.

For legitimate source changes, deliberately refresh the current development
manifest after inspecting the diff. Preserve the historical `source-v0.1.0` tag,
its manifest, release archive and receipts. Do not overwrite historical evidence
or bypass a generated-input hash mismatch to obtain a green check.
