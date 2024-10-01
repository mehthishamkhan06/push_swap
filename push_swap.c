#include "push_swap.h"


int start_sorting(t_node **a, t_node **b, t_node **temp_a)
{
	if (already_sorted(*a))
		return(ft_free(a), 0);
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
		start_sorting(&a, &b, &temp_a);
	}
}