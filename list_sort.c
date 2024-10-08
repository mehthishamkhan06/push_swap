#include "push_swap.h"

void	initialize_stack(t_node **a, char *args)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 1;
	array = ft_split(args, ' ');
	create_node(&(*a), ft_atoi_list(array, array[0], args));
	while (array[j])
	{
		append_at_end(a, ft_atoi_list(array, array[j], args));
		j++;
	}
		// printf("args: %d\n", (*a)->data);
	while (array[i])
		free(array[i++]);
	free(array);
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
