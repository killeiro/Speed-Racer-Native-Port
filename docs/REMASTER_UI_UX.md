# Remaster UI/UX — HUD Concept Direction

**Status:** concept / design brief only — not implemented, not a finished design system.

## North star

Redesign the original Speed Racer gameplay interface as a premium current-generation racing HUD: clean, high-contrast, fast to scan, expressive without stealing attention from the neon track. The visual concept discussed by the team shows translucent angular panels, restrained cyan accents, modern typography and subtle lighting.

## Reference screen: race HUD

| Region | Information | Design intent |
| --- | --- | --- |
| Top left | Racer dialogue portrait, name and subtitle | Compact contextual radio card; collapses when idle |
| Top right | Lap count | Clear numerals, lightweight ring or pill, glanceable |
| Left side | Position, racers, time deltas | Ranked list with emphasized player, compact portraits if readable |
| Bottom right | Speed (km/h), gear, boost, health | One coherent cluster; prominent speed, distinct boost/health semantics |
| Gameplay | Car, track and rivals | Preserve central sight lines and motion clarity |

## UI principles

1. **Readability wins:** preserve contrast over the bright track; avoid tiny italic captions or distracting bloom.
2. **Accessible:** color-independent indicators, scalable type and elements, safe-area settings, colorblind-friendly alternatives.
3. **Controller first:** all menus navigable with gamepad, visible focus, consistent back/confirm behavior.
4. **No fake data:** HUD must be driven by real game values (position, speed, gear, boost, damage).
5. **Intentional motion:** short controlled transitions; reduced-motion option; avoid camera/UI jank.
6. **Performance aware:** shaders, glass blur and UI effects must respect GPU budget and have cheap fallbacks.
7. **Vanilla preservation:** a Remaster HUD never silently replaces the original interface in the faithful edition.

## UX deliverables

- [ ] Audit every original game screen and HUD state
- [ ] Create Figma wireframes and high fidelity components (desktop 16:9 and alternative aspect ratios)
- [ ] Define tokens (type scale, spacing, surfaces, contrast, colors, motion, focus)
- [ ] Prototype during actual 60-second gameplay footage, including bright and dark tracks
- [ ] Build settings, HUD editability/sizing if practical, and accessibility options
- [ ] Validate race telemetry hooks and implement UI component library

## Future in-race camera UX

Let players switch supported cameras through a dedicated control. Save preference; allow distance/height/FOV adjustment within technical limits. Camera choices should be separated from Photo Mode and from replay-only Director Mode.

## Boundaries

Official remaster skins/liveries (such as proposed red heritage or black/yellow Racer X-inspired variants) are **curated Remaster content**, not automatically community mods. A mod can offer a similar *type* of visual change when installed independently by a creator. Specific protected designs and game-derived assets require a distribution rights review.

## Visual concept status

An exploratory HUD image was generated in the design conversation. This repository currently documents its layout and direction; the image itself has not been uploaded to this repository. Final design files, user tests and implementation remain pending.
