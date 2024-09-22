#include "push_swap.h"

bool    is_alpha_string(char **argv)
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
			if (ft_atoi_list(argv, argv[i]) == ft_atoi_list(argv, argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
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