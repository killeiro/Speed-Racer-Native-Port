# Changelog

Entries describe their status at the stated milestone; older publication limits
are historical. The playable v0.1.0 and its separate source-v0.1.0 tag remain
preserved.

## Unreleased — source quality and build verification

- Explain recompilation, supporting PS2 runtime, embedded PCSX2/kzgs renderer,
  upstream contributions and substantial AI assistance prominently.
- Define code quality and review rules for editable, generated and imported
  sources; retain existing provenance and historical evidence.
- Add read-only source/Windows build verification, explicit CPU test coverage
  and truthful separation of Vulkan, external GS and physical-device checks.
- Reconcile the roadmap and existing issue groups with the published baseline.
- Document AVX2/FMA build requirements and the remaining GS pre-load guard gap.
- No gameplay/runtime change, new FPS gain, controller fix or playable release
  is claimed by these changes. Actual CI results belong to the corresponding run.

## 2026-10-30 — playable and source publication

- Publish the recommended experimental v0.1.0 Windows package with ergonomic
  keyboard defaults, preserving accepted rendering and integrated-data launch.
- Publish host/runtime, generated inputs, GS bridge, tests and build scripts
  under source-v0.1.0. Keep the earlier playable tag and artifacts unchanged.
- Document clean source-build results and bounded verification; do not claim
  byte-identical rebuilt binaries or complete game/device acceptance.

## Integrated Vanilla v38 — local conversion milestone

- Convert the game data into an integrated local package that runs without an ISO during play.
- Preserve the accepted High 3× image quality, audio, controller support and adaptive fullscreen.
- Establish v38 as the baseline for further development, testing and corrections.
- Begin the next-version robustness phase: repeatable package preparation, integrity checks and save/settings preservation while another Windows PC is being tested.
- Prepare the next public announcement; a public playable download is not available yet.

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


