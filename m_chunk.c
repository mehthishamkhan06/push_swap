#include "push_swap.h"

void	push_chunk(t_node **a, t_node **b, int min, int max)
{
	int	size;

	while (1)
	{
		if ((*a)->data >= min && (*a)->data <= max)
		{
			pb(a, b);
			if ((*b)->data <= (min + max) / 2)
				rb(b);
		}
		else
			ra(a);
		if (*b)
		{
			size = list_size(*b);
			if (size == max + 1)
				break ;
		}
	}
}
void	sort_pushed_chunk(t_node **a, t_node **b)
{
	int	size;
	int	max;
	int	pos;
	int	mid;

	while (1)
	{
		max = get_maximum(*b);
		pos = get_pos(*b, max);
		size = list_size(*b);
		mid = size / 2;
		if ((*b)->data == max)
			pa(a, b);
		else if (pos <= mid)
			rb(b);
		else
			rrb(b);
		if (size == 2)
			break ;
	}
	if ((*b)->data < (*b)->next->data)
		sb(b);
	pa(a, b);
	pa(a, b);
}

/**
 * @brief Sort the medium size of chunk. From 35 to 134
 * 
 * @param a 
 * @param b 
 */

void	sort_m_chunk(t_node **a, t_node **b)
{
	int	size;
	int	min;
	int	max;
	int	tmp;
	int	i;

	i = 0;
	size = list_size(*a);
	min = size / 4;
	min--;
	max = min;
	// printf("max : %d", max);
	// printf("max : %d", size);
	while (max < size)
	{
		push_chunk(a, b, i, max);
		i = max + 1;
		tmp = max;
		max += min;
	}
	if (size - tmp == 4)
		sort_four(a, b);
	else
		sort_more(a, b);
	sort_pushed_chunk(a, b);
}

void	sort_l_chunk(t_node **a, t_node **b)
{
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	size = list_size(*a);
	min = size / 9;
	min--;
	max = min;
	while (max < size - 11)
	{
		push_chunk(a, b, i - 1, max + 4);
		i = max + 2;
		max += min;
	}
	sort_more(a, b);
	sort_pushed_chunk(a, b);
}
