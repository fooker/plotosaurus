# 🦕 plotosaurus
My CNC pen plotter machine

## Features
- CoreXY
- Up to DIN A3
- Modular pen holder
- Mostly printed
- Harvested Parts from Prusa MK3 -> MK4 upgrades and some rods from Flux Delta


## Usage

### Convert SVG to gcode

#### For Pen Plotting
```bash
svg2gcode --circular-interpolation true --feedrate 8000 --on "M3S100G04P0.1" --off "M5G04P0.1" --dimensions ,150mm logo.svg --out logo.gcode
```

```bash
vpype read logo.svg linesimplify linemerge linesimplify linesort pagesize --landscape a5 gwrite --profile plotosaurus logo.gcode
```

#### For drag knive cutting

