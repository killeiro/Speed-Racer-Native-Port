# Architecture and component credits

This project adapts Speed Racer's PS2 execution to Windows through static
recompilation and a supporting runtime. It is not a clean-room rewrite of the
game engine, and a native Windows executable does not mean every console
component has been replaced with game-specific PC code.

## Execution path

```text
Integrated game data + accepted generated EE/VU sources
    -> Windows host and input/settings
    -> recompiled EE functions + runtime scheduling and PS2 services
    -> native VU programs/local blocks or runtime execution paths
    -> ordered GIF packets and GS register state
    -> hardware GS bridge -> Vulkan -> display
```

The [source map](SOURCE-MAP.md) identifies implementation files and tests.
The IOP, sound, DMA, VIF/GIF and other supporting behavior remain runtime
components. VU execution includes fallback paths; not every microprogram is
assumed to have a precompiled implementation.

| Layer | Origin and role | Review boundary |
| --- | --- | --- |
| Recompilers and PS2 runtime foundation | [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp), credited to Samir Nuri | Preserve upstream attribution; distinguish team changes from inherited code |
| Accepted EE/VU C++ and local blocks | Translated game code and discovered VU coverage | Generated inputs are versioned, hash-checked and distinct from handwritten code |
| Windows host and team adaptations | Integrated-data launch, packaging, keyboard/controllers, display/settings, GS integration and runtime fixes | Editable host/runtime code with explicit interfaces and applicable regression evidence |
| Hardware GS | Pinned PCSX2/kzgs components inside `SpeedRacerGS.dll` | Versioned C interface, upstream adapter, separate dependency notices and tests |
| Compute GS | Separate runtime renderer | Its tests do not certify the hardware renderer selected by the released launcher |

The hardware GS bridge reuses rendering code from PCSX2/kzgs. The project does
not start the PCSX2 application or use its full console runtime. Pin identities,
compatibility changes and component notices are documented in the
[GS README](../native/gs_hw/README.md) and [source provenance](SOURCE-PROVENANCE.md).

## Development and verification

The project was developed with **substantial AI assistance**. AI-generated
changes need the same scrutiny as any other contribution. The team must be
able to explain the affected behavior, inspect the implementation and state
what was actually verified. Agent review and test results are not independent
human review or a guarantee that no defects remain.

The [quality rules](CODE_QUALITY.md) define small-change and review expectations.
Compilation and focused tests establish bounded evidence. They do not certify
every track, hardware configuration or physical input device, and source
availability alone is not a malware audit.

## Build and provenance limits

AVX2 is a requirement of the current build, not proof of virtualization. The
VU and GS compilation paths have separate instruction-set flags. Changing one
flag is not sufficient to establish support for an older CPU. See the tested
requirements and dependency recipe in [BUILDING.md](BUILDING.md).

Use `source-v0.1.0` for the frozen source snapshot corresponding to the published
playable release. A source build does not require game data. Running the game
uses a separate isolated integrated package. Exact regeneration of all accepted
coverage and byte-identical reproduction of the published binaries are not
claimed. [SOURCE-PROVENANCE.md](SOURCE-PROVENANCE.md) explains those limits.

Retain the base project's [MIT notice](../LICENSE), the GS component notices and
the IPU [notice](../runtime/src/ipu/NOTICE). These component terms do not assign
ownership of the original game or its assets to this project.
