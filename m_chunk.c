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
}