# Source snapshot verification

Validated on Windows 11 x64 on 30 October 2026 using the toolchain recorded in
`source-provenance.json`. These checks used an isolated source snapshot rather
than the maintainer's existing build objects.

- Complete native host/runtime/game compilation succeeded through the public
  Windows wrapper, including the `SpeedRacerHardware` target.
- **70/70 configured root CTests passed**, including keyboard/controllers,
  VIF, VU arithmetic/continuations/local blocks, data preparation/package and
  renderer/runtime checks. Optional GS runtime tests used the published DLL and
  its adjacent dependencies. Test counts vary with configuration.
- The initial suite passed 65 checks. Five filesystem/import checks that were
  denied by restricted file access passed when retried with normal filesystem
  access. These are 70 distinct tests, not 75 different tests.
- A separate clean build of the matching v30 native GS passed **4/4** synthetic
  bridge/packet/filter tests using the pinned upstream inputs and compatibility
  adapter. It consumed no game data or personal saves.
- The fetched wgpu archive, its static library and both API headers matched the
  accepted input hashes. Source manifests preserve the 332 generated files,
  including 310 extra VU programs, and the included Fuji local blocks.
- Thirty-seven host/runtime release overlay files matched their accepted hashes;
  the original working checkout and released playable binaries were not changed.
- The source ZIP is checked member by member and extracted independently; the
  source manifest verifies every distributed source file except itself.

The local preparation exposed and fixed Windows backslash escaping in the new
wrapper and an initially omitted `.inc` test fixture. No host/runtime instruction
semantics were changed for this publication.

`source-verification.json` records the rebuilt output hashes. They are candidate
build identities, **not** replacements for the published EXE/DLL hashes. PE
timestamps, paths, toolchain and link details can change binary bytes. No
byte-identical reproduction, new FPS gain, physical input acceptance, complete
audio sweep or fresh whole-game acceptance is asserted by these source checks.
