#include "push_swap.h"


int	valid_argument_check(char *argv[]);
void arg_error(char *args);
char	*ft_strjoin(char *s1, char *s2, int check_free);
// static	void	push_swap(int argc, char *args)
// {
// 	t_node	*a;
// 	t_node	*b;
// 	t_node	*temp;

// 	a = NULL;
// 	b = NULL;
// 	temp = NULL;
// 	if (argc > 1)
// 	{
// 		initialize_stack(&a, args);
// 		free(args);
// 		start_sorting(&a, &b, &temp);
// 	}
// }
int main(int argc, char *argv[])
{
	int		i;
	char	*args;
	int		check_free;

	i = 1;
	args = "";
	check_free = 0;
	if (argc > 1)
	{
		if (valid_argument_check(argv) == 0)
			return(1);
		while (argv[i])
		{
			args = ft_strjoin(args, " ", check_free);
			check_free = 1;
			args = ft_strjoin(args, " ", check_free);
			i++;
		}
		arg_error(args);
		// push_swap(argc, args);
	}
	return(0);
}