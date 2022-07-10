static const struct arg args[] = {
	/* function        format                    argument */
	{ run_command,     "^c#ffb86c^ %2s ",        "echo "            },
	{ cpu_perc,	   "^c#f8f8f2^ %s%% |",      NULL                 },
	
	{ run_command,     "^c#f1fa8c^ %2s ",        "echo "             },
	{ ram_perc,        "^c#f8f8f2^ %s%% |",      NULL                 },
	
	{ run_command,     "^c#ff5555^ %2s ",        "echo "             },
	{ disk_perc,       "^c#f8f8f2^  %s%% |",     "/"                  },
	
	{ run_command,     "^c#bd93f9^ %s ",         "echo ﮮ"             },
	{ run_command,     "^c#f8f8f2^ %2s |",       "pacman -Qu | wc -l" },

	{ run_command,     "^c#8be9fd^ %s ",         "echo  "            },
	{ run_command,     "^c#f8f8f2^ %s |",        ""                   }, 
        
	{ run_command,     "^c#f1fa8c^ %2s ",        "echo  "            },
	{ datetime,        "^c#f8f8f2^ %s",          "%a %b %d - %H:%M"   },
};

