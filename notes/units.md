# Units: world coordinates vs HUD numbers

World positions are 32-bit ints (entity `+0x34/+0x38/+0x3c`). Most notes write distances as
**raw/65536** ("units"; `multiplayer.md`, `capships.md`, `weapons.md`). `ai.md` uses raw/0x1000 in places.
The simulation runs at **50 frames/s**.

## Conversion table

| Quantity | HUD formula | In "units" (raw/65536) |
|---|---|---|
| **Range** (target box) | raw distance × 2⁻²³ (`0x52e824` = 1/8388608), `"%s: %2.2f"` | **range = units / 128** |
| **Speed** (speed readout) | \|v\| raw/frame × 400/65536 (`0x52e818`), `"%d"` + `" M"` | **speed = units/s × 8** |
| Throttle readout | throttle (0..1024) × 0.09765625 (`0x52e81c`) = percent | – |

So the HUD is self-consistent: **1 range unit = 1024 speed units × 1 s**, i.e. 2²³ raw. Speed reads
like metres per second and range like (binary) kilometres. A ship doing 1024 on the speed readout
closes 1.00 of range per second.

Equivalents for 1 range unit:
- 2²³ = 8,388,608 raw
- 128 "units" (raw/65536)
- 2048 raw/0x1000 (`ai.md` scale)

## Where it's drawn
- **Range:** `Hud_DrawTargetInfo 0x42b3d0`. Label from HUD layout `TARGET_BOX` / `RANGE` (`Hud_LoadTargetBox 0x42d5d0`,
  slot `0x5b01e0+0x6f4`). Uses the exact Euclidean distance `Vec3_DistanceTo 0x48e550` (player → target).
- The debug overlays `DIST TO TARGET: %2.2f` (`0x4648a0`), `DIST TO WAYPOINT` (`0x464e70`) and
  `HAS JAMMER [RANGE=%2.2f]` (`0x465150`) all use the same 2⁻²³ factor.
- **Speed:** `Hud_DrawSpeed 0x428410`. `.des` `MAX_SPEED` is stored ×163.84 (`Speed_HudToRaw 0x423e60`), so
  the readout shows the `.des` number at full throttle. See `weapons.md` "Speed units vs the HUD".

## Radar has no range scale
The radar sphere (`Radar_DrawEntity 0x4297e0`) computes the distance and discards it:
1. It rotates the offset into ship space (`0x4b2410`).
2. It projects `x/z`, `y/z` (`Radar_Project 0x4296d0`). Blips show **direction only**.
3. Front hemisphere (`z ≥ 0`): inner disc, radius 0xf80 (`Radar_PlotFront 0x4292f0`).
4. Rear hemisphere: mirrored onto the outer ring, at `0x1f00 - r` (`Radar_PlotRear 0x4294c0`).
5. Screen size comes from HUD layout `RADAR` / `SPHERE` (`Hud_LoadRadar 0x42d490`).

What appears is limited by which entities the client knows about. In MP that's the server's interest radii
(`multiplayer.md` "Radii"):

| Radius | Units | Range readout |
|---|---|---|
| near | 3750 | 29.30 |
| far | 10000 | 78.13 |
| far, with `g_FlightStateFlags & 4` | 5000 | 39.06 |
| fog quadrant without `FOG_RADAR` (item 0x40) | 3000 | 23.44 |

## Handy conversions

| Thing | Units | Range readout |
|---|---|---|
| Glint/Flare max travel (375 u/s × 3 s) | 1125 | 8.79 |
| Pulsar max travel | 1320 | 10.31 |
| AI weapon pick range 437.5 / 625 / 1250 | – | 3.42 / 4.88 / 9.77 |
