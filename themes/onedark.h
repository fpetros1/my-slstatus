static const struct arg args[] = {
	/* function        format                    argument */
	{ run_command,     "^c#56b6c2^ %2s ",        "echo "            },
	{ cpu_perc,	   "^c#ABB3BF^ %s%% |",      NULL                },
	
	{ run_command,     "^c#98c379^ %2s ",        "echo "            },
	{ ram_perc,        "^c#ABB3BF^ %s%% |",      NULL                },
	
	{ run_command,     "^c#C678DD^ %2s ",       "echo "             },
	{ disk_perc,       "^c#ABB3BF^  %s%% |",    "/"                  },
	
	{ run_command,     "^c#98C379^ %s ",        "echo ﮮ" },
	{ run_command,     "^c#ABB3BF^ %2s |",      "pacman -Qu | wc -l" },
	

	{ run_command,     "^c#56B6C2^ %s ",        "echo "             },
	{ run_command,     "^c#ABB3BF^ %s |",       ""                   },
        
	{ run_command,     "^c#61AFEF^ %2s ",       "echo "             },
	{ datetime,        "^c#ABB3BF^ %s",         "%a %b %d - %H:%M"   },
};

