#!/usr/bin/env bash
killall waybar 2>/dev/null
sleep 0

if [[ "$USER" == "kirito" ]]; then
    waybar \
      -c ~/.config/waybar/config.jsonc \
      -s ~/.config/waybar/style.css &
else
    waybar &
fi
