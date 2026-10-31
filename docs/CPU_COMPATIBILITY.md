# CPU compatibility and startup checks

This is a source-level audit of the `source-v0.1.0` build recipe and startup
paths. It records requirements and remaining verification work; it does not
certify every instruction in the published EXE or bundled DLLs. No unsupported
CPU crash was reproduced during this audit.

## Current build contract

The supported recipe targets Windows x64. Windows 11 is the locally tested
host. The recommended hardware-renderer build requires AVX2 support exposed by
both the CPU and operating system. Its GS compiler options also enable FMA,
which is a separate CPU feature and needs to be included in the compatibility
contract. Vulkan graphics and the stated runtime dependencies remain separate
requirements.

| Component | Source evidence | Consequence |
| --- | --- | --- |
| Generated VU programs and accepted native blocks | `CMakeLists.txt` assigns `-mavx2 -mno-fma -ffp-contract=off` when `PS2_VU_AVX2` is on | AVX2 is required for this code path; floating-point contraction is deliberately disabled |
| Windows build wrapper | `scripts/build_windows.ps1` sets `PS2_VU_AVX2=ON` | The supported recipe does not select a lower-ISA VU variant |
| Hardware GS and bridge | `native/gs_hw/compat.py` supplies `-mavx2 -mfma` through `kzgs_flags`; the bridge links those flags | The renderer is an independent AVX2/FMA build, regardless of the VU option |
| Host/runtime startup | `host/main.cpp` calls `__builtin_cpu_init()` and checks `__builtin_cpu_supports("avx2")` when the VU option is on | There is an AVX2 CPU/OS guard, but it does not separately test FMA |
| External libraries | `dependencies.lock.json` and the fetch/build scripts fix archive revisions and hashes | Identity is pinned; this alone does not establish each library's minimum ISA or its runtime dispatch behavior |

AVX2 is an instruction-set extension. Its presence in a build is not evidence
of virtualization and does not distinguish static recompilation from emulation.
The project's architectural distinction is explained in the source map and
provenance guides.

## Startup ordering inspected

The command-line runner checks its native-VU requirement before registering
generated EE/VU programs or initializing game execution. The inspected generated
registration tables contain code pointers and metadata; registration is invoked
explicitly by the runner. This observation is not an audit of every linked
library's static initialization.

The Windows launcher includes that runner and checks the same requirement before
normal game startup. Its `--verify-install` path checks AVX2 before loading the
graphics prerequisites. Save import, data preparation and help are separate
maintenance modes and may return before this game-execution guard.

The local startup-report path intentionally runs before normal game rejection
so it can report missing AVX2 support. It loads the system Vulkan loader to
report its version; it does not load `SpeedRacerGS.dll`. Consequently the report
is not a universal promise that no external library has been loaded.

The hardware renderer is loaded later by
`runtime/src/gs/hardware.cpp::ensure_open()`. That function loads the GS DLL and
shader compiler, obtains `srgs_get_api`, validates the C ABI, and opens the
renderer. It currently has no independent CPU-feature check before the DLL
load. ABI version/size validation is not a CPU compatibility check, and DLL
initializers execute before the host can call an exported API.

## Confirmed checks and open gap

The source establishes a mismatch between the renderer's enabled instruction
set and the host's explicit AVX2-only check. It does not establish that a
particular AVX2-capable machine has failed. A machine exposing AVX2 without FMA,
or a lower-ISA VU build selecting the same hardware GS, is not covered by the
current check.

In particular, `PS2_VU_AVX2=OFF` makes the VU guard return true; it does not
change the separately compiled GS DLL. That configuration must not be advertised
as an end-to-end non-AVX2 hardware-renderer build.

## Next bounded correction

The appropriate follow-up is a baseline-ISA CPU/OS capability helper with
separate VU and hardware-GS requirements. Reject unsupported hardware before
loading the optimized GS DLL, including command-line and headless hardware
entry paths. Keep maintenance-only modes usable where their own dependencies
allow it. Do not add a production environment switch that bypasses this check.

Verification should cover the capability decision for AVX2/FMA combinations,
the actual pre-load failure path, and successful startup on supported hardware.
Build settings must keep the detector and its callers free of instructions they
are meant to guard. A supported development machine cannot alone prove graceful
failure on unsupported hardware; document any simulated or virtualized coverage.
The shared-library loader must be considered before placing a check inside the
GS export itself.

Bundled dependencies still need a documented ISA/dispatch inventory. Source
flags and pinned hashes provide part of that inventory, not a complete binary
audit. Preserve the current accepted source and release while validating any
candidate correction separately.

## Lower-ISA builds

A supported build without AVX2 requires compatible VU, renderer and dependency
paths, not just one CMake switch. Establish numerical/visual correctness first,
then measure simulation speed and frame-time distribution with the same scene,
inputs and quality settings. No lower-ISA release or performance level is
promised by this document.

See [BUILDING.md](BUILDING.md), [SOURCE-MAP.md](SOURCE-MAP.md),
[SOURCE-PROVENANCE.md](SOURCE-PROVENANCE.md), and
[`native/gs_hw/README.md`](../native/gs_hw/README.md) for the current build and
component scope.
