#include "push_swap.h"


void   push_chunk(t_node **a, t_node **b, int i, int max)
{
	int len;
	len = 0;
	while(len < max + 1)
	{
		if ((*a) -> data >= i && (*a) -> data <= max)
		{
			pb(a, b);
			len++;
			if ((*b) -> data <= (i + max / 2))
				rb(b);
		}
		else
			ra(a);
	}	
}

void	sort_pushed_chunk(t_node **a, t_node **b)
{
	int len;
	int max;
	int pos;
	int mid;

	while((len = list_size(*b)) > 2)
	{
		max = get_maximum(*b);
		pos = get_pos(*b, max);
		mid = len / 2;
		if ((*b) -> data == max)
			pa(a, b);
		else if (pos <= mid)
			rb(b);
		else
			rrb(b);
	}
	if (len == 2)
		if ((*b) -> data < (*b) -> next -> data)
				sb(b);
	pa(a,b);
	pa(a,b);
}
void    sort_m_chunk(t_node **a, t_node **b)
{
	int	len;
	int	min;
	int	max;
	int	temp;
	int	i;

	len = list_size(*a);
	i = 0;
	min = len / 4;
	max = min;
	while (max < len)
	{
		push_chunk(a, b, i, max);
		i = max + 1;
		temp = max;
		max += min;
	}
	if (len - temp == 4)
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
