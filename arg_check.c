#include "push_swap.h"

bool	valid_argument_check(char *argv[])
{
        int i;
		int j;
    	
		i = 1;
		j = 0;
        while (argv[i])
		{
			while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
			{
				j++;
				if (!argv[i][j])
				{
						write(1, "Error\n", 6);
						return (false);
				}
			}
			i++;
		}
		return (true);
}

bool	invalid_input(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (!isdigit(argv[i][j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void arg_error(char *argv)
{
        int i;
    	
		i = 1;
        while (argv[i])
		{
			while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
			{
				j++;
				if (!argv[i][j])
				{
						write(1, "Error\n", 6);
						free(argv);
						exit(0);
				}
			}
			i++;
		}
		return (true);
}

bool	is_alpha_string(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while(argv[i][j])
		{
			if (isalpha(argv[i][j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

int	is_duplicate_str(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi_modified(argv, argv[i]) == ft_atoi_modified(argv, argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
