#!/bin/bash
CURRENT_DIR=$(pwd)
echo $(pwd)
# 定义 Kitty 动作、描述和快捷键
options=(
    "new_window: Open a new window"
    "new_tab: Open a new tab"
    "close_window: Close the current window"
    "show_scrollback: Show scrollback buffer"
    "line_up: Scroll up one line (ctrl+shift+up)"
    "line_down: Scroll down one line (ctrl+shift+down)"
    "page_up: Scroll up one page (ctrl+shift+page_up)"
    "page_down: Scroll down one page (ctrl+shift+page_down)"
    "top: Scroll to top (ctrl+shift+home)"
    "bottom: Scroll to bottom (ctrl+shift+end)"
    "previous_shell_prompt: Jump to previous shell prompt (ctrl+shift+z)"
    "next_shell_prompt: Jump to next shell prompt (ctrl+shift+x)"
    "browse_scrollback: Browse scrollback in less (ctrl+shift+h)"
    "browse_last_cmd_output: Browse last command output (ctrl+shift+g)"
)

# 选择命令
cmd=$(printf "%s\n" "${options[@]}" | fzf --height 15 --border --prompt="Select command: " | cut -d ':' -f1)

# 执行选定的命令
[ -n "$cmd" ] && kitty @ action "$cmd"
echo $(pwd)