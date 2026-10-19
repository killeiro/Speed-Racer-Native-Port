# Speed Racer — Native Port 🏁

**Experimental community-driven effort to run Speed Racer (PlayStation 2) natively on Windows.**

![Status](https://img.shields.io/badge/status-experimental_alpha-orange) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-not_available-lightgrey)

> **Important:** This repository currently contains project documentation and development tracking, **not a downloadable port or a complete game**. This is an independent, unofficial project, not affiliated with the game's rights holders.

## Current status

| Feature | Status | Evidence |
| --- | --- | --- |
| Windows GUI executable | 🟢 Local build verified | GUI subsystem; bundled DLL smoke test; no console window |
| Gamepad input | 🟢 Local testing | SDL Xbox/PlayStation support; physical controller confirmed by maintainer |
| Gameplay speed | 🔄 Improved; unresolved | VU continuations and VIF/Q optimizations measured; Fuji and other scenes remain below target |
| Graphics | 🔄 Implementation advanced; parity pending | Mipmapping/LOD/filtering and GS hazards implemented; synchronized PS2/PCSX2 comparison still open |
| Regression tests | 🟢 Local suite | 23/23 local CTest in v9; differential VU/VIF/Q checks and 12 unchanged images |
| Track coverage | 🟡 Short samples only | 36 Class 1 route checkpoints, 600 VBlanks per run; not full races |
| Clean PC installation | ⚪ Untested | Development-path fallback still present |
| Redistributable release | 🔒 Pending review | No public game-derived source, executable or assets |

**Last consolidated baseline: local Vanilla v6, 2026-10-19.** These are maintainer-machine results, not independently reproduced. The native Windows runtime recompiles game execution and models PS2 hardware; it does not launch PCSX2 or require a browser. Interpreter/HLE fallback paths remain.

On an i5-12400 / RTX 3060 at 1x, three alternating v4/v5 pairs averaged **52.40→57.94 simulated FPS in Thunderhead-0**, **35.67→40.07 in Fuji-3** and **47.04→53.69 in Grand-Prix-0**. Background applications were active; Skorost's smaller improvement was inconclusive. These are short scene measurements, not a claim of stable 60 FPS across the game. The v6 VIF parser-context change adds a small, scene-dependent improvement; its [final-artifact comparisons and 36-route matrix](docs/audit/vanilla-v6.md) remain below target in several scenes. See the [audit index](docs/audit/README.md), [v5 report](docs/audit/vanilla-v5.md) and [machine-readable metrics](docs/audit/vanilla-v5-metrics.json) for protocol, build hashes, percentiles and limits.

The latest experimental [v7 report](docs/audit/vanilla-v7.md) documents VU register-access optimization with audited helper contracts and unchanged generated instruction bodies. Three alternating adjacent v6/v7 pairs measured Fuji-3 at **40.13→42.23 simulated FPS (+5.22%)**. Substantial concurrent host load was observed; the earlier grouped measurements, including negative results, are retained separately. Grand Prix had a lower mean and higher p95 in the final set; Skorost was essentially unchanged, and Thunderhead p95 increased. This is a mixed-performance candidate, not a confirmed general upgrade. The v6 baseline remains available and full-game acceptance is open. Additional native threaded VU/Q checks passed in Fuji and Grand Prix; they are diagnostic runs, not FPS benchmarks.

The [v8 pacing investigation](docs/audit/vanilla-v8.md) isolates audio-queue-driven frame irregularity. A deadline improves menu cadence, but race measurements remain mixed, so it stays opt-in and the default pacing is preserved. It adds a reproducible same-binary comparison helper, 22 passing tests and 12 unchanged images. This is not a general speed upgrade or a new recommended release.

The [v9 GS preparation report](docs/audit/vanilla-v9.md) validates reuse of unchanged descriptors, with identical GPU payloads in the differential fixture,23 passing tests,12 unchanged images and36 short route windows. Controlled same-path pairs show small gains in Grand Prix/Skorost and essentially unchanged Fuji/Thunderhead; full-game performance remains unresolved. Default pacing is preserved and prior baselines remain available.

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

1. Reduce remaining VIF/VU and GS preparation costs in Fuji, Grand Prix and Skorost, retaining changes only after controlled comparison.
2. Confirm race-timer cadence independently and extend short replays to full laps/races, classes and long sessions.
3. Compare matched original/native scenes at 1x, then address remaining dithering/CRTC/fog behavior using evidence.
4. Measure frame pacing, physical input latency and actual audio underruns; finish shutdown and clean-machine validation.
5. Publish verified documentation now; review source provenance and distribution permissions before publishing a playable build.

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


