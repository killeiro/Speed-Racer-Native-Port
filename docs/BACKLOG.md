# Existing issue triage

Updated 2026-10-31 against playable v0.1.0 and source-v0.1.0. This table
organizes the existing backlog; it does not close issues or certify fixes.
Older issue comments and audit numbers remain historical evidence.

| Existing issues | Current treatment | Next evidence needed |
| --- | --- | --- |
| [#1](https://github.com/killeiro/Speed-Racer-Native-Port/issues/1) source/dependency audit | Guides, source map and dependency pins exist; quality rules and architecture are now explicit | Review component boundaries, source changes and upstream adaptation; do not treat source publication as a complete audit |
| [#2](https://github.com/killeiro/Speed-Racer-Native-Port/issues/2) baseline | Instrumentation and prior measurements exist | Use the current candidate identity, comparable input/settings, frame-time distribution and simulation speed for each performance claim |
| [#3](https://github.com/killeiro/Speed-Racer-Native-Port/issues/3), [#4](https://github.com/killeiro/Speed-Racer-Native-Port/issues/4) timing/VU/GS | Later Fuji fixes supersede old v6 throughput figures; pause cadence and isolated hitches remain | Concrete trigger, scoped profile, relevant differential tests and before/after measurement; no whole-game 60 FPS claim |
| [#5](https://github.com/killeiro/Speed-Racer-Native-Port/issues/5), [#6](https://github.com/killeiro/Speed-Racer-Native-Port/issues/6) visual fidelity | Filtering/upscaling and the native hardware GS are present; full original parity is not certified | Matched scene/effect comparisons on the actual hardware renderer when changing it |
| [#7](https://github.com/killeiro/Speed-Racer-Native-Port/issues/7) Windows build/QA | Public sources, build recipe and earlier positive external test report exist | Fresh environment build and CI evidence; device-specific and integrated-package checks remain distinct |
| [#8](https://github.com/killeiro/Speed-Racer-Native-Port/issues/8) artifact provenance | Source/dependency provenance documents exist; published artifact types must remain distinguished | Component-specific review as distribution inputs change; no blanket inference from the root LICENSE |
| [#9](https://github.com/killeiro/Speed-Racer-Native-Port/issues/9) graphics presets | High 3×, filtering and FXAA already ship | Remaining UI/preset improvements need measured overhead and preservation of Vanilla |
| [#10](https://github.com/killeiro/Speed-Racer-Native-Port/issues/10)–[#12](https://github.com/killeiro/Speed-Racer-Native-Port/issues/12), [#17](https://github.com/killeiro/Speed-Racer-Native-Port/issues/17) mods/creator tools | Deferred research | First document a format and demonstrate one reversible cosmetic overlay; no ready SDK or custom vehicle guarantee |
| [#13](https://github.com/killeiro/Speed-Racer-Native-Port/issues/13)–[#16](https://github.com/killeiro/Speed-Racer-Native-Port/issues/16), [#21](https://github.com/killeiro/Speed-Racer-Native-Port/issues/21) camera/replay features | Deferred research | Investigate game state and replay data after Vanilla quality/stability work |
| [#18](https://github.com/killeiro/Speed-Racer-Native-Port/issues/18)–[#20](https://github.com/killeiro/Speed-Racer-Native-Port/issues/20) remaster/art | Future concepts | Art and integration feasibility, isolated from Vanilla defaults |

Controller compatibility, intermittent audio categories/transitions, CPU/OS
compatibility and maintainability should use focused new reports when no
existing issue matches. Include version, hardware/device, steps, observed versus
expected behavior and the actual verification scope. Do not open duplicates of
the tasks above or close them based only on documentation changes.

Build/test counts in [SOURCE-VERIFICATION.md](SOURCE-VERIFICATION.md) describe
the source-publication preparation. Current candidate evidence belongs to its
own workflow/build results. CI does not certify every physical device or audio
category, and no new complete track sweep is implied by this triage.
