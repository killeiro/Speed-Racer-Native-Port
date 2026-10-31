# Code quality and review rules

These rules apply to human and AI-assisted contributions. The goal is code that
another developer can understand, build and maintain, with evidence appropriate
to each change. Start with the [architecture](ARCHITECTURE.md),
[source map](SOURCE-MAP.md) and [build instructions](BUILDING.md).

## Identify the kind of source

| Kind | Examples | Editing rule |
| --- | --- | --- |
| Editable implementation | Host, runtime, recompilers, bridge and tests | Review a focused diff; preserve documented contracts |
| Generated release inputs | `generated/speedracer`, `native/vu-local/blocks` | Preserve exact bytes unless deliberately updating coverage with provenance and semantic validation |
| Imported components and adapter | Pinned GS dependencies and `native/gs_hw/compat.py` | Keep upstream code attributable and compatibility changes explicit; preserve notices |
| Historical evidence | Release receipts, audit reports and source tags | Add a correction or successor record; do not rewrite past results as current evidence |

Do not run a repository-wide formatter or line-ending conversion. Match the
existing style in the editable file being changed. Keep formatting-only edits
separate when they would obscure a functional review. A future formatter must
have an explicit editable-file scope and exclude generated/imported inputs.

## Implementation conventions

- Use names that describe behavior, units and ownership. Match local naming and
  indentation; avoid abbreviations unless they are established PS2 terms.
- Keep each module responsible for a coherent task. Make dependencies and state
  ownership explicit; separate diagnostic/configuration code from execution when
  doing so makes the contracts clearer.
- Prefer existing helpers and interfaces over new flags, wrappers or global
  mutable state. Document a new configuration option's default, lifetime and
  interaction with existing options.
- Handle failures at the boundary that can explain them. Propagate an actionable
  error; do not silently disable correctness checks, swallow failures or report
  unavailable work as success.
- Comment hardware constraints, invariants and reasons for nonobvious behavior.
  Avoid comments that merely restate the next line.
- Preserve guest arithmetic, Q/flag timing, packet ordering, cache validity and
  thread/queue ownership unless the PR specifically corrects one of them.
  Do not combine arithmetic changes with a mechanical extraction.

Large files and generated code are not automatically defective. Refactor a
specific mixed responsibility or unsafe interface, with observable behavior
preserved. Prefer an incremental extraction over a broad rewrite.

## Change and verification scope

One PR should address one problem or one behavior-preserving refactor. State
the trigger, expected result, implementation reasoning, affected interfaces and
remaining uncertainties. Separate refactoring from optimization where possible.

Use the applicable existing tests; add a regression when it exercises a real
failure or a meaningful contract. Avoid tests that only reproduce implementation
details. Record exact commands, source/build identity, toolchain, configuration
and actual results. Report skipped, unavailable and failed checks separately.

Runtime and renderer changes need their pertinent build/test configurations.
The released launcher uses the hardware GS, so compute-renderer tests alone do
not verify it. GPU and physical-device behavior require suitable environments;
module tests cannot certify all tracks, sound categories or controllers.

Performance changes need comparable inputs/settings and before/after evidence
for simulation speed and frame times. Preserve accepted visual quality. Gameplay
checks use isolated integrated packages and QA progress, never a reference
package or personal saves. Do not repeat broad campaigns without a concrete
change or hypothesis.

## Generated and upstream changes

New generated coverage must identify its input hashes, generator version,
resulting manifest changes and semantic comparisons. Do not manually prettify
machine output or bypass hash failures. Preserve the frozen published tag;
legitimate successor changes need deliberate matching manifest updates.

For an upstream adaptation, explain the required compatibility behavior and
keep the original dependency identities and notices visible. Do not silently
substitute newer dependencies or copy code with unclear origin.

## AI assistance and review

Disclose material AI assistance in the PR and inspect its output: control flow,
error paths, dependencies, assumptions and tests. The contributor should explain
why the patch works rather than rely on a generated summary.

Another agent's assessment is not independent human review. Seek human technical
review, particularly for memory safety, synchronization, arithmetic and generator
changes. If that review has not occurred, say so. Passing tests does not prove
the absence of bugs or malicious behavior.

Keep provenance, historical records, attribution and known limitations visible.
Documentation cleanup must not erase evidence to imply a different development
process. Never commit credentials, personal paths, private logs, saves, caches
or game data. See [CONTRIBUTING.md](../CONTRIBUTING.md) and the
[PR template](../.github/PULL_REQUEST_TEMPLATE.md).
