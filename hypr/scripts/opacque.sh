#!/bin/bash

class_value=$(hyprctl clients -j | jq -r '.[] | select(.focusHistoryID == 0) | .class')

# echo "当前焦点窗口的 class: $class_value"
hyprctl dispatch setprop class:$class_value opaque toggle