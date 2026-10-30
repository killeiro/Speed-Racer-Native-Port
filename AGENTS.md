# Contributor instructions

This repository contains the native Windows port sources associated with the
published Vanilla release. Read `docs/BUILDING.md` and the source/release provenance
record before changing build inputs.

- Preserve the default High 3× graphics, bilinear HUD/textures, FXAA, adaptive
  fullscreen, keyboard presets and Xbox/PlayStation controller support.
- Review the current diff and reproduce a concrete issue before changing code.
  Do not discard unrelated changes or replace user saves/settings for a test.
- Run the relevant automated tests and document the scope and limitations of
  validation. Performance claims need comparable before/after measurements.
- Use isolated copies of the integrated package for gameplay checks. Preserve
  the data-pack launch flow and use disposable test profiles/cards.
- Keep `generated/speedracer` and the native VU block sources consistent with
  their manifests. Do not silently regenerate or hand-edit release inputs;
  record the generator, inputs, resulting hashes and pertinent comparisons.
- Do not commit credentials, personal paths, private logs, game saves, toolchain
  installations, build caches or other local runtime files.
- Keep public documentation in English and refer to maintainers collectively
  as “the team”. Preserve existing component attribution and notices.
- Prefer focused pull requests with the problem, resulting behavior and exact
  verification described. Do not repeat broad manual test campaigns without a
  change or hypothesis that justifies them.
