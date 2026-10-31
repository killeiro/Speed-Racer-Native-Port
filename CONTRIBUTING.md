# Contributing

Thanks for helping improve the Speed Racer Windows project. Start with the
[architecture](docs/ARCHITECTURE.md), [code quality rules](docs/CODE_QUALITY.md),
[build instructions](docs/BUILDING.md), [source map](docs/SOURCE-MAP.md) and
[provenance](docs/SOURCE-PROVENANCE.md). Fork the repository and branch from a
reviewed main revision. The `source-v0.1.0` tag remains the frozen source baseline
associated with the published playable release.

## Before opening a PR
1. Search existing issues and link the relevant roadmap task.
2. Explain the exact build and environment used to test.
3. Give before/after evidence for performance fixes, or matching screenshots for graphics fixes.
4. Do not add ISOs, BIOS, personal saves, data packs, runtime binaries or build caches. The accepted generated translation units are versioned inputs; changes to them require matching manifests and validation.
5. Preserve license notices of any dependencies; do not assume the runtime license also licenses original game content.
6. Prefer small, auditable changes. No untested performance claims.

## Review scope

Keep refactoring, behavior changes and optimization in separate PRs when they
can be reviewed independently. Identify the component and whether each change
affects editable code, generated inputs or an upstream adapter. Do not reformat
generated or imported code to match local style.

Explain why the change works, not only which tests ran. For runtime changes,
record the applicable CTest configuration; GS changes also need the matching
hardware-renderer checks. Unavailable GPU or physical-device checks must be
reported as unavailable. Passing module tests does not certify all tracks,
audio categories or USB/Bluetooth controllers.

AI-assisted contributions follow the same requirements. Disclose material use
and verify the resulting code, assumptions, dependencies and tests. The project
uses substantial AI assistance; another agent's assessment must not be presented
as independent human review. Human technical review is welcome, especially for
arithmetic, synchronization, memory safety and new generated coverage.

See [CODE_QUALITY.md](docs/CODE_QUALITY.md) for module boundaries, conventions,
generated-input handling and the review checklist. Preserve historical records
and attribution when improving the documentation.

Use the [bug report](.github/ISSUE_TEMPLATE/bug_report.yml) and [performance report](.github/ISSUE_TEMPLATE/performance.yml) templates.
