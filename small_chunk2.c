#include "push_swap.h"

void	sort_four_common(t_node **a, t_node	**b)
{
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_four_continuation(t_node **a, t_node **b, int pos)
{
	if (pos == 2)
	{
		rra(a);
		rra(a);
		sort_four_common(a, b);
	}
	else if (pos == 3)
	{
		rra(a);
		if (already_sorted(*a))
			return ;
		sort_four_common(a, b);
	}
}

void	sort_four(t_node **a, t_node **b)
{
	int	min;
	int	pos;

	min = get_minimum(*a);
	pos = get_pos(*a, min);
	if (pos == 0)
		sort_four_common(a, b);
	else if (pos == 1)
	{
		sa(a);
		if (already_sorted(*a))
			return ;
		sort_four_common(a, b);
	}
	sort_four_continuation(a, b, pos);
}

void	sort_more_continuation(t_node **a, t_node **b, int i)
{
	while (i)
	{
		pa(a, b);
		i--;
	}
}

void	sort_more(t_node **a, t_node **b)
{
	int	min;
	int	pos;
	int	i[2];

	i[1] = list_size(*a);
	i[0] = 0;
	while (i[1] > 4)
	{
		min = get_minimum(*a);
		pos = get_pos(*a, min);
		if ((*a)-> data != min)
		{
			if (pos <= i[1] / 2)
				while ((*a)-> data != min)
					ra(a);
			else
				while ((*a)-> data != min)
					rra(a);
		}
		pb(a, b);
		i[0]++;
		i[1]--;
	}
	sort_four(a, b);
	sort_more_continuation(a, b, i[0]);
}
