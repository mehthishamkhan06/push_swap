#include "push_swap.h"

bool	is_alpha_string(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isalpha(argv[i][j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

int	is_duplicate_str(char **argv, char *args)
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
			if (ft_atoi_list(argv, argv[i], args)
				== ft_atoi_list(argv, argv[j], args))
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
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void	ft_error_continues(char *args)
{
	int		i;
	char	**tab;

	i = 0;
	if (args[0] == 0)
	{
		free(args);
		exit(0);
	}
	tab = ft_split(args, ' ');
	if (invalid_input(tab) || is_alpha_string(tab)
		|| is_duplicate_str(tab, args))
	{
		while (tab[i])
			free(tab[i++]);
		free(tab);
		free(args);
		write(2, "Error\n", 6);
		exit(1);
	}
	while (tab[i])
		free(tab[i++]);
	free(tab);
}
