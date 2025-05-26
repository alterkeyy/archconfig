#!/bin/bash
# 让 Hyprland 活动窗口边框每秒变色

function random_hex() {
    echo "0xff$(openssl rand -hex 3)"
}

# 无限循环，每 0.5 秒更新 active_border
while true; do
    hyprctl keyword general:col.active_border $(random_hex)  $(random_hex) $(random_hex) $(random_hex) $(random_hex) $(random_hex) $(random_hex) $(random_hex) $(random_hex) $(random_hex)  270deg
    # hyprctl keyword general:col.active_border $(random_hex) $(random_hex) $(random_hex) $(random_hex) 270deg
    hyprctl keyword general:col.inactive_border "0x595959"
    sleep 0.5
done
