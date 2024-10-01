#include "push_swap.h"

void push_chunk(t_node **a, t_node **b, int i, int max)
{
    int pushed_count;
    int size;
    int rotations;
    int mid;
    
	size = list_size(*a);
	rotations = 0;
    pushed_count = 0;
    mid = (i + max) / 2;
    while (pushed_count < (max + 1) && rotations < size)
    {
        if ((*a)->data >= i && (*a)->data <= max)
        {
            pb(a, b);
            pushed_count++;
            if ((*b)->data <= mid)
                rb(b);
        }
        else
            ra(a);
        rotations++;
    }
}

void	sort_pushed_chunk(t_node **a, t_node **b)
{
	int size;
	int max;
	int pos;
	int mid;

	while (list_size(*b) > 2)
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
	}
	if ((*b)->data < (*b)->next->data)
		sb(b);
	pa(a, b);
	pa(a, b);
}

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
