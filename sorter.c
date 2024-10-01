#include "push_swap.h"


void	sort_two(t_node **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

void	sort_s_chunk(t_node **a, t_node **b, int len)
{
	if (len == 2)
		sort_two(a);
	if (len == 3)
		sort_three(a);
	if (len == 4)
		sort_four(a, b);
	if (len > 4 && len < 35)
		sort_more(a, b);
}

void	list_sorter(t_node **a, t_node **b, t_node **tempa)
{
	int	len;

	len = list_size(*a);
	initialize_alias(a, tempa);
	if (len <= 34)
		sort_s_chunk(tempa, b, len);
	if (len > 34 && len <= 134)
		sort_m_chunk(tempa, b);
	if (len > 134 && len <= 500)
		sort_l_chunk(tempa, b);
	if (len > 500)
		sort_l_chunk(tempa, b);
}