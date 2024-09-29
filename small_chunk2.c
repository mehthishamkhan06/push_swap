#include "push_swap.h"



void	sort_four_common(t_node **a, t_node	**b)
{
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void sort_four_continuation(t_node **a, t_node **b, int pos)
{
	if(pos == 3)
	{
		rra(a);
		rra(a);
		if (already_sorted(*a))
			return ;
		sort_four_common(a, b);
	}
	else if(pos == 4)
	{
		ra(a);
		if (already_sorted(*a))
			return ;
		sort_four_common(a, b);
	}
}
void    sort_four(t_node **a, t_node **b)
{
	int	min;
	int	pos;

	min = get_minimum(*a);
	pos = get_pos(*a, min);
	if (pos == 1)
		sort_four_common(a, b);
	else if (pos == 2)
	{
		sa(a);
		if (already_sorted(*a))
			return ;
		sort_four_common(a, b);
	}
	sort_four_continuation(a, b, pos);
}
