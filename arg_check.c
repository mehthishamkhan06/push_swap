#include "push_swap.h"

/*
checks for valid arguments, if arguments end with spaces or tabs,
it will return false, inciting error.
*/




void arg_error(char *args)
{
        int i;
    	
		i = 0;
		// printf("%s\n", args);
		while (args[i] == ' ')
		{
			i++;
			if (!args[i])
			{
					write(2, "Error\n", 6);
					free(args);
					exit(0);
			}
		}
		ft_error_continues(args);
}