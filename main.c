#include "push_swap.h"

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
			return(1);
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