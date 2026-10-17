# Speed Racer — Native Port 🏁

**Experimental community-driven effort to run Speed Racer (PlayStation 2) natively on Windows.**

![Status](https://img.shields.io/badge/status-experimental_alpha-orange) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-not_available-lightgrey)

> **Important:** This repository currently contains project documentation and development tracking, **not a downloadable port or a complete game**. This is an independent, unofficial project, not affiliated with the game's rights holders.

## Current status

| Feature | Status | Evidence |
| --- | --- | --- |
| Windows executable launches | 🟢 Locally reported | Developer test |
| Gamepad input | 🟢 Locally reported | Developer test |
| Stable gameplay speed | 🔴 Needs work | Slow-motion / stutter reports |
| Accurate graphics | 🔴 Needs work | Visual differences reported |
| Clean PC installation | ⚪ Untested | Validation pending |
| Redistributable release | 🔒 Blocked | Rights and code review required |

**These results are preliminary, not independently reproduced.** No performance figures should be presented as benchmarks until captured on a defined build and test machine.

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

1. Find whether observed slowdown is simulation timing, rendering bottlenecks, or both.
2. Profile the Emotion Engine / VU1 / GS runtime paths without guessing.
3. Compare unmodified game footage under PCSX2 and the native build at matched scenes and settings.
4. Restore original visual behavior before attempting upscaling or enhancements.
5. Publish only material that we are authorized to distribute.

## Technical references

- [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp)
- [PCSX2](https://github.com/PCSX2/pcsx2)
- [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp) (a different console architecture; organization/UX inspiration only)

## Contributing

Read [CONTRIBUTING.md](CONTRIBUTING.md) and [test plan](docs/TEST_PLAN.md). Issues and reproducible observations are welcome. Please **do not upload PS2 ISOs, game executables, copyrighted assets or copyrighted source code**.

## Rights and attribution

Speed Racer and associated game assets belong to their respective rights holders. **Ownership of an original disc does not automatically authorize redistribution of a compiled derivative.** Distribution of binaries, extracted assets, or recompiled game code is on hold pending review. No license is asserted over third-party components.

## Maintainer

Project initiated by [@killeiro](https://github.com/killeiro).
