# Speed Racer — Native Port 🏁

**Experimental community-driven effort to run Speed Racer (PlayStation 2) natively on Windows.**

![Status](https://img.shields.io/badge/status-experimental_alpha-orange) ![Platform](https://img.shields.io/badge/platform-Windows-blue) ![Release](https://img.shields.io/badge/public_release-not_available-lightgrey)

> **Important:** This repository currently contains project documentation and development tracking, **not a downloadable port or a complete game**. This is an independent, unofficial project, not affiliated with the game's rights holders.

## Current status

**The team accepts [v36](docs/audit/vanilla-v36.md) in local play**, preserving v30 High 3×/HUD/audio. **Latest private kit: [v37](docs/audit/vanilla-v37.md)** adds native own-ISO setup without Python, dependency diagnostics and a verified media-free ZIP for a second-PC test. 49 runtime tests, 239 native-import checks, real-ISO GUI import and extracted-ZIP preflight/import/boot pass. The Visual C++ v14 x64 prerequisite is explicit. **Next: one acceptance session on the other PC.** Physical second-PC results, natural race-result/save/reopen, remaining coverage, residual stalls and public redistribution review remain open. No new FPS benchmark.

**Native Windows GUI:** direct Win32/Vulkan, adaptive fullscreen, controller support and saved 1×–4× internal-resolution selection. The current private v37 build starts at High 3× with bilinear HUD/textures and FXAA, preserving accepted v30 audio/visual settings. No PCSX2 executable or browser is launched. This repository contains documentation; a public playable download is not available.

| Area | Status |
|---|---|
| Display and resolution | Implemented locally; saved native selector, DPI/resize handling and 39 passing tests; physical dialog/fullscreen-shortcut acceptance pending |
| Image quality | The team accepts V30 HUD/High quality: 3×, bilinear HUD/textures and FXAA; original texture detail, bloom alignment and reference parity remain open |
| Hardware GS integration (v27) | Real game GIF/register/FIFO lifecycle connected; 44 runtime tests, fresh library build and Fuji/Thunderhead 3x scene smoke checks pass; normal threaded performance remains open |
| Fuji performance | V35 scoped VU AVX2 passes the original bounded criteria: +8.011% mean across three pairs, with all 18 control runs completed. The human Fuji short/forward average remains 58.93 and rare stalls remain open |
| Build integrity | Clean v24 build, 332 unchanged generated inputs and 310 extra VU programs; always-run manifest guard preserved |
| Runtime correctness | EE 128-bit VU-code writes now invalidate the real dispatch cache; regression reproduced before fixing |
| Full-game/release acceptance | Full races/result saves/reopen, classes/Mirror/long sessions, physical latency, second PC/GPU and redistribution remain open |

[V25 resolution results](docs/audit/vanilla-v25.md) · [V24 PCSX2/native-port architecture and file audit](docs/audit/vanilla-v24.md) · [Evidence index](docs/audit/README.md).

## Earlier engineering evidence

The entries below describe evidence at each historical iteration. Current acceptance and remaining work are summarized above; older next steps do not reopen tasks completed later.

The v24 diagnostic session used syscall tracing and generated 184 MB of log; there was also a brief overlap of test processes. It cannot measure normal gameplay fluency or isolate controller/automation cost. V25 resolution measurements use one process, no syscall trace and separate capture runs.

[V27](docs/audit/vanilla-v27.md) connects the [v26](docs/audit/vanilla-v26.md) library to the native game. It fixes missing dynamic shader compilation and active-display cropping, passes 44 runtime tests and verifies two fresh-boot 3x scenes at 1920×1437. A separate local experimental package exists; no stable60, full-race or general FPS improvement is claimed. Next is a normal threaded CPU/GPU attribution run in Fuji and one control scene. V17 remains the preserved 1x throughput reference; earlier rejected experiments and all adverse evidence remain recorded.

[V28 audio/presentation audit](docs/audit/vanilla-v28.md): fix the SDL Win32 handle contract that forced GPU readback, plus SPU2 endpoint/stream/clip defects. 45 tests pass and the native 3x window opens WASAPI successfully. At this iteration, Championship 2 audio was still a P0 issue. Later [v29 audio fixes](docs/audit/vanilla-v29.md) and [v30 sound/HUD acceptance](docs/audit/vanilla-v30.md) supersede that status.

On an i5-12400 / RTX 3060 at 1x, three alternating v4/v5 pairs averaged **52.40→57.94 simulated FPS in Thunderhead-0**, **35.67→40.07 in Fuji-3** and **47.04→53.69 in Grand-Prix-0**. Background applications were active; Skorost's smaller improvement was inconclusive. These are short scene measurements, not a claim of stable 60 FPS across the game. The v6 VIF parser-context change adds a small, scene-dependent improvement; its [final-artifact comparisons and 36-route matrix](docs/audit/vanilla-v6.md) remain below target in several scenes. See the [audit index](docs/audit/README.md), [v5 report](docs/audit/vanilla-v5.md) and [machine-readable metrics](docs/audit/vanilla-v5-metrics.json) for protocol, build hashes, percentiles and limits.

The historical experimental [v7 report](docs/audit/vanilla-v7.md) documents VU register-access optimization with audited helper contracts and unchanged generated instruction bodies. Three alternating adjacent v6/v7 pairs measured Fuji-3 at **40.13→42.23 simulated FPS (+5.22%)**. Substantial concurrent host load was observed; the earlier grouped measurements, including negative results, are retained separately. Grand Prix had a lower mean and higher p95 in the final set; Skorost was essentially unchanged, and Thunderhead p95 increased. This is a mixed-performance candidate, not a confirmed general upgrade. The v6 baseline remains available and full-game acceptance is open. Additional native threaded VU/Q checks passed in Fuji and Grand Prix; they are diagnostic runs, not FPS benchmarks.

The [v8 pacing investigation](docs/audit/vanilla-v8.md) isolates audio-queue-driven frame irregularity. A deadline improves menu cadence, but race measurements remain mixed, so it stays opt-in and the default pacing is preserved. It adds a reproducible same-binary comparison helper, 22 passing tests and 12 unchanged images. This is not a general speed upgrade or a new recommended release.

The [v9 GS preparation report](docs/audit/vanilla-v9.md) validates reuse of unchanged descriptors, with identical GPU payloads in the differential fixture,23 passing tests,12 unchanged images and36 short route windows. Controlled same-path pairs show small gains in Grand Prix/Skorost and essentially unchanged Fuji/Thunderhead; full-game performance remains unresolved. Default pacing is preserved and prior baselines remain available.

The [v10 VIF fill report](docs/audit/vanilla-v10.md) identifies a dominant zero-input fill workload and specializes it while preserving masks, ROW/COL and wrap. The actual-parser differential passed 69,168 cases; 23 tests, 12 unchanged images and 36 short route windows passed. Warmed alternating v9/v10 measurements are recorded per scene, with all regressions and variability retained. Default pacing stays legacy; global performance acceptance and original/native visual parity remain open.

The [v11 VU validation and scene-clock report](docs/audit/vanilla-v11.md) records an exact byte-equality optimization, 2,308,915 comparison cases, real-cache mutation tests,25 passing tests,12 unchanged images and36 short route windows. Five scenes received warmed same-path alternating pairs; adverse FPS/p95/stutter results are retained. An opt-in EE-thread trace follows a statically audited live scene clock, verified during active play, pause and resume in the final native executable. Original PS2 cadence, full-game performance and visual parity remain open.

The [v12 GS read-registration report](docs/audit/vanilla-v12.md) distinguishes VU-heavy Fuji from renderer-heavy Skorost using native thread CPU samples and a temporary stage probe. Exact descriptor reuse now skips repeated base/mip read-set searches within a batch, preserving all hazards, commands and GPU payloads. Validation includes 74,531 differential draws,26 tests,12 unchanged images and36 short route windows. Five-scene warmed pairs and adverse results remain visible; original cadence and full-game acceptance stay open.

The [v13 queue-sharing report](docs/audit/vanilla-v13.md) separates waiter flags from a per-packet counter and avoids reading that counter on non-full posts, preserving the wake protocol and every atomic order. It records 26 passing tests, ten expanded queue stress runs,12 unchanged images,36 short routes and warmed five-scene comparisons, including rotating v11/v12/v13 triplets in Fuji/Skorost. All adverse results remain available; stable60FPS and full-game acceptance are open.

The [v14 experimental audit](docs/audit/vanilla-v14.md) records incremental Q predecessor updates,26 passing tests,225,036 Q differentials and seven-scene warmed pairs. The candidate is **not promoted**: Fuji improves modestly, but Skorost-1 and other scenes regress. V13 source/executable were restored, and the experiment is isolated locally. That iteration stopped when the local disc disappeared; the recovered-media report above supplies the resumed control/diagnostics. Its earlier adverse series remains intact, and no v14 gameplay release or new36-route acceptance is claimed.

[Release readiness and graphics research](docs/audit/release-readiness-and-graphics.md) separates the existing native prototype from a friend-test alpha. Low-confidence planning ranges are2–4 active working weeks for a limited alpha and6–12+ for broader Vanilla acceptance after legitimate data is restored; these are not release commitments. The audit explains1x aliasing, existing2x/3x scaling and why the identified PCSX2 texture pack requires a native loader. No renderer change, pack integration or new gameplay validation is claimed.

The [portable preflight report](docs/audit/portable-preflight-v1.md) records an opt-in separate native GUI target with development game-data fallbacks disabled, plus a reusable private checker. The build passes nine media-absent scenarios with bundled DLLs/minimal PATH and26 tests; the original v13 executable is preserved. At that preflight stage, the legitimate ISO was unavailable. Real local boot is now covered above; second-PC and full-game acceptance remain open. No gameplay release is claimed.

The [portable data preparer](docs/audit/data-preparation-v1.md) now validates the audited USA boot/ELF and stages a new private data directory without overwriting originals.52 synthetic tests pass; a private artificial fixture also exercises the fixed production ELF reference. Its initial validation was synthetic; the recovered-media report now adds the real ISO preparation and boot. The tool itself is not an FPS improvement or a public release.

## 🗺️ Roadmap: preservation → remaster → community

| Track | Role | Status |
| --- | --- | --- |
| 🎮 **Vanilla** | Faithful native Windows port; original graphics, UI, physics, sound and controls | 🔄 Main priority |
| ✨ **Remaster Core** | Team-led UI/UX redesign, HD visuals, better shaders, materials, 3D models and curated skins | ⏳ Future |
| 📷 **Remaster Features** | Configurable cameras, Photo Mode, Replay Studio, Director Mode, Ghost Racing | 💡 Future |
| 🧩 **Community Mods** | Separately installed liveries, shader/texture mods, vehicles and optional creator tools | 🔬 Future |
| 🌐 **Multiplayer / Web** | Independent research into online racing and browser compatibility | 🔬 Research |

**Vanilla = preservation · Remaster = official curated modernization · Mods = optional community expansion.**

**[Visual roadmap →](ROADMAP.md)** · **[Remaster HUD design brief →](docs/REMASTER_UI_UX.md)** · **[Development issues →](../../issues)**

## Project priorities

1. Isolate audio-driven cadence and cold pipeline creation using the captured session/warmed cache; preserve rejected VU evidence and complete acceptance gates.
2. Require full native equivalence and Fuji/Skorost/Thunderhead cadence controls for an isolated change; do not repeat rejected cache filters as new work.
3. Confirm original timing/graphics, full races/results/save/reopen, classes/Mirror and long sessions.
4. Finish physical audio/input, second-PC, provenance and distribution checks before a public alpha.

## Technical references

- [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp)
- [PCSX2](https://github.com/PCSX2/pcsx2)
- [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp) (a different console architecture; organization/UX inspiration only)

## Contributing

Read [CONTRIBUTING.md](CONTRIBUTING.md) and [test plan](docs/TEST_PLAN.md). Issues and reproducible observations are welcome. Please **do not upload PS2 ISOs, game executables, copyrighted assets or copyrighted source code**.

## Rights and attribution

Speed Racer and associated game assets belong to their respective rights holders. **Ownership of an original disc does not automatically authorize redistribution of a compiled derivative.** Distribution of binaries, extracted assets, or recompiled game code is on hold pending review. No license is asserted over third-party components.

## Project team

Development and testing are attributed to the project team.
