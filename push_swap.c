#include "push_swap.h"


int start_sorting(t_node **a, t_node **b, t_node **temp)
{
	if (already_sorted(*a))
	{
		ft_free(a);
		return (0);
	}
	list_sorter(a, b, temp);
	ft_free(a);
	ft_free(temp);
	return (0);
}
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