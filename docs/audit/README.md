# Vanilla engineering evidence

Documentation publication: **2026-10-20**. This directory contains original engineering reports, sanitized measurements and hashes from the maintainer's native Windows build. It contains no game-derived implementation, executable, ISO, BIOS, ELF, save state, memory card, screenshot, texture or model. Local source commit IDs identify the private working tree; they are not commits or downloadable artifacts in this documentation repository.

## Read first

- [Vanilla v23: native coverage and normalization audit](vanilla-v23.md) and [metrics](vanilla-v23-metrics.json):all2^32 values equivalent,32 tests,53,665 full native checks,three identical WAV pairs and56 controls. The candidate is not promoted. Generated coverage is restored and guarded; exact v17 remains playable. The timing comparison also contains a native-coverage confound. Host sticky flags and physical/full-game limits are explicit.
- [Vanilla v22: shared-entry VU discriminator](vanilla-v22.md) and [metrics](vanilla-v22-metrics.json):31 tests,21.08M native references,three identical WAV pairs and56 final performance windows. The candidate fails the predeclared screen, stays isolated, and exact v17 source/EXE remain current.
- [Vanilla v21: publication diagnosis](vanilla-v21.md) and [metrics](vanilla-v21-metrics.json):15 controlled diagnostic runs,all6 counter pairs equal,no ring-full waits; separates VU-limited Fuji from balanced GS/VU Skorost. No optimization/release implied by instrumentation.
- [Six-environment controller baseline](vanilla-v20.md#seis-sessões-da-equipe-no-exe-de-referência-v17):76,301 VBlanks on exact v17, all six normal exits/cards preserved, sustained Fuji dips and cadence tails retained. Separate sessions do not close full-race/30min acceptance.
- [Vanilla v20: combined VU/audio cadence](vanilla-v20.md) and [metrics](vanilla-v20-metrics.json):31 tests,21.08M native reference decisions, three unchanged generated-WAV pairs and56 controlled windows. The combined candidate fails the prior performance screen, stays isolated, and exact v17 remains current. No new v20 image/route matrix or gameplay package follows rejection.
- [Vanilla v19: Fuji, adaptive VU rejection and human victory](vanilla-v19.md) and [metrics](vanilla-v19-metrics.json): Fuji throughput gains and59.20FPS human mean; predeclared Skorost callback-tail guard fails, experiment isolated and exact v17 retained. Both human sessions and all controls preserved.
- [Vanilla v18: timing audit, human sessions and isolated experiment](vanilla-v18.md) and [metrics](vanilla-v18-metrics.json): failed audio FPS guard and exact v17 restoration; two human sessions, seven independent native checks and an automated baseline replay. Residual cadence/clock differences remain; no new playable version.
- [Vanilla v17: repeated mip snapshot unions](vanilla-v17.md) and [metrics](vanilla-v17-metrics.json): 31 tests, 696,942 new native checks, 12 unchanged image pairs, seven-scene warmed gate, 36 short routes and private package; adverse tails and full-game gates retained.
- [Vanilla v16: ordered shutdown and card persistence](vanilla-v16.md) and [metrics](vanilla-v16-metrics.json): atomic request/drain/join, checked save/retry, 31 tests, seven native scenarios, 12 unchanged image pairs, warmed controls, 36 short routes and new private package; full-game/performance/result-save gates remain open.
- [Vanilla v15: exact GS snapshot reuse](vanilla-v15.md) and [metrics](vanilla-v15-metrics.json): targeted Skorost gain, 27 tests, 697,211 native checks, 12 unchanged image pairs, 36 short routes and new private package; terminal counters/drain, pacing and full-game gates remain open.
- [Recovered media and real portable validation](restored-media-v1.md) and [metrics](restored-media-v1-metrics.json): real ISO/boot, resumed control/Q/CPU,32 scale windows, eight captures and private local package;1x remains default, broader acceptance open.
- [Portable data preparation v1](data-preparation-v1.md) and [metrics](data-preparation-v1-metrics.json): exact USA ELF validation, new-directory preparation and52 synthetic tests; no full-disc/gameplay acceptance.
- [Portable preflight v1](portable-preflight-v1.md) and [metrics](portable-preflight-v1-metrics.json): separate GUI target without development data fallbacks, nine media-absent scenarios and26 tests; no successful game boot or clean-PC acceptance claimed.
- [Release readiness, aliasing and graphics candidates](release-readiness-and-graphics.md) and [research metadata](graphics-candidates.json): conditional low-confidence planning ranges, alpha gates and native1x/2x/3x audit; no new runtime/asset integration.
- [V14 experiment not promoted](vanilla-v14.md) and [metrics](vanilla-v14-metrics.json):26 tests,225,036 Q differentials and seven-scene pairs; adverse performance retained, v13 restored, further native QA waiting for the legitimate disc input.
- [Vanilla v13: queue sharing](vanilla-v13.md) and [metrics](vanilla-v13-metrics.json): actual layout audit, unchanged wake protocol,26 tests, ten queue stress runs, five-scene comparisons,12 unchanged images and36 short routes; global acceptance open.
- [Vanilla v12: exact GS read-registration reuse](vanilla-v12.md) and [metrics](vanilla-v12-metrics.json): native work/wait diagnosis,74,531 differential draws,26 tests, five paired scenes,12 unchanged images and36 short routes; Vanilla acceptance remains open.
- [Vanilla v11: exact VU equality and live scene clock](vanilla-v11.md) and [metrics](vanilla-v11-metrics.json):2,308,915 byte-equality cases,25 tests, five paired scenes,12 unchanged images and36 short routes; optional active-scene clock trace; original cadence/performance acceptance open.
- [Vanilla v10: zero-input VIF fills](vanilla-v10.md) and [metrics](vanilla-v10-metrics.json): profile-backed specialization, 69,168 differential cases, native scene pairs and 36 short route windows; full-game acceptance remains open.
- [Vanilla v9: GS descriptor reuse](vanilla-v9.md) and [metrics](vanilla-v9-metrics.json): validated CPU preparation reduction, small scene-dependent gains,23 tests and36 short route windows; global acceptance remains open.
- [Vanilla v8: pacing investigation](vanilla-v8.md) and [metrics](vanilla-v8-metrics.json): same-binary tests, rejected prototypes, opt-in policy and preserved default; menu cadence improves, race results remain mixed.
- [Vanilla v7: VU register accesses](vanilla-v7.md) and [metrics](vanilla-v7-metrics.json): experimental local candidate with mixed performance; audited access contract, adjacent comparisons and native threaded checks.

- [Vanilla v6: VIF parser context](vanilla-v6.md) and [metrics](vanilla-v6-metrics.json): latest validated local artifact; small performance change, 21 tests, frozen-parser comparison and 36 short route samples.
- [Vanilla v5: reusable Q analysis](vanilla-v5.md) and [metrics](vanilla-v5-metrics.json): consolidated baseline, 21 tests and 36 short route samples.
- [Next ten tasks](next-10-tasks.md): current priorities and acceptance gates.
- [Project roadmap](../../ROADMAP.md): Vanilla stabilization remains the active phase.

The target is a native Windows executable. The local build runs compiled game functions and a custom PS2 hardware runtime through native Vulkan/wgpu; it does not launch PCSX2 or a browser. Some VU/IOP and HLE fallback remains. Controller integration was physically confirmed by the maintainer; subsequent optimization iterations have not recertified every USB/Bluetooth/device combination.

## Changes established locally

| Iteration | Main work | Evidence |
| --- | --- | --- |
| v2 | Simulation/presentation instrumentation, DATE/CT24 and delayed VU MSKPATH3 fixes | Historical reports below; 12 tests at that date |
| [v3](vanilla-v3.md) | Mipmapping/LOD/filtering, VIF zero NOP batching and GS regression coverage | [Metrics](vanilla-v3-metrics.json) |
| [v4](vanilla-v4.md) | 37 selective native VU continuations with shared pipeline, GS page ranges, empty coverage rejection, zero-mask UNPACK, reliable scripted input | [Metrics](vanilla-v4-metrics.json); 20 tests; 36 route checkpoints |
| [v5](vanilla-v5.md) | Reuse Q-analysis predecessor graph per microcode generation and avoid calls without pending Q | [Metrics](vanilla-v5-metrics.json); 21 tests; 30,772 synthetic Q comparisons |
| [v6](vanilla-v6.md) | Capture VIF thread/unit context once per parse; retain mutable command state | [Metrics](vanilla-v6-metrics.json); 21 tests; 29,968 frozen-v5 parser comparisons |
| [v7](vanilla-v7.md) | Reduce repeated VU register accesses after auditing helpers; preserve instruction bodies and pipeline behavior | [Metrics](vanilla-v7-metrics.json); 21 tests; six-environment regression and two native threaded diagnostic scenes |

In v5, six environment checks compared 1,264,870 real VU invocations (registers, memory, GIF packets) and 416,563 Q analyses; 12 images matched v4 byte for byte. Agreement with the earlier native build detects regressions and **does not establish PS2 accuracy**.

## Measurement protocol and limits

The detailed reports identify executable SHA-256, scene/state hash, CPU/GPU, compiler, backend, resolution and inputs. The maintainer machine was an i5-12400 / RTX 3060, Windows, native threaded GUI, Vulkan/Mailbox, 1x (640×479 source), WASAPI audio. Other applications remained active and the power plan was Balanced. Three alternating pairs were used for reported controlled comparisons; small changes remain subject to noise.

The 36 routes cover six environments, three lengths and two directions in **Class 1**, at 600 VBlanks per run, discarding 60 warm-up frames. Acceleration and scripted boost/steering/Car-Fu commands are included. Screenshots and perturbative profiling are collected separately from performance runs. These are approximately ten simulated seconds per route, **not full laps/races, all track sections, classes 2–4, Mirror, all effects or 30-minute stability tests**. Scripted inputs do not imply fully deterministic threaded execution.

Simulated FPS and EE cycles/wall-time are measured separately from pre-present callbacks. The runtime's nominal rate is 60 Hz; v11 separately validates a live active-scene clock through writer tracing and pause/resume; original PS2 cadence and per-player lap/result timing remain unconfirmed. Pre-present callbacks do not measure scanout or input-to-photon. An empty audio-queue sample is not a hardware underrun counter. Near-60 mean FPS alone does not certify frame pacing.

Fuji, Grand Prix and some Skorost/Thunderhead samples still fall below target. Original/native synchronized visual pairs, remaining dithering/CRTC/fog behavior, actual audio underruns, physical input latency, shutdown and clean-machine deployment remain open. Development-path fallbacks still exist. A public playable release is not available.

## Historical v2 snapshot

The following files describe the code and test coverage on **2026-10-16**. In particular, their statements that mipmapping was missing and only 12 tests existed are historical, superseded by v3–v7:

- [Architecture and provenance](architecture.md)
- [Initial graphics gaps](graphics-parity.md)
- [Initial executive report](iteration-report.md)
- [Initial performance protocol](performance-baseline.md) and [measurements](metrics.json)
- [Initial profile](profiling-results.md)
- [Initial stability matrix](stability-matrix.md) and [image hashes](image-check.json)

References such as PCSX2, paraLLEl-GS, ps2-web-recomp and PS2Recomp informed code analysis; no PCSX2 GPL implementation was copied into the local MIT runtime. A visual comparison using PCSX2 is a reference test, not a change in the native Windows product target. Full dependency/provenance review and redistribution clearance remain pending.
