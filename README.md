# Speed Racer — Native Port 🏁

**Experimental community-driven effort to run Speed Racer (PlayStation 2) natively on Windows.**

![Status](https://img.shields.io/badge/status-playable_release-green) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-v0.1.0-green)

> **Official project release v0.1.0:** download `SpeedRacer-Vanilla-v0.1.0-Windows-x64.zip` from [the recommended Release](https://github.com/killeiro/Speed-Racer-Native-Port/releases/tag/v0.1.0). Extract the complete folder and open `SpeedRacer.exe`.

## Current status

**v0.1.0 is the official release of this project and the recommended download.** Known issues are documented below and inside the package.

The team has published the recommended Windows x64 Vanilla release, building on v48 with a new ergonomic keyboard preset, with integrated game data, default High 3× rendering, bilinear HUD/textures, FXAA, adaptive fullscreen and progress import with backup. Playing does not require selecting an ISO, opening PCSX2 or using a browser.

The default PC keyboard layout puts driving on the arrow keys and tricks on WASD. Z/X/C handle side attacks and spin, Space jumps vertically, Left Shift or Q activates boost, E uses boost for health, and Tab changes the camera. Enter confirms in menus, Escape sends Start for pause/resume, and Backspace goes back in menus and sends the original Triangle input during a race. Configurable bindings through an optional `Keyboard.ini` and a Classic preset are available; see `KEYBOARD.md` inside the ZIP. Xbox/PlayStation USB/Bluetooth controller support is implemented. Missing/intermittent music or audio on some tracks, low pause cadence and occasional hitches are known issues. The complete track audio sweep has not been finished.

Before this keyboard update, a real keyboard drive on long Fuji in the v48 base averaged **59.93 simulated frames/s** after the first resume, including subsequent interruptions. This is evidence from one local session, not a guarantee of constant 60 fps across all tracks or PCs. Earlier external testing was positive, but it does not certify this release on every system.

**Requirements:** Windows 11 x64 (locally tested), an AVX2-capable CPU/system, Vulkan-capable graphics drivers and the Microsoft Visual C++ v14 x64 Runtime. Detailed instructions and known issues are included in the download.

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

1. Improve plug-and-play controller compatibility.
2. Investigate reproducible audio-category and track-transition reports.
3. Preserve the accepted rendering quality and near-60 racing behavior while treating pause cadence and isolated hitches separately.
4. Collect community feedback with a fixed, verifiable package identity.

## Technical references

- [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp)
- [PCSX2](https://github.com/PCSX2/pcsx2)
- [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp) (a different console architecture; organization/UX inspiration only)

## Contributing

Read [CONTRIBUTING.md](CONTRIBUTING.md) and [test plan](docs/TEST_PLAN.md). Issues and reproducible observations are welcome. Please **do not upload PS2 ISOs, game executables, copyrighted assets or copyrighted source code**.

## Credits and component notices

Component notices and provenance information are included in the package. See `NOTICES.md` and the bundled `licenses/` directory. No ownership or license is asserted over third-party components.

## Maintainer

Project initiated by [@killeiro](https://github.com/killeiro).



