# Source and release provenance

The `source-v0.1.0` tag records the source snapshot associated with the playable
v0.1.0. The older playable tag is preserved, rather than retroactively changing
its documentation-only commit. `source-provenance.json` identifies the actual
release inputs and hashes; `source-manifest.json` pins the distributed files.

The host/runtime starts from development commit d1134df with the exact accepted
37-file v55 overlay. The included 332 EE/VU files preserve the accepted generated
coverage. Forty native VU prefix blocks and their differential test, previously
outside the checkout, now live under `native/vu-local`. The generator's absolute
include was replaced with a relative include; its instruction lowering was not
changed. Current raw media and historical capture sets are not source inputs.

The shipped renderer remained the accepted v30 bridge from checkpoint 93add46,
with pinned PCSX2/kzgs components. It is deliberately selected instead of the
later unpromoted tracing build. The release DLL's packaging removed diagnostic
build-path prefixes and updated the PE checksum; it did not change its compiled
instructions. The renderer README describes this distinction and the upstream
compatibility adapter. All source changes applied to the pinned upstream inputs
are exposed by `native/gs_hw/compat.py`.

This is source correspondence and a tested build recipe. It is not a claim of
bit-for-bit reproducible binaries: build paths, timestamps, toolchain and library
versions can affect bytes. Rebuilt binaries are separate candidates; published
playable assets and their original receipt remain unchanged. See
[SOURCE-VERIFICATION.md](SOURCE-VERIFICATION.md) for actual clean-build results.

The original MIT notice in `LICENSE` is retained for the base recomp/runtime
project. The native GS bridge has its GPL notice and `COPYING.GPL-3.0`; the IPU
adaptation retains `runtime/src/ipu/NOTICE`. Pinned external inputs retain their
own notices. These notices do not assign the base project's MIT terms to game
translation units or artwork; their provenance remains distinct.
