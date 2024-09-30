#include "push_swap.h"


int start_sorting(t_node **a, t_node **b, t_node **temp_a)
{
	if (already_sorted(*a))
	{
		ft_free(a);
		return (0);
	}
	// printf("args: %d", (*a)->data);
	list_sorter(a, b, temp_a);
	ft_free(a);
	ft_free(temp_a);
	return (1);
}
void	push_swap(int argc, char *args)
{
	t_node	*a;
	t_node	*b;
	t_node	*temp_a;

	a = NULL;
	b = NULL;
	temp_a = NULL;
	if (argc > 1)
	{
		initialize_stack(&a, args);
		free(args);
		// printf("args: %d\n", a-> next -> next -> next -> data);
		start_sorting(&a, &b, &temp_a);
	}
}

// int main(int argc, char *argv[])
// {
// 	int		i;
// 	char	*args;
// 	int		check_free;

// 	i = 1;
// 	args = "";
// 	check_free = 0;
// 	if (argc > 1)
// 	{
// 		if (valid_argument_check(argv) == 0)
// 			return(1);
// 		i = 1;
// 		while (argv[i])
// 		{
// 			args = ft_strjoin(args, " ", check_free);
// 			check_free = 1;
// 			args = ft_strjoin(args, argv[i], check_free);
// 			i++;
// 		}
// 		arg_error(args);
// 		push_swap(argc, args);
// 		// printf("%s\n", args);
// 	}
// 	return(0);
// }