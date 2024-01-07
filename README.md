# RP2040 60% keyboard

60% keyboard with my preferred bottom/right layout.

Uses hacky wiring to save rows and push keys into other cols. This makes for a semi-weird layout in the keymap but it works fine.

# Kicad /jlcpcb

Everything is on one side so it is cheaper to fab and so you do not see chips or didodes.

- File > Fabcrication outputs > component placement (to /tmp/fireball-components)
- `./kicad_pos_to_cpl.py /tmp/myrp60-components/myrp60-top-pos.csv /tmp/myrp60-jlcpcb-placement-pos.cmp.csv` (not in repo)

# Build / Flash

`CFLAGS="-Wno-error=deprecated -Wp,-w" make  handwired/onekey/myrp60:myrp60`

mount and copy to rp2040 drive

# Shoutouts

- Jfedor for the PCB - https://github.com/jfedor2/rp2040-pmw3360
- QMK for the software/firmware and helpful community
- wokwi for the placement script - https://github.com/wokwi/kicad-jlcpcb-bom-plugin
