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

## 🗺️ Project roadmap: Vanilla first

**One game, four development tracks.** Complete the faithful Windows port first; expand only when the baseline is stable.

| Track | Direction | State |
| --- | --- | --- |
| 🎮 **Vanilla** | Native Windows PS2-accurate port, performance, rendering, saves and QA | 🔄 Main priority |
| 🎨 **Remastered** | Optional HD graphics and interface enhancements | 💡 Future |
| 👥 **Multiplayer** | Online races; requires significant networking research | 🔬 Future research |
| 🌐 **Browser** | WebAssembly/WebGPU feasibility based on upstream web recompilation | 🔬 Optional parallel research |

**Likely sequencing:** Vanilla → Remastered (usually easier incremental work) → Multiplayer; browser feasibility can be tested independently after the core stabilizes.

**[Full illustrated roadmap →](ROADMAP.md)** · **[Development issues →](../../issues)** · **[Known issues →](docs/KNOWN_ISSUES.md)**

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
