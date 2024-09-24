#include "push_swap.h"


void	list_sorter(t_node **a, t_node **b, t_node **tempa)
{
	int	len;

	(void)b;
	len = list_size(*a);
	initialize_alias(a, tempa);
	if (len <= 34)
		sort_small_chunk(tempa, b, len);
	else if (len > 34)
	{
		// sort_large_chunk(tempa, b, len);
	}
}