# Reproducible Test Plan

## Test environment
- Windows edition/build:
- CPU / GPU / VRAM:
- Graphics driver:
- Controller:
- Build commit SHA:
- Compiler/runtime versions:
- Display refresh rate / resolution:
- VSync state:

## Scenarios
1. Launch → main menu
2. Controller navigation and analog inputs
3. Race start (10 seconds)
4. 3-minute race with crowded scenes and effects
5. Pause → resume → restart
6. Fullscreen/windowed and resolution changes
7. Exit and relaunch; verify saved settings if supported

## Metrics
- Median, p95 and p99 frame time (ms)
- Simulation elapsed time / wall-clock elapsed time
- CPU and GPU utilization, GPU dispatch count, stalls
- Audio glitches and controller delay observations

## Visual comparisons
Capture exact scene, camera, game state and native/PCSX2 settings. Compare textures, transparency, depth, fog, particles and UI. Use only images that may legally be shared.

## Acceptance
Never substitute average FPS for timing correctness. All fixes require a regression run and record of conditions.
