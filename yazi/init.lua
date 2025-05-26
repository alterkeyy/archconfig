require("full-border"):setup()
require("git"):setup()
require("eza-preview"):setup({})
require("simple-mtpfs"):setup({})
require("copy-file-contents"):setup({
	append_char = "\n",
	notification = true,
})


require("custom-shell"):setup({
    history_path = "default",
    save_history = true,
})

-- You can configure your bookmarks by lua language
local bookmarks = {}

local path_sep = package.config:sub(1, 1)
local home_path = ya.target_family() == "windows" and os.getenv("USERPROFILE") or os.getenv("HOME")
if ya.target_family() == "windows" then
  table.insert(bookmarks, {
    tag = "Scoop Local",
    
    path = (os.getenv("SCOOP") or home_path .. "\\scoop") .. "\\",
    key = "p"
  })
  table.insert(bookmarks, {
    tag = "Scoop Global",
    path = (os.getenv("SCOOP_GLOBAL") or "C:\\ProgramData\\scoop") .. "\\",
    key = "P"
  })
end
table.insert(bookmarks, {
  tag = "Desktop",
  path = home_path .. path_sep .. "Desktop" .. path_sep,
  key = "d"
})

require("yamb"):setup {
  -- Optional, the path ending with path seperator represents folder.
  bookmarks = bookmarks,
  -- Optional, recieve notification everytime you jump.
  jump_notify = true,
  -- Optional, the cli of fzf.
  cli = "fzf",
  -- Optional, a string used for randomly generating keys, where the preceding characters have higher priority.
  keys = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
  -- Optional, the path of bookmarks
  path = (ya.target_family() == "windows" and os.getenv("APPDATA") .. "\\yazi\\config\\bookmark") or
        (os.getenv("HOME") .. "/.config/yazi/bookmark"),
}

require("yatline"):setup({
	section_separator = { open = "", close = "" },
	part_separator = { open = "", close = "" },
	inverse_separator = { open = "", close = "" },

	style_a = {
		fg = "black",
		bg_mode = {
			normal = "#a89984",
			select = "#d79921",
			un_set = "#d65d0e"
		}
	},
	style_b = { bg = "#665c54", fg = "#ebdbb2" },
	style_c = { bg = "#3c3836", fg = "#a89984" },

	permissions_t_fg = "green",
	permissions_r_fg = "yellow",
	permissions_w_fg = "red",
	permissions_x_fg = "cyan",
	permissions_s_fg = "darkgray",

	tab_width = 20,
	tab_use_inverse = false,

	selected = { icon = "󰻭", fg = "yellow" },
	copied = { icon = "", fg = "green" },
	cut = { icon = "", fg = "red" },

	total = { icon = "󰮍", fg = "yellow" },
	succ = { icon = "", fg = "green" },
	fail = { icon = "", fg = "red" },
	found = { icon = "󰮕", fg = "blue" },
	processed = { icon = "󰐍", fg = "green" },

	show_background = false,

	display_header_line = true,
	display_status_line = true,

	header_line = {
		left = {
			section_a = {
				{type = "string", custom = false, name = "tab_num_files"},
				{type = "string", custom = false, name = "tab_path"},
			},
			section_b = {
				{type = "string", custom = false, name = "hovered_file_extension", params = {true}},
				{type = "string", custom = false, name = "hovered_name"},
				{type = "string", custom = false, name = "hovered_size"},
				-- {type = "string", custom = false, name = "hovered_path"},
			},
			section_c = {
				{type = "coloreds", custom = false, name = "permissions"},
			}
		},
		right = {
			section_a = {
				{type = "line", custom = false, name = "tabs", params = {"right"}},
			},
			section_b = {
			},
			section_c = {
			}
		}
	},
	
	status_line = {
		left = {
			section_a = {
				{type = "string", custom = false, name = "tab_mode"},
			},
			section_b = {
				{type = "coloreds", custom = false, name = "count"},
			},
			section_c = {
				{type = "coloreds", custom = false, name = "task_workload"},
			}
		},
		right = {
			section_a = {
				{type = "coloreds", custom = true, name = {{"  just have a little faith ", "yellow"} }},
			},
			section_b = {
				{type = "string", custom = false, name = "cursor_position"},
			},
			section_c = {
				{type = "string", custom = false, name = "cursor_percentage"},
			}
		}
	},
})

-- ~/.config/yazi/init.lua
function Linemode:size_and_mtime()
	local time = math.floor(self._file.cha.mtime or 0)
	if time == 0 then
		time = ""
	elseif os.date("%Y", time) == os.date("%Y") then
		time = os.date("%b-%d-%H:%M", time)
	else
		time = os.date("%Y %b %d ", time)
	end

	local size = self._file:size()
	return string.format("%s %s", size and ya.readable_size(size) or "-", time)
end


require("searchjump"):setup({
	unmatch_fg = "#b2a496",
    match_str_fg = "#000000",
    match_str_bg = "#73AC3A",
    first_match_str_fg = "#000000",
    first_match_str_bg = "#73AC3A",
    lable_fg = "#EADFC8",
    lable_bg = "#BA603D",
    only_current = false,
    show_search_in_statusbar = false,
    auto_exit_when_unmatch = false,
    enable_capital_lable = true,
	search_patterns = ({"hell[dk]d","%d+.1080p","第%d+集","第%d+话","%.E%d+","S%d+E%d+",})
})