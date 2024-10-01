#include "push_swap.h"

/*
checks for valid arguments, if arguments end with spaces or tabs,
it will return false, inciting error.
*/

int	valid_argument_check(char *argv[])
{
        int i;
		int j;
    	
		i = 1;
        while (argv[i])
		{
			j = 0;
			if (!argv[i][j])
			{
				write(2, "Error\n", 6);
				return(0);
			}
			while (argv[i][j] && argv[i][j] == ' ')
			{
				j++;
				if (!argv[i][j])
				{
						write(1, "Error\n", 6);
						return (0);
				}
			}
			i++;
		}
		return (1);
}

int main(int argc, char *argv[])
{
	int		i;
	char	*args;
	int		check_free;

	args = "";
	check_free = 0;

	if (argc > 1)
	{
		if (valid_argument_check(argv) == 0)
			exit(1);
		i = 1;
		while (argv[i])
		{
			args = ft_strjoin(args, " ", check_free);
			check_free = 1;
			args = ft_strjoin(args, argv[i], check_free);
			i++;
		}
		arg_error(args);
		// printf("%s\n", args);
		push_swap(argc, args);
	}
	return(0);
}