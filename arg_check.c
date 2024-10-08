#include "push_swap.h"

/*
checks for valid arguments, if arguments end with spaces or tabs,
it will return false, inciting error.
*/

int	valid_argument_check(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (!argv[i][j])
		{
			write (2, "Error\n", 6);
			return (0);
		}
		while (argv[i][j] && argv[i][j] == ' ')
		{
			j++;
			if (!argv[i][j])
			{
				write (1, "Error\n", 6);
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*
checks for valid arguments, if arguments end with spaces or tabs,
it will return false, inciting error.
*/

void	arg_error(char *args)
{
	int	i;

	i = 0;
	while (args[i] == ' ')
	{
		i++;
		if (!args[i])
		{
			write (2, "Error\n", 6);
			free (args);
			exit (0);
		}
	}
	ft_error_continues(args);
}
