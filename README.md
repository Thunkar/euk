# EUK Split Keyboard

A split ergonomic keyboard project with customizable accessories and per-key RGB lighting.

## Features

- Split design for ergonomic typing
- Hot-swappable MX switches
- Per-key RGB lighting (SK6812 mini-e LEDs)
- RP2040-based controller
- Optional accessories:
  - OLED screen
  - Rotary encoder
  - Analog joystick
  - Potentiometer
  - Tenting support

## Documentation

- [Bill of Materials (BOM)](./split/docs/BOM.md) - Complete list of components needed
- [Ordering PCBs](./split/docs/ORDERING_PCBS.md) - Guide for ordering the printed circuit boards
- [Assembly Guide](./split/docs/ASSEMBLY.md) - Step-by-step assembly instructions

## Project Structure

- `cad/` - 3D printable case and accessory files
- `pcb/` - KiCad PCB design files
- `docs/` - Documentation and guides
- `via.layout.json` - VIA keyboard configurator layout
- `via.definition.json` - VIA keyboard definition
- `kle.definition.json` - https://keyboard-layout-editor.com/ definition

## Getting Started

1. Review the [BOM](docs/BOM.md) to buy all required components
2. Follow the [PCB ordering guide](docs/ORDERING_PCBS.md) and get yourself some boards
3. Print the required parts from the `cad/` directory
4. Follow the [assembly guide](docs/ASSEMBLY.md) to build it!

## Firmware

This keyboard uses QMK/VIA firmware. Use the included `via.layout.json` file to configure your keyboard layout in [VIA](https://usevia.app/).

At the moment, use the QMK fork at https://github.com/Thunkar/qmk_firmware

After installation, flash with:

`qmk flash -kb euk/split -km default`
