#include "push_swap.h"


void	list_sorter(t_node **a, t_node **b, t_node **tempa)
{
	int	len;

	(void)b;
	len = list_size(*a);
	initialize_alias(a, tempa);
	if (len <= 34)
		sort_s_chunk(tempa, b, len);
	else if (len > 34 && len <= 134)
		sort_m_chunk(tempa, b);
	else if (len > 134 && len <= 500)
		sort_l_chunk(tempa, b);
	else if (len > 500)
		sort_Xl_chunk(tempa, b);
}