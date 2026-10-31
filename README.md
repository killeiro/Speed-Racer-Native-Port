# Speed Racer — Native Port 🏁

**Experimental Windows adaptation of Speed Racer (PlayStation 2), built on static recompilation and a supporting PS2 runtime.**

![Status](https://img.shields.io/badge/status-playable_release-green) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-v0.1.0-green)

> **Official project release v0.1.0:** download `SpeedRacer-Vanilla-v0.1.0-Windows-x64.zip` from [the recommended Release](https://github.com/killeiro/Speed-Racer-Native-Port/releases/tag/v0.1.0). Extract the complete folder and open `SpeedRacer.exe`.

## What this project is

The project builds on [Samir Nuri's ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp).
Accepted Emotion Engine (EE) functions and Vector Unit (VU) programs are
translated ahead of time into C++ and compiled for the PC. A runtime still
reproduces supporting PS2 hardware and system behavior. The released hardware
renderer embeds pinned [PCSX2](https://github.com/PCSX2/pcsx2)/kzgs GS components
inside `SpeedRacerGS.dll`; it does not launch the PCSX2 application.

This is a recompilation-based Windows project, not a complete rewrite of the
original game engine. The team's adaptations include Windows packaging,
integrated-data launching, input, rendering integration and game-specific runtime
fixes. **The project was developed with substantial AI assistance.** That does
not replace the need for understandable changes, review and measured validation.
See the [architecture and component credits](docs/ARCHITECTURE.md) and
[code quality rules](docs/CODE_QUALITY.md).

## Source code and development

**The native port sources are available for auditing, forks and pull requests.**
Use the [`source-v0.1.0` tag](https://github.com/killeiro/Speed-Racer-Native-Port/tree/source-v0.1.0)
for the source snapshot associated with the playable v0.1.0. It includes the
host/runtime, recompilers, accepted EE/VU translation units, Fuji native blocks,
the matching GS bridge and regression tests.

Start with [Windows build instructions](docs/BUILDING.md), the
[source map and contribution workflow](docs/SOURCE-MAP.md), and
[source/release provenance](docs/SOURCE-PROVENANCE.md).
`python scripts/verify_source.py` checks the current checkout's curated source
manifest without game data. The manifest at `source-v0.1.0` remains the immutable
release snapshot; later development manifests describe their own reviewed
changes. Build dependencies are fetched using fixed revisions and hashes.

The original `v0.1.0` tag was documentation-only and is preserved unchanged.
Use `source-v0.1.0` for code; the playable ZIP remains on the v0.1.0 Release.
Fresh builds are validated for compilation and tests; byte-identical reproduction
of the existing EXE/DLL is not claimed. The code publication does not mark the
known gameplay issues resolved.

## Current status

**v0.1.0 is the official release of this project and the recommended download.** Known issues are documented below and inside the package.

The team has published the recommended Windows x64 Vanilla release, building on v48 with a new ergonomic keyboard preset, with integrated game data, default High 3× rendering, bilinear HUD/textures, FXAA, adaptive fullscreen and progress import with backup. Playing does not require selecting an ISO, opening PCSX2 or using a browser.

The default PC keyboard layout puts driving on the arrow keys and tricks on WASD. Z/X/C handle side attacks and spin, Space jumps vertically, Left Shift or Q activates boost, E uses boost for health, and Tab changes the camera. Enter confirms in menus, Escape sends Start for pause/resume, and Backspace goes back in menus and sends the original Triangle input during a race. Configurable bindings through an optional `Keyboard.ini` and a Classic preset are available; see `KEYBOARD.md` inside the ZIP. Xbox/PlayStation USB/Bluetooth controller support is implemented. Missing/intermittent music or audio on some tracks, low pause cadence and occasional hitches are known issues. The complete track audio sweep has not been finished.

Before this keyboard update, a real keyboard drive on long Fuji in the v48 base averaged **59.93 simulated frames/s** after the first resume, including subsequent interruptions. This is evidence from one local session, not a guarantee of constant 60 fps across all tracks or PCs. Earlier external testing was positive, but it does not certify this release on every system.

**Requirements:** Windows 11 x64 (locally tested), an AVX2-capable CPU/system,
Vulkan-capable graphics drivers and the Microsoft Visual C++ v14 x64 Runtime.
The hardware GS build also enables FMA; see the [CPU compatibility audit](docs/CPU_COMPATIBILITY.md)
for the separate renderer requirement and remaining startup-check gap. Detailed
instructions and known issues are included in the download.

For community reports, include the ZIP version, Windows/CPU/GPU/RAM, track/variant, mode/Speed Class/championship stage, graphics setting and input device. For audio, distinguish music, voices, engine/effects and total silence. Please do not post personal saves or logs without reviewing them.

### Earlier performance evidence

The following v4–v6 figures are historical measurements, not benchmarks of this release or the integrated v38 package.

On an i5-12400 / RTX 3060 at 1x, three alternating v4/v5 pairs averaged **52.40→57.94 simulated FPS in Thunderhead-0**, **35.67→40.07 in Fuji-3** and **47.04→53.69 in Grand-Prix-0**. Background applications were active; Skorost's smaller improvement was inconclusive. These are short scene measurements, not a claim of stable 60 FPS across the game. The v6 VIF parser-context change adds a small, scene-dependent improvement; its [final-artifact comparisons and 36-route matrix](docs/audit/vanilla-v6.md) remain below target in several scenes. See the [audit index](docs/audit/README.md), [v5 report](docs/audit/vanilla-v5.md) and [machine-readable metrics](docs/audit/vanilla-v5-metrics.json) for protocol, build hashes, percentiles and limits.

## 🗺️ Roadmap: preservation → remaster → community

| Track | Role | Status |
| --- | --- | --- |
| 🎮 **Vanilla** | Faithful native Windows port; original graphics, UI, physics, sound and controls | 🔄 Main priority |
| ✨ **Remaster Core** | Maintainer-led UI/UX redesign, HD visuals, better shaders, materials, 3D models and curated skins | ⏳ Future |
| 📷 **Remaster Features** | Configurable cameras, Photo Mode, Replay Studio, Director Mode, Ghost Racing | 💡 Future |
| 🧩 **Community Mods** | Separately installed liveries, shader/texture mods, vehicles and optional creator tools | 🔬 Future |
| 🌐 **Multiplayer / Web** | Independent research into online racing and browser compatibility | 🔬 Research |

**Vanilla = preservation · Remaster = official curated modernization · Mods = optional community expansion.**

**[Visual roadmap →](ROADMAP.md)** · **[Remaster HUD design brief →](docs/REMASTER_UI_UX.md)** · **[Development issues →](../../issues)**

## Project priorities

1. Make architecture, provenance and contribution rules clear to reviewers.
2. Verify clean Windows builds and automate appropriate source/build checks.
3. Improve maintainability through small, behavior-preserving changes.
4. Investigate CPU compatibility and reproducible controller, audio, pause and hitch reports with before/after evidence.

Preserve the accepted rendering quality and integrated-data launch flow. Future
remaster and modding work does not take priority over Vanilla stability.

## Technical references

- [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp)
- [PCSX2](https://github.com/PCSX2/pcsx2)
- [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp) (a different console architecture; organization/UX inspiration only)

## Contributing

Read [CONTRIBUTING.md](CONTRIBUTING.md), [code quality rules](docs/CODE_QUALITY.md) and [test plan](docs/TEST_PLAN.md). Issues and reproducible observations are welcome. Keep pull requests focused on source changes and pertinent tests. Do not add ISOs, personal saves, data packs, build caches or compiled binaries. Changes to accepted generated inputs need updated manifests and validation.

## Credits and component notices

The base recompilation/runtime project is credited to Samir Nuri in the retained
[MIT notice](LICENSE). The hardware GS incorporates PCSX2/kzgs components with
their [own notices](native/gs_hw/README.md#component-notices). See the
[component credits](docs/ARCHITECTURE.md) and [source provenance](docs/SOURCE-PROVENANCE.md)
for the distinction between upstream code and the team's adaptations.
The playable package also includes `NOTICES.md` and a `licenses/` directory.
No ownership is asserted over third-party components or the original game.

## Maintainer

Project initiated by [@killeiro](https://github.com/killeiro).



