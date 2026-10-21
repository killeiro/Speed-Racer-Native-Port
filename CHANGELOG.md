# Changelog

All notable project updates will be recorded here. Dates refer to documentation and releases, not claims of shipping a playable public build.

## 2026-10-21 — V28 SPU2 and direct Win32 presentation

- Correct the SDL HWND contract: the game now presents directly through Vulkan instead of silently reading back every image into SDL. The actual host-contract regression fails before the fix and passes after.
- Defer SPU2 endpoint/loop effects to consumption, read updated stream buffers, saturate the mix before master volume and define negative envelope arithmetic.
- Pass 45 CTests and 11 mixer checks under UBSan trap; retain 30 identical scene images, private generated-WAV evidence and native WASAPI/3x window observations.
- Preserve the v27 renderer/DLL, package and current save. Supply a separate private v28 GUI package. Championship 2 stages 2/3, physical audio underruns and full-race acceptance remain open; no public release or general FPS gain claimed.

## 2026-10-21 — V27 native Vulkan GS runtime integration

- Connect ordered game GIF, privileged-register snapshots, synchronous guest FIFO, resets and shutdown to the native hardware GS.
- Fix missing dynamically loaded shader compiler; cover PACKED and CT24-to-CT16 render-target sampling with cold-cache tests. Supply NTSC/PAL CRT identity and retain the complete 479-line game HUD.
- Pass 44 runtime tests, three fresh-library tests and real Fuji/Thunderhead 3x scene checks; verify a separate private Windows GUI package with minimal PATH. V25 remains preserved.
- Retain adverse results and headless diagnostic limits. No stable60, general speed gain, full-race acceptance or public release claimed; next is normal threaded stage attribution.
- Publish documentation only; no implementation, binaries, shader resources or game data.

## 2026-10-21 — V26 isolated native hardware GS bridge

- Compile a pinned Vulkan GS library with Clang/MinGW and a versioned C ABI; retain GPL notices and a hash-checked fresh-build recipe.
- Pass three synthetic CTests: native hidden window, surfaceless, and GIF packet boundaries. Validate 1x–4x, guest FIFO buffers, reset, native VRAM restore and a full next-frame redraw.
- Reject incomplete PATH1 before forwarding; retain fragmented PATH2/3. D3D11 transition failed in the upstream probe and is not accepted by this ABI.
- Keep v25 playable/default2x intact. Game queue/register/interrupt/readback/checkpoint integration and Fuji/control scene acceptance remain next; no new game FPS or release claim.
- Update GitHub documentation only, with anonymous team attribution and no implementation or game data.

## 2026-10-21 — V24 architecture/display and V25 internal resolution

- Complete a clean build with the recovered 310-program VU coverage; reproduce and fix stale VU dispatch after 128-bit EE stores.
- Add fullscreen fill, explicit aspect options, monitor/DPI resize handling and fresh-boot PS2 screen selection. Shortcut interaction remains unaccepted after interrupted UI verification.
- Add a saved native resolution selector and validated 1x/2x/3x/4x rasterization, with 2x GUI default, adapter-size checks and 39 passing tests.
- Retain four native captures and short fullscreen Fuji samples: 59.28/49.37/28.76/19.29 simulated FPS. Higher quality has material cost; no stable60 or renderer parity claim.
- Prioritize a bounded hardware GS adapter prototype based on primary PCSX2/native-port research. Public changes remain documentation only; earlier packages/cards/evidence stay intact.

## 2026-10-20 — V23 native coverage recovery and normalization audit

- Recover310 extra VU programs from preserved capture generation; a partial3-program source was masked by a stale object. Restored VU rebuild/relink reproduces the frozen reference except timestamp/checksum.
- Add an always-run manifest hash/count guard;32 tests and actual stale-mtime/partial-source rejection pass, preserving the EXE.
- Isolate the integer-normalization experiment: value equivalence holds, but its artifact also lost native coverage; no single-change FPS attribution.
- Exhaust all2^32 encodings,16 masked FP configurations,32 CTests,53,665 complete native register/memory/GIF checks and three identical generated-WAV pairs. Host sticky flags differ; guest flags remain separately validated.
- Retain all56 warmed performance windows and prior gates. The candidate is not promoted. Generated coverage is restored and guarded; exact v17 remains playable. The timing comparison also contains a native-coverage confound.
- Keep earlier rejected experiments and six reference controller sessions intact; anonymous documentation only, main unchanged and full-game/distribution gates open.

## 2026-10-20 — V21 attribution / V22 shared-entry VU filter

- Separate EE ring insertion, outstanding-frame guard, VU forwarding and renderer boundaries in three controlled diagnostic scenes;31 tests and all6 terminal pairs pass, sources/probes restored.
- Implement one shared discriminator per VU cache entry, retaining full validation on every acceptance and normal fallback for absent addresses/collisions.
- Pass31 tests,21,078,049 native validator decisions and three identical generated-WAV pairs; retain all56 pure FPS controls and prior gates. The candidate fails the predeclared screen, stays isolated, and exact v17 source/EXE remain current.
- Preserve six human v17 sessions, previous packages/save and all open full-game/graphics/physical-latency/distribution gates; GitHub anonymous docs only.

## 2026-10-20 — Six-environment controller baseline

- Analyze six separate exact-v17 controller sessions,76,301 VBlanks,248 complete five-second buckets; retain all drops, spikes and partial buckets.
- Confirm normal exit/drain/join and original/QA card preservation in all six; distinguish Fuji throughput dips from near60 cadence irregularity.
- Preserve v20 rejection and full-game/result-save/30min gates; publish anonymous team evidence only.

## 2026-10-20 — Vanilla v20 combined VU/audio cadence audit

- Combine the exact private v19 VU rejection/test implementation with Windows SDL512 request and1024 fallback; preserve guest clocks, physics, graphics, controls and legacy pacing.
- Pass31 tests,21,078,049 fresh native old/new VU decisions and three fully identical generated-WAV pairs before FPS; remove probes and verify pure rebuild.
- Complete all56 warmed comparison windows with criteria declared before edits; retain every adverse pair. The combined candidate fails the prior performance screen, stays isolated, and exact v17 remains current. No new v20 image/route matrix or gameplay package follows rejection.
- Keep complete races/result-save/readback, classes/Mirror/continuous30min, original graphics parity and physical audio/input/second-PC acceptance open. Public attribution remains the team; GitHub docs only, main unchanged.

## 2026-10-20 — Vanilla v19 Fuji/VU audit (experiment not promoted)

- Add a private adaptive mismatch-word rejection experiment; retain complete reachable-code validation on every acceptance, candidate order and invalidation semantics.
- Pass31 tests, expanded actual-cache mutation coverage and21,078,049 native old/new decision checks without a mismatch; remove probes and verify pure rebuild before FPS.
- Complete seven-scene controls: Fuji throughput gates pass; all three Skorost-1 callback-p99 pairs regress beyond the prior10% guard. Isolate experiment and restore exact v17; no new image/36-route matrix or package after rejection.
- Retain the interrupted automation and restart only its unfinished warmup pair after the maintainer requests the wheel. Candidate human Fuji:59.20 mean simulated FPS, victory from last reported, two five-second windows below55. Timing tails and result-save verification remain open.
- Preserve previous packages/cards and keep GitHub documentation-only. Main unchanged; PR23 open.

## 2026-10-20 — Vanilla v18 audio timing audit (experiment not promoted)

- Audit EE post/pacing and GS acquire/submit/present with temporary thread-owned timestamps; confirm software queue quantum and distinguish callbacks/API timing from scanout.
- Test Windows256-frame audio request with fallback and startup spec log;31 tests and seven-scene warmed controls pass correctness but fail the predeclared1% Fuji mean-FPS guard. Preserve all adverse data and the large Skorost baseline outlier.
- Isolate experiment; restore exact v17 source/EXE and verify pure rebuild code/data equivalence. No new gameplay package or default change retained.
- Extend baseline QA with18,000 threaded automated VBlanks and separate end-state replay capture. The automated car is still on lap1/2; do not call this a completed race.
- Analyze two human sessions (61,327 VBlanks total, about8m35 each including startup), recognized Xbox360 controller in the second, and maintainer-reported keyboard victory. Retain irregular callback tails and unresolved scene-clock/wall-clock differences.
- Run seven independent native active/pause/state-reload/resume/effects cases. Save and shutdown preserved; original cadence, actual result-save and continuous30minute certification remain open. Documentation/metrics only; main unchanged.

## 2026-10-20 — Vanilla v17 repeated mip snapshot union removal

- Skip repeated eligible whole-mip range unions locally within snapshot_batch; keep own-word filtering, nonmip UV bounds, changed descriptors, hazards and GPU payloads.
- Pass 31 tests: 6,786 cases/1,115,619 primitives against frozen v16; 696,942 new native per-call checks and 12 identical image pairs.
- Pass the predeclared seven-scene warmed gate: Skorost-1 +2.69%, three positive pairs; retain all adverse pairs and frame-time tails. No stable60/full-game acceptance.
- Verify 36 short Class1 routes and two final-folder launches; preserve v16 lifecycle/card fixes, package/save and prior artifacts. Publish only documentation/metrics; private package contains own ISO/ELF.

## 2026-10-20 — Vanilla v16 ordered shutdown and card persistence

- Publish host close requests atomically; drain EE/VU/GS and GPU before final stats, join native workers and return normally, including early loading errors.
- Force pending card persistence at normal EE exit; write/close a sibling pending file and check replacement before clearing dirty state or reporting success. Preserve old data on tested failures and support retry.
- Pass 31 tests, seven native lifecycle/error scenarios, 12 new identical image pairs, warmed three-scene controls, 36 short Class 1 routes and two final-folder launches.
- Retain adverse performance/tail results and raw terminal counters; compare callbacks over a common prefix because drain changes terminal coverage. No new FPS optimization or full-game acceptance claim.
- Preserve v15 package/save and earlier artifacts; publish documentation/metrics only. Full races/result-save, original parity, restart/long sessions, clean-PC and distribution gates remain open.

## 2026-10-20 — Vanilla v15 GS snapshot reuse

- Compile a new private local native GUI with snapshot-call-local descriptor/mip bounds reuse; preserve per-primitive bounds, all overlap tests and GPU payloads per checked call.
- Pass 27 tests, 6,747 frozen-source cases / 1,078,317 primitives, 697,211 native snapshot reference checks, 12 identical image pairs and 36 short Class 1 route windows.
- Retain all seven-scene warmed pairs: Skorost-1 52.98→55.91 simulated FPS (+5.54%); Fuji changes are small and adverse callback tails remain open.
- Record slight terminal async counter differences and the unresolved explicit final drain/join; no full-stream equality or lossless shutdown claim.
- Verify two launches of a new private local package while preserving the prior package/save and original v13. 1x and legacy pacing stay default; v14 stays isolated. No public/friend binary or assets upload.

## 2026-10-20 — Recovered media and real portable validation

- Validate recovered legitimate ISO with the production preparer and complete actual portable boot/minimal-PATH checks.
- Resume the three-pair Skorost control, pass89,922 exact-candidate Q checks and collect separate native CPU/sampling diagnostics; retain historical adverse data and isolate v14.
- Complete32 warmed1x/2x short replay windows and eight separate captures; keep1x default after8–13% FPS losses at2x.
- Assemble a private local package containing own ISO/ELF/copied QA card; verify default local data/save discovery, bounded race exit and reopening. No public/friend release or new native build.
- Preserve runtime and older packages; update documentation/metrics only. Full-game, original parity, clean-PC and distribution gates remain open.

## 2026-10-19 — Portable data preparation v1

- Add a private Windows/Python preparer for the audited USA ISO boot/ELF; use read-only input, streaming/hash verification and a new destination only.
- Pass52 synthetic fault/format/path cases plus a production-CLI artificial fixture containing the audited local ELF; no fixture was run as a game.
- Preserve runtime sources, v13 EXE/ZIP and the entire earlier portable bundle; no native rebuild or new boot/FPS/release claim.
- Publish documentation/metrics only. Complete legitimate media, real portable boot and gameplay/clean-PC gates remain open.

## 2026-10-19 — Portable preflight v1

- Add local opt-in SpeedRacerPortable target with empty DEV_ROOT/DISC_HINT and separate output; preserve original v13 executable/runtime sources.
- Add a reusable bounded preflight checker; nine media-absent cases and26 rebuilt tests pass with bundled DLLs and minimal system PATH.
- Do not claim successful game boot, Unicode runtime IO, clean-PC QA, FPS gains or a gameplay release; legitimate local ISO remains unavailable.
- Update public documentation/metrics only; source and technical binary stay local.

## 2026-10-19 — Release readiness and graphics research

- Document conditional, low-confidence alpha/Vanilla planning ranges and explicit acceptance gates.
- Inspect native1x/2x/3x rendering and presentation; define a controlled aliasing comparison without changing defaults.
- Research BMT619 texture pack and Kermalis asset tool; record compatibility/license gaps. No pack download/integration or new gameplay claim.
- Preserve active v13 source/executable and all prior evidence; publish documentation only.

## 2026-10-19 — V14 Q experiment not promoted

- Preserve two Q-index prototypes locally;26 tests,225,036 Q differentials and883,499 instrumented native reference checks pass.
- Retain14 warm-ups and42 measured windows across seven scenes, including the strong Skorost-1 loss and other adverse data.
- Restore v13 source/executable byte-for-byte; isolate the experiment on a private local branch. No new gameplay package.
- Mark additional native diagnosis/visual/matrix/package QA incomplete after the legitimate local disc image became unavailable. Public update is documentary only.

## 2026-10-19 — Local Vanilla v13 queue sharing

- Separate queue waiter flags and defer freed snapshots to the full path without changing atomics, wake ownership or packet order.
- Retain warmed v11/v12/v13 triplets in Fuji/Skorost and paired comparisons in three other scenes, including all adverse data.
- Pass26 tests, ten expanded queue stress runs,12 unchanged images and36 short native route windows.
- Keep legacy pacing and prior packages; full-game acceptance stays open. Publish documentation/metrics only.

## 2026-10-19 — Local Vanilla v12 GS read-set reuse

- Trace EE/VU/GS work and waits in Fuji/Skorost; keep diagnostic probes separate and absent from the final artifact.
- Skip repeated texture-read registration for exact descriptors already in the same GS batch; preserve hazards and payloads.
- Pass 74,531 differential draws,26 tests,12 unchanged images and36 short native route windows.
- Retain warmed five-scene pairs, adverse results, prior baselines and legacy default pacing; global acceptance stays open.
- Prepare a private GUI package; publish documentation and sanitized metrics only.

## 2026-10-19 — Local Vanilla v11 VU equality and live scene clock

- Audit sampled CRT callers and validate exact SSE2 equality over existing VU cache spans; preserve every byte and invalidation path.
- Pass2,308,915 equality cases, real cache mutation checks,25 tests,12 unchanged images and36 short route windows.
- Retain five-scene warmed alternating pairs and all adverse results; full-game performance and pacing remain open.
- Trace a live scene-clock writer, validate active/pause/resume behavior and add read-only opt-in telemetry on the EE thread.
- Prepare a private GUI package; publish documentation/metrics only. Prior baselines and legacy default pacing remain available.

## 2026-10-19 — Local Vanilla v10 VIF fills

- Profile the zero-input fill workload in Fuji/Skorost; predecode mask rows and omit protected destinations without changing simulation or effects.
- Pass 69,168 VIF differential cases, 23 tests, 12 unchanged images and 36 short native route windows.
- Retain same-path warmed alternating measurements, negative cases, prior baselines and legacy default pacing; global acceptance stays open.
- Prepare a private native GUI package; publish documentation and metrics only.

## 2026-10-19 — Local Vanilla v9 GS preparation

- Reuse unchanged31-word GS descriptors, invalidating before rejected primitives and at flush; preserve GPU payloads and default pacing.
- Pass23 tests,61,265 actual-draw differential calls,12 unchanged images and36 short native route windows.
- Retain warm-up runs and all alternating-pair results; small Grand Prix/Skorost gains do not establish full-game60 FPS.
- Prepare a private local Windows package; publish documentation/metrics only.

## 2026-10-19 — Local Vanilla v8 pacing investigation

- Audit audio-queue quantization and GPU submission order; retain rejected pre-publication probes and adverse measurements.
- Implement opt-in monotonic pacing with audio reserve; preserve default pacing because race results remain mixed despite improved menu cadence.
- Add same-binary alternating comparison helper; pass22 local tests,12 unchanged images and three final-build smoke modes.
- Document the next ten priorities and keep full-game acceptance open. No implementation or binary is published.

## 2026-10-19 — Vanilla v7 evidence (documentation only)

- Record VU register-access optimization and removal of unused global TPC reads from helper construction.
- Preserve the same 37 continuation instruction bodies; reject the extra pipeline-reference qualifier after an inconclusive probe.
- Publish adjacent v6/v7 comparisons, retain prior grouped/exploratory runs and document observed concurrent host load.
- Record 21 local tests, six-environment register/memory/GIF and 12-image regression, two native threaded diagnostic scenes and 36 short route samples.
- Keep original-speed gameplay, complete races, visual parity, long sessions and clean-machine/distribution gates open. No implementation or game data is published.

## 2026-10-19 — Vanilla evidence update (documentation only)

- Publish dated v2 baseline and v3–v6 engineering reports, sanitized metrics and build hashes.
- Document VIF context reuse and 29,968 comparisons against the frozen v5 parser.
- Document native VU continuations, VIF/Q optimizations, mipmapping and GS hazard work.
- Record 21 passing local tests, 36 short route samples and remaining performance/QA gaps.
- Update README and Vanilla roadmap without marking full-speed gameplay, visual parity, clean-machine packaging or redistribution complete.
- No executable, commercial game-derived source, ISO, BIOS, ELF, save, screenshot or game asset is part of this publication.

## Earlier planning
- Repository documentation and public development roadmap.
- Created investigation track for speed, graphical fidelity and clean builds.
- Public executable distribution remains blocked by rights and verification review.
