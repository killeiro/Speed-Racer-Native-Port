# Speed Racer — Native Port 🏁

**Experimental community-driven effort to run Speed Racer (PlayStation 2) natively on Windows.**

![Status](https://img.shields.io/badge/status-experimental_alpha-orange) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-not_available-lightgrey)

> **Important:** This repository currently contains project documentation and development tracking, **not a downloadable port or a complete game**. This is an independent, unofficial project, not affiliated with the game's rights holders.

## Current status

| Feature | Status | Evidence |
| --- | --- | --- |
| Windows GUI executable | 🟢 Local build verified | GUI subsystem; bundled DLL smoke test; no console window |
| Gamepad input | 🟢 Local testing | SDL Xbox/PlayStation support; physical controller confirmed by maintainer |
| Gameplay speed | 🔄 Improved; unresolved | V13 queue-sharing measurements follow the mixed v12 results; all adverse data retained; full-game speed/pacing remain unresolved |
| Graphics | 🔄 Implementation advanced; parity pending | Mipmapping/LOD/filtering and GS hazards implemented; synchronized PS2/PCSX2 comparison still open |
| Regression tests | 🟢 Local suite | 26/26 local CTest in v13; differential VU/VIF/Q checks and 12 unchanged images |
| Track coverage | 🟡 Short samples only | 36 Class 1 route checkpoints, 600 VBlanks per run; not full races |
| Clean PC installation | ⚪ Untested | Development-path fallback still present |
| Redistributable release | 🔒 Pending review | No public game-derived source, executable or assets |

**Last consolidated baseline: local Vanilla v6, 2026-10-19.** These are maintainer-machine results, not independently reproduced. The native Windows runtime recompiles game execution and models PS2 hardware; it does not launch PCSX2 or require a browser. Interpreter/HLE fallback paths remain.

On an i5-12400 / RTX 3060 at 1x, three alternating v4/v5 pairs averaged **52.40→57.94 simulated FPS in Thunderhead-0**, **35.67→40.07 in Fuji-3** and **47.04→53.69 in Grand-Prix-0**. Background applications were active; Skorost's smaller improvement was inconclusive. These are short scene measurements, not a claim of stable 60 FPS across the game. The v6 VIF parser-context change adds a small, scene-dependent improvement; its [final-artifact comparisons and 36-route matrix](docs/audit/vanilla-v6.md) remain below target in several scenes. See the [audit index](docs/audit/README.md), [v5 report](docs/audit/vanilla-v5.md) and [machine-readable metrics](docs/audit/vanilla-v5-metrics.json) for protocol, build hashes, percentiles and limits.

The latest experimental [v7 report](docs/audit/vanilla-v7.md) documents VU register-access optimization with audited helper contracts and unchanged generated instruction bodies. Three alternating adjacent v6/v7 pairs measured Fuji-3 at **40.13→42.23 simulated FPS (+5.22%)**. Substantial concurrent host load was observed; the earlier grouped measurements, including negative results, are retained separately. Grand Prix had a lower mean and higher p95 in the final set; Skorost was essentially unchanged, and Thunderhead p95 increased. This is a mixed-performance candidate, not a confirmed general upgrade. The v6 baseline remains available and full-game acceptance is open. Additional native threaded VU/Q checks passed in Fuji and Grand Prix; they are diagnostic runs, not FPS benchmarks.

The [v8 pacing investigation](docs/audit/vanilla-v8.md) isolates audio-queue-driven frame irregularity. A deadline improves menu cadence, but race measurements remain mixed, so it stays opt-in and the default pacing is preserved. It adds a reproducible same-binary comparison helper, 22 passing tests and 12 unchanged images. This is not a general speed upgrade or a new recommended release.

The [v9 GS preparation report](docs/audit/vanilla-v9.md) validates reuse of unchanged descriptors, with identical GPU payloads in the differential fixture,23 passing tests,12 unchanged images and36 short route windows. Controlled same-path pairs show small gains in Grand Prix/Skorost and essentially unchanged Fuji/Thunderhead; full-game performance remains unresolved. Default pacing is preserved and prior baselines remain available.

The [v10 VIF fill report](docs/audit/vanilla-v10.md) identifies a dominant zero-input fill workload and specializes it while preserving masks, ROW/COL and wrap. The actual-parser differential passed 69,168 cases; 23 tests, 12 unchanged images and 36 short route windows passed. Warmed alternating v9/v10 measurements are recorded per scene, with all regressions and variability retained. Default pacing stays legacy; global performance acceptance and original/native visual parity remain open.

The [v11 VU validation and scene-clock report](docs/audit/vanilla-v11.md) records an exact byte-equality optimization, 2,308,915 comparison cases, real-cache mutation tests,25 passing tests,12 unchanged images and36 short route windows. Five scenes received warmed same-path alternating pairs; adverse FPS/p95/stutter results are retained. An opt-in EE-thread trace follows a statically audited live scene clock, verified during active play, pause and resume in the final native executable. Original PS2 cadence, full-game performance and visual parity remain open.

The [v12 GS read-registration report](docs/audit/vanilla-v12.md) distinguishes VU-heavy Fuji from renderer-heavy Skorost using native thread CPU samples and a temporary stage probe. Exact descriptor reuse now skips repeated base/mip read-set searches within a batch, preserving all hazards, commands and GPU payloads. Validation includes 74,531 differential draws,26 tests,12 unchanged images and36 short route windows. Five-scene warmed pairs and adverse results remain visible; original cadence and full-game acceptance stay open.

The [v13 queue-sharing report](docs/audit/vanilla-v13.md) separates waiter flags from a per-packet counter and avoids reading that counter on non-full posts, preserving the wake protocol and every atomic order. It records 26 passing tests, ten expanded queue stress runs,12 unchanged images,36 short routes and warmed five-scene comparisons, including rotating v11/v12/v13 triplets in Fuji/Skorost. All adverse results remain available; stable60FPS and full-game acceptance are open.

The [v14 experimental audit](docs/audit/vanilla-v14.md) records incremental Q predecessor updates,26 passing tests,225,036 Q differentials and seven-scene warmed pairs. The candidate is **not promoted**: Fuji improves modestly, but Skorost-1 and other scenes regress. V13 source/executable were restored, and the experiment is isolated locally. Additional native diagnosis is waiting for the legitimate disc image removed or moved during local Downloads cleanup; no new gameplay package or completed visual/36-route QA is claimed.

[Release readiness and graphics research](docs/audit/release-readiness-and-graphics.md) separates the existing native prototype from a friend-test alpha. Low-confidence planning ranges are2–4 active working weeks for a limited alpha and6–12+ for broader Vanilla acceptance after legitimate data is restored; these are not release commitments. The audit explains1x aliasing, existing2x/3x scaling and why the identified PCSX2 texture pack requires a native loader. No renderer change, pack integration or new gameplay validation is claimed.

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

1. Keep Fuji throughput P0: profile VU kernels and notification/idle transitions with CPU counters; fixed64-spin screening remains rejected, and the prior v12 regression is not closed.
2. Use the verified live scene clock to confirm original cadence and extend short replays to full laps/races, classes and long sessions.
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
