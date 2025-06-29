rofi usage:
	rofi [-options ...]

Command line only options:
	-config [file]                         Load an alternative configuration.
	-no-config                             Do not load configuration, use default values.
	-v,-version                            Print the version number and exit.
	-dmenu                                 Start in dmenu mode.
	-display [string]                      X server to contact.
		${DISPLAY}
	-h,-help                               This help message.
	-e [string]                            Show a dialog displaying the passed message and exit.
	-markup                                Enable pango markup where possible.
	-normal-window                         Behave as a normal window. (experimental)
	-show [mode]                           Show the mode 'mode' and exit. The mode has to be enabled.
	-no-lazy-grab                          Disable lazy grab that, when fail to grab keyboard, does not block but retry later.
	-no-plugins                            Disable loading of external plugins.
	-plugin-path                           Directory used to search for rofi plugins. *DEPRECATED*
	-dump-config                           Dump the current configuration in rasi format and exit.
	-dump-theme                            Dump the current theme in rasi format and exit.
DMENU command line options:
	-mesg [string]                         Print a small user message under the prompt (uses pango markup)
	-p [string]                            Prompt to display left of entry field
	-selected-row [integer]                Select row
	-format [string]                       Output format string
		s
	-u [list]                              List of row indexes to mark urgent
	-a [list]                              List of row indexes to mark active
	-l [integer]                           Number of rows to display
	-window-title [string]                 Set the dmenu window title
	-i                                     Set filter to be case insensitive
	-only-match                            Force selection to be given entry, disallow no match
	-no-custom                             Don't accept custom entry, allow no match
	-select [string]                       Select the first row that matches
	-password                              Do not show what the user inputs. Show '*' instead.
	-markup-rows                           Allow and render pango markup as input data.
	-sep [char]                            Element separator.
		'\n'
	-input [filename]                      Read input from file instead from standard input.
	-sync                                  Force dmenu to first read all input data, then show dialog.
	-w windowid                            Position over window with X11 windowid.
	-keep-right                            Set ellipsize to end.
	-display-columns                       Only show the selected columns
	-display-column-separator 	            Separator to use to split columns (regex)
	-ballot-selected-str 	                 When multi-select is enabled prefix this string when element is selected.
	-ballot-unselected-str 	               When multi-select is enabled prefix this string when element is not selected.
Global options:
	-modes [string]                         Enable modes
		window,drun,run,ssh,filebrowser,combi (Rasi File)
	-font [string]                          Font to use
		mono 12 (Default)
	-location [number]                      Location on screen
		0 (Default)
	-yoffset [number]                       Y-offset relative to location. *DEPRECATED* see rofi-theme manpage for new option
		0 (Default)
	-xoffset [number]                       X-offset relative to location. *DEPRECATED* see rofi-theme manpage for new option
		0 (Default)
	-[no-]fixed-num-lines                   Always show number of lines
		True (Default)
	-[no-]show-icons                        Whether to load and show icons
		True (Rasi File)
	-terminal [string]                      Terminal to use
		rofi-sensible-terminal (Default)
	-ssh-client [string]                    Ssh client to use
		ssh (Default)
	-ssh-command [string]                   Ssh command to execute
		{terminal} -e {ssh-client} {host} [-p {port}] (Default)
	-run-command [string]                   Run command to execute
		{cmd} (Default)
	-run-list-command [string]              Command to get extra run targets
		 (Default)
	-run-shell-command [string]             Run command to execute that runs in shell
		{terminal} -e {cmd} (Default)
	-window-command [string]                Command to executed when -kb-accept-alt binding is hit on selected window 
		wmctrl -i -R {window} (Default)
	-window-match-fields [string]           Window fields to match in window mode
		all (Default)
	-icon-theme [string]                    Theme to use to look for icons
		(unset) (Default)
	-drun-match-fields [string]             Desktop entry fields to match in drun
		name,generic,exec,categories,keywords (Default)
	-drun-categories [string]               Only show Desktop entry from these categories
		(unset) (Default)
	-[no-]drun-show-actions                 Desktop entry show actions.
		False (Default)
	-drun-display-format [string]           DRUN format string. (Supports: generic,name,comment,exec,categories)
		{name} [<span weight='light' size='small'><i>({generic})</i></span>] (Default)
	-drun-url-launcher [string]             Command to open a Desktop Entry that is a Link.
		xdg-open (Default)
	-[no-]disable-history                   Disable history in run/ssh
		False (Default)
	-ignored-prefixes [string]              Programs ignored for history
		 (Default)
	-[no-]sort                              Use sorting
		False (Default)
	-sorting-method [string]                Choose the strategy used for sorting: normal (levenshtein) or fzf.
		normal (Default)
	-[no-]case-sensitive                    Set case-sensitivity
		False (Default)
	-[no-]cycle                             Cycle through the results list
		True (Default)
	-[no-]sidebar-mode                      Enable sidebar-mode
		False (Default)
	-[no-]hover-select                      Enable hover-select
		False (Default)
	-eh [number]                            Row height (in chars)
		1 (Default)
	-[no-]auto-select                       Enable auto select mode
		False (Default)
	-[no-]parse-hosts                       Parse hosts file for ssh mode
		False (Default)
	-[no-]parse-known-hosts                 Parse known_hosts file for ssh mode
		True (Default)
	-combi-modes [string]                   Set the modi to combine in combi mode
		window,run (Default)
	-matching [string]                      Set the matching algorithm. (normal, regex, glob, fuzzy, prefix)
		normal (Default)
	-[no-]tokenize                          Tokenize input string
		True (Default)
	-m [string]                             Monitor id to show on
		-5 (Default)
	-filter [string]                        Pre-set filter
		(unset) (Default)
	-dpi [number]                           DPI
		-1 (Default)
	-threads [number]                       Threads to use for string matching
		0 (Default)
	-scroll-method [number]                 Scrolling method. (0: Page, 1: Centered)
		0 (Default)
	-window-format [string]                 Window Format. w (desktop name), t (title), n (name), r (role), c (class)
		{w}    {c}   {t} (Default)
	-[no-]click-to-exit                     Click outside the window to exit
		True (Default)
	-max-history-size [number]              Max history size (WARNING: can cause slowdowns when set too high).
		25 (Default)
	-[no-]combi-hide-mode-prefix            Hide the prefix mode prefix on the combi view.**deprecated** use combi-display-format
		False (Default)
	-combi-display-format [string]          Combi format string. (Supports: mode, text)
		{mode} {text} (Default)
	-matching-negate-char [character]          Set the character used to negate the matching. ('\0' to disable)
		- (Default)
	-cache-dir [string]                     Directory where history and temporary files are stored.
		(unset) (Default)
	-[no-]window-thumbnail                  Show window thumbnail (if available) as icon in window switcher.
		False (Default)
	-[no-]drun-use-desktop-cache            DRUN: build and use a cache with desktop file content.
		False (Default)
	-[no-]drun-reload-desktop-cache         DRUN: If enabled, reload the cache with desktop file content.
		False (Default)
	-[no-]normalize-match                   Normalize string when matching (disables match highlighting).
		False (Default)
	-[no-]steal-focus                       Steal focus on launch and restore to window that had it on rofi start on close .
		False (Default)
	-application-fallback-icon [string]     Fallback icon to use when the application icon is not found in run/drun.
		(unset) (Default)
	-refilter-timeout-limit [number]        When there are more entries then this limit, only refilter after a timeout.
		8192 (Default)
	-[no-]xserver-i300-workaround           Workaround for XServer issue #300 (issue #611 for rofi.)
		False (Default)
	-pid [string]                           Pidfile location
		/run/user/1000/rofi.pid (Default)
	-display-window [string]                The display name of this browser
		(unset) (Default)
	-display-windowcd [string]              The display name of this browser
		(unset) (Default)
	-display-run [string]                   The display name of this browser
		(unset) (Default)
	-display-ssh [string]                   The display name of this browser
		(unset) (Default)
	-display-drun [string]                  The display name of this browser
		(unset) (Default)
	-display-combi [string]                 The display name of this browser
		(unset) (Default)
	-display-keys [string]                  The display name of this browser
		(unset) (Default)
	-display-filebrowser [string]           The display name of this browser
		(unset) (Default)
	-kb-primary-paste [string]              Paste primary selection
		Control+V,Shift+Insert (Default)
	-kb-secondary-paste [string]            Paste clipboard
		Control+v,Insert (Default)
	-kb-clear-line [string]                 Clear input line
		Control+w (Default)
	-kb-move-front [string]                 Beginning of line
		Control+a (Default)
	-kb-move-end [string]                   End of line
		Control+e (Default)
	-kb-move-word-back [string]             Move back one word
		Alt+b,Control+Left (Default)
	-kb-move-word-forward [string]          Move forward one word
		Alt+f,Control+Right (Default)
	-kb-move-char-back [string]             Move back one char
		Left,Control+b (Default)
	-kb-move-char-forward [string]          Move forward one char
		Right,Control+f (Default)
	-kb-remove-word-back [string]           Delete previous word
		Control+Alt+h,Control+BackSpace (Default)
	-kb-remove-word-forward [string]        Delete next word
		Control+Alt+d (Default)
	-kb-remove-char-forward [string]        Delete next char
		Delete,Control+d (Default)
	-kb-remove-char-back [string]           Delete previous char
		BackSpace,Shift+BackSpace,Control+h (Default)
	-kb-remove-to-eol [string]              Delete till the end of line
		Control+k (Default)
	-kb-remove-to-sol [string]              Delete till the start of line
		Control+u (Default)
	-kb-accept-entry [string]               Accept entry
		Control+j,Control+m,Return,KP_Enter (Default)
	-kb-accept-custom [string]              Use entered text as command (in ssh/run modes)
		Control+Return (Default)
	-kb-accept-custom-alt [string]          Use entered text as command (in ssh/run modes)
		Control+Shift+Return (Default)
	-kb-accept-alt [string]                 Use alternate accept command.
		Shift+Return (Default)
	-kb-delete-entry [string]               Delete entry from history
		Shift+Delete (Default)
	-kb-mode-next [string]                  Switch to the next mode.
		Shift+Right,Control+Tab (Default)
	-kb-mode-previous [string]              Switch to the previous mode.
		Shift+Left,Control+ISO_Left_Tab (Default)
	-kb-mode-complete [string]              Start completion for mode.
		Control+l (Default)
	-kb-row-left [string]                   Go to the previous column
		Control+Page_Up (Default)
	-kb-row-right [string]                  Go to the next column
		Control+Page_Down (Default)
	-kb-row-up [string]                     Select previous entry
		Up,Control+p (Default)
	-kb-row-down [string]                   Select next entry
		Down,Control+n (Default)
	-kb-row-tab [string]                    Go to next row, if one left, accept it, if no left next mode.
		 (Default)
	-kb-element-next [string]               Go to next element (in logical order).
		Tab (Default)
	-kb-element-prev [string]               Go to next previous element (in logical order).
		ISO_Left_Tab (Default)
	-kb-page-prev [string]                  Go to the previous page
		Page_Up (Default)
	-kb-page-next [string]                  Go to the next page
		Page_Down (Default)
	-kb-row-first [string]                  Go to the first entry
		Home,KP_Home (Default)
	-kb-row-last [string]                   Go to the last entry
		End,KP_End (Default)
	-kb-row-select [string]                 Set selected item as input text
		Control+space (Default)
	-kb-screenshot [string]                 Take a screenshot of the rofi window
		Alt+S (Default)
	-kb-ellipsize [string]                  Toggle between ellipsize modes for displayed data
		Alt+period (Default)
	-kb-toggle-case-sensitivity [string]    Toggle case sensitivity
		grave,dead_grave (Default)
	-kb-toggle-sort [string]                Toggle sort
		Alt+grave (Default)
	-kb-cancel [string]                     Quit rofi
		Escape,Control+g,Control+bracketleft (Default)
	-kb-custom-1 [string]                   Custom keybinding 1
		Alt+1 (Default)
	-kb-custom-2 [string]                   Custom keybinding 2
		Alt+2 (Default)
	-kb-custom-3 [string]                   Custom keybinding 3
		Alt+3 (Default)
	-kb-custom-4 [string]                   Custom keybinding 4
		Alt+4 (Default)
	-kb-custom-5 [string]                   Custom Keybinding 5
		Alt+5 (Default)
	-kb-custom-6 [string]                   Custom keybinding 6
		Alt+6 (Default)
	-kb-custom-7 [string]                   Custom Keybinding 7
		Alt+7 (Default)
	-kb-custom-8 [string]                   Custom keybinding 8
		Alt+8 (Default)
	-kb-custom-9 [string]                   Custom keybinding 9
		Alt+9 (Default)
	-kb-custom-10 [string]                  Custom keybinding 10
		Alt+0 (Default)
	-kb-custom-11 [string]                  Custom keybinding 11
		Alt+exclam (Default)
	-kb-custom-12 [string]                  Custom keybinding 12
		Alt+at (Default)
	-kb-custom-13 [string]                  Custom keybinding 13
		Alt+numbersign (Default)
	-kb-custom-14 [string]                  Custom keybinding 14
		Alt+dollar (Default)
	-kb-custom-15 [string]                  Custom keybinding 15
		Alt+percent (Default)
	-kb-custom-16 [string]                  Custom keybinding 16
		Alt+dead_circumflex (Default)
	-kb-custom-17 [string]                  Custom keybinding 17
		Alt+ampersand (Default)
	-kb-custom-18 [string]                  Custom keybinding 18
		Alt+asterisk (Default)
	-kb-custom-19 [string]                  Custom Keybinding 19
		Alt+parenleft (Default)
	-kb-select-1 [string]                   Select row 1
		Super+1 (Default)
	-kb-select-2 [string]                   Select row 2
		Super+2 (Default)
	-kb-select-3 [string]                   Select row 3
		Super+3 (Default)
	-kb-select-4 [string]                   Select row 4
		Super+4 (Default)
	-kb-select-5 [string]                   Select row 5
		Super+5 (Default)
	-kb-select-6 [string]                   Select row 6
		Super+6 (Default)
	-kb-select-7 [string]                   Select row 7
		Super+7 (Default)
	-kb-select-8 [string]                   Select row 8
		Super+8 (Default)
	-kb-select-9 [string]                   Select row 9
		Super+9 (Default)
	-kb-select-10 [string]                  Select row 10
		Super+0 (Default)
	-ml-row-left [string]                   Go to the previous column
		ScrollLeft (Default)
	-ml-row-right [string]                  Go to the next column
		ScrollRight (Default)
	-ml-row-up [string]                     Select previous entry
		ScrollUp (Default)
	-ml-row-down [string]                   Select next entry
		ScrollDown (Default)
	-me-select-entry [string]               Select hovered row
		MousePrimary (Default)
	-me-accept-entry [string]               Accept hovered row
		MouseDPrimary (Default)
	-me-accept-custom [string]              Accept hovered row with custom action
		Control+MouseDPrimary (Default)

Monitor layout:
              ID: 0
            name: HDMI-A-4
        position: 0,0
            size: 1920,1080
            size: 520mm,300mm  dpi: 94,91


Detected modes:
        • +window
        • windowcd
        • +run
        • +ssh
        • +drun
        • +combi
        • keys
        • +filebrowser

Detected user scripts:

Compile time options:
	• Pango   version 1.54.0
	• window  enabled
	• drun    enabled
	• gcov    disabled
	• asan    disabled

For more information see: man rofi
                 Version: 1.7.5
              Bugreports: https://github.com/davatorium/rofi/
                 Support: https://reddit.com/r/qtools/
                          #rofi @ libera.chat
      Configuration file: /home/alt/.config/rofi/config.rasi

Parsed files:
	• /home/alt/.config/rofi/config.rasi

