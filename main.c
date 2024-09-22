#include "push_swap.h"

int main(int argc, char *argv[])
{
	int	i;
	char *args;
	int flag;

	i = 1;
	args = NULL;
	flag = 0;
	if (argc > 3)
	{
		if (!valid_argument_check(argv))
			return (1);
		i = 1;
		while(argv[i])
		{
			args = ft_strjoin(args, " ", flag);
			flag = 1;
			args = ft_strjoin(args, argv[i], flag);
			i++;
		}
		ft_error(args);
		push_swap(argc, args);
	}
	return (0);
}