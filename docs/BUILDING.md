# Building the Windows port

This source snapshot exposes the host, runtime, recompilers, generated Speed Racer translation units, native VU blocks and regression tests used by the v0.1.0 line. The playable release remains the recommended download for players. The source tree is for auditing and development.

## Requirements

- Windows 11 x64, the locally tested host, with an AVX2-capable CPU/system.
- A Vulkan-capable GPU and current compatible graphics driver for renderer tests and gameplay.
- MSYS2 **MINGW64** toolchain: Clang with C++20 `<format>` support, GNU binutils, CMake, Ninja and SDL2. The inspected release build used Clang 23.1.3 and CMake 4.4.4 with the MinGW GNU C++ runtime. MSVC and CLANG64 are not this build recipe.
- Python 3.11 or newer. The scripts use the standard library; pass its executable explicitly if it is not on PATH.
- Pinned wgpu-native build inputs, fetched as described below.
- For building the hardware GS renderer: its pinned upstream archives/dependency bundle, a Windows `tar` capable of reading 7z files, and a Microsoft Visual C++ v14 x64 Runtime installation for the upstream dependency DLLs.

In an MSYS2 MINGW64 terminal, the relevant package names are:

```sh
pacman -S --needed mingw-w64-x86_64-clang mingw-w64-x86_64-binutils mingw-w64-x86_64-cmake mingw-w64-x86_64-ninja mingw-w64-x86_64-SDL2
```

These package names install the currently available toolchain. The source/dependency manifests identify the tested inputs; installing current packages does not guarantee a byte-identical copy of the published binary.

## Get the complete source snapshot

Clone the repository or extract the complete source archive. Keep `generated/speedracer`, its dot-prefixed manifests, and `native/vu-local` together with the host/runtime sources. A sparse checkout that omits these directories cannot build the accepted native coverage.

The generated-input manifests hash the exact source bytes. **Preserve line endings.** The repository's `.gitattributes` treats the corresponding generated files as binary/no text conversion. Do not run CRLF/LF normalization or a formatter over them. The build checks the extra VU program hash and registration count; a mismatch is a build error, not a reason to bypass the check.

The source is compilable without an ISO or an installed copy of PCSX2. Running the game requires the integrated data described under “Run your build”; game data and personal saves are not source-build inputs.

## Fetch the pinned build dependency

From PowerShell at the source root:

```powershell
python .\scripts\fetch_build_deps.py --cache .\build\downloads
```

This installs the verified wgpu-native inputs under `third_party/wgpu-native`. The fetcher checks the locked archive and extracted input hashes. A changed upstream download must fail verification rather than silently changing the build. You may use an already verified wgpu-native directory through `-Wgpu` below.

## Build the hardware GS renderer

The hardware renderer is a separate DLL behind the port's C ABI. It uses pinned PCSX2/kzgs source components; it does not launch PCSX2 or replace the port's EE/VU runtime. Its build and source adapter are included for audit and modification.

Choose a **new** work directory; the recipe refuses to overwrite an existing one:

```powershell
python .\scripts\audit\build_hw_gs.py --work .\build\gs-source --cache .\build\downloads --tools C:/msys64/mingw64/bin --jobs 4
```

The recipe verifies its upstream inputs, prepares the compatibility adapter, builds the DLL and runs its bridge tests. Its dependency bundle is pinned by SHA256; `PCSX2-build-dependencies-a3133c78.7z` preserves that build input. See `native/gs_hw/README.md` for the renderer ABI, compatibility changes, tests and component notices. The resulting DLL and resource/runtime files are under `build/gs-source/build`.

## Configure, build and run regression tests

The default wrapper builds **all** targets before running CTest, so the registered test executables exist:

```powershell
.\scripts\build_windows.ps1 -Python C:/Path/To/python.exe -HardwareGSDll .\build\gs-source\build\SpeedRacerGS.dll
```

`-Tools` defaults to `C:/msys64/mingw64/bin`. `-Jobs` defaults to 4. `-BuildDir` defaults to `build/native` under the source tree; a supplied relative directory resolves from the caller's working directory. `-Wgpu` defaults to `third_party/wgpu-native` under the source tree. Use a separate build directory, never the source root.

The wrapper configures Release, the Speed Racer GUI/hardware/portable targets, AVX2 VU code, the included local VU blocks and differential fixture, and SDL2. Development ISO/data fallback paths are explicitly empty. It leaves VU replay capture and the separate continuation experiment overlay disabled; accepted continuations in `generated/speedracer/extra` are still included.

`-HardwareGSDll` enables the opt-in hardware GS runtime CTests against that DLL and its adjacent dependency/resource files. Without it, those external-DLL tests are not newly enabled. When changing whether this option is used, choose a fresh build directory to avoid retaining an earlier CMake cache value.

Useful variations:

```powershell
# Configure only, without compiling or running tests.
.\scripts\build_windows.ps1 -Python C:/Path/To/python.exe -ConfigureOnly

# Build without compiling/registering/running the focused regression suite.
.\scripts\build_windows.ps1 -Python C:/Path/To/python.exe -BuildDir .\build\native-no-tests -NoTests

# Rerun already-built tests after a targeted source edit/build.
C:/msys64/mingw64/bin/ctest.exe --test-dir .\build\native --output-on-failure --parallel 1
```

The wrapper restores the caller's PATH and existing `PS2_`, `SRGS_` and `KZGS_` environment overrides after completion or failure. Build/test children run without those private diagnostic overrides. It does not erase build directories, alter saves or edit generated source files.

The keyboard/controller tests use SDL2 but do not certify physical input polling or every device/key combination. GPU tests require a working Vulkan driver. Test counts depend on the configured optional dependencies and DLL; report the actual configured count and results instead of copying an earlier release's count.

## Run your build

The official hardware launcher target is **`SpeedRacerHardware`**, outputting:

```text
build/native/experimental-hardware/SpeedRacer.exe
```

`build/native/SpeedRacer.exe` is the separate compute-renderer launcher. `ps2run.exe` is a developer runner. They are not interchangeable when comparing a change with the published hardware-renderer release.

Create a new local test folder from the complete playable v0.1.0 package and preserve its original ZIP and your existing saves. Replace the copied `SpeedRacer.exe` with the built hardware launcher. For a renderer change, also stage the rebuilt `SpeedRacerGS.dll` and **all** of its adjacent runtime DLLs and resource files. Keep the data layout:

```text
<isolated test folder>/
  SpeedRacer.exe
  SpeedRacerGS.dll
  <runtime DLLs and renderer resources>
  data/
    game.srpak
    SLUS_218.12
```

Open `SpeedRacer.exe` from the isolated folder. This keeps integrated-data loading without selecting an ISO. Keep High 3×, bilinear HUD/textures, FXAA, adaptive fullscreen and the configured control preset when making a like-for-like comparison. Read the package's `KEYBOARD.md` and `KNOWN-ISSUES.md`.

Do not run development builds over the team's reference folder or someone else's saves. Use a new QA profile or copy a save explicitly into your isolated test folder if the reproduction requires progress.

## Recompilation and reproducibility scope

The snapshot includes the accepted generated EE/VU sources and the 40 local VU blocks so a source build does not depend on a maintainer-only `work` directory. The recompilers and generation helpers are included for inspection and future work. Recreating the **same** generated tree from scratch additionally requires the exact discovered EE entries and captured VU input sets; a fresh short recording is not equivalent to the accepted coverage. Generated manifests identify the snapshot that was built.

Successful compilation and passing tests demonstrate the stated source/build coverage. PE timestamps, embedded diagnostic paths, compiler versions and link ordering can change output bytes. This publication does **not** assert a byte-identical rebuild of the existing v0.1.0 EXE or DLL unless a separate result explicitly demonstrates it. Keep the existing release asset hashes when identifying the published download.

For a contribution, record the source commit, toolchain versions, dependency identities, configure options and relevant test results. Use a small PR with a concrete reproduction and before/after evidence. Rendering/audio changes need matching integrated-data checks; a unit-test pass alone does not certify every track, audio category or sustained 60 fps.
