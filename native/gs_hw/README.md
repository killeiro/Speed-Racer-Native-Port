# Speed Racer native Vulkan GS

This directory contains the GS bridge corresponding to the renderer used by
the playable **v0.1.0** release. It embeds the hardware GS from pinned PCSX2/kzgs
sources in `SpeedRacerGS.dll`; it does not launch the PCSX2 application, emulate
the EE, or load a BIOS. The native port supplies ordered GIF transfers and
privileged-register snapshots through the versioned `srgs_get_api` C interface.

## Release source correspondence

The accepted bridge is the **v30** checkpoint
`93add46d9ae0c107a10b18b8a53e6abcde85f4f3` from the original development history.
The v0.1.0 host/runtime includes later improvements; its bundled GS deliberately
remains this accepted renderer. The later experimental v31 GS tracing build is
not the released renderer and is not selected by this source snapshot.

- Original accepted GS SHA256:
  `7d2992096708714225a399f092153ecb1a0f7234ca503e97143d7aec2ada0dc2`.
- Public v0.1.0 GS SHA256:
  `d8058a3be3757ab766c176840e79841c2d72bf8c94b6535a85fae020e33ccc5a`.

The public DLL derives from the original by replacing 52 diagnostic build-path
prefixes in `.rdata` with an equal-length generic prefix and recalculating the
PE checksum. Instructions, resources, imports, exports and section layout were
preserved. That packaging derivation is distinct from compiling the source.
This source correspondence does **not** claim that a fresh build produces the
same binary hash: compiler versions, build paths, timestamps and dependency
metadata can affect it. Do not replace a published release asset with a local
rebuild without separate validation.

## Build and tests

Use Windows x64 with an AVX2-capable CPU/system, Vulkan graphics drivers,
Python 3.11 or newer, Windows `tar`, and a Clang/MinGW toolchain with CMake and Ninja.
The tested toolchain was Clang 23.1.3 in MSYS2 MINGW64.

From the repository root, for example:

```powershell
python scripts/audit/build_hw_gs.py --work build/gs --cache build/download-cache --tools C:/msys64/mingw64/bin --jobs 4
```

`--work` must name a new directory. Downloads may be reused through `--cache`.
Every source/dependency archive is checked against a fixed SHA256 before use.
The recipe prepares a separate compatibility adapter, builds the bridge and runs
the four accepted synthetic GS tests. It consumes no game files or saves and
does not change the installed toolchain or a player package. A subsequent
standalone CMake configuration can set `SRGS_KZGS_SOURCE_DIR` to the generated
`build/gs/mingw` adapter.

Pinned inputs are recorded in `scripts/audit/build_hw_gs.py`:

| Input | Revision |
| --- | --- |
| PCSX2 | `646df006a4688063e56c0826e7ea4b8bb0c112c4` |
| kzgs from KillzoneRecomp | `5f0700079f9ac4e14799d66d01747dbcdcec55f6` |
| Windows dependency bundle | SHA256 `a3133c7841e8fbdab6f4d1d5ad8efec31fb1ecda95ffed39f4d1f36bb7eb0007` |

The dependency bundle is mirrored under the project v0.1.0 release using its
fixed hash in the filename. The original upstream URL remains in the lock
metadata. Arbitrary newer upstream sources or bundles are not interchangeable.
`compat.py` records the MinGW aligned-allocation/intrinsic, inline, Windows COM
ABI, UUID and assembly adaptations, plus Speed Racer identity/GS settings.
Original inputs are preserved beside patched sources for inspection.

The tests cover C loading/ABI, all scales 1–4, packets and invalid arguments,
pixels, readback, reset, sampled native-VRAM save/load with full redraw,
repeated close/unload, and forced HUD/sprite filtering. They are synthetic
correctness checks; they are not a whole-game visual, audio or FPS guarantee.

## Runtime contract and rendering settings

Calls must be serialized by the port's GS consumer. Close before unloading.
No C++ allocator/object/exception ownership crosses the fixed-width C boundary.
The host retains SIGNAL/FINISH/LABEL, CSR/IMR interrupt handling and guest timing.
Hardware FIFO reads are synchronous. PATH1 must be a complete EOP-terminated
packet of at most 1 MiB; PATH2/3 allow stream fragments. Preserve GIF path order.

Only Vulkan is exposed by this bridge. For SLUS-21812, half-pixel mode 2,
SpritesOnly auto-flush mode 1, zero native-scaling hacks and CRT overscan retain
the original active display and lower HUD. The GUI defaults to High 3×,
bilinear HUD/textures and FXAA. `PS2_GS_LINEAR=0|1` selects original/forced
texture sampling and `PS2_GS_FXAA=0|1` controls FXAA through the Windows process
environment. Ordinary GUI settings live in `SpeedRacer.ini`; standalone calls
retain their explicit C configuration. Texture replacement, SMAA and AA1 are
disabled. No new texture detail is synthesized by filtering or FXAA.

The loader preloads adjacent `shaderc_shared.dll` for worker-side compilation;
keep the generated DLL dependencies and staged resources together. GS native
freeze data does not preserve individual upscaled samples or cached GPU targets:
draw a full new frame after restore. It is separate from in-game memory-card
saves, and the runtime rejects its unrelated checkpoint format on this backend.

## Component notices

The bridge and tests are GPL-3.0-or-later; preserve `COPYING.GPL-3.0` and the
PCSX2/kzgs and dependency notices supplied by the pinned sources. This source
target contains no ISO, ELF, game data or personal save.
