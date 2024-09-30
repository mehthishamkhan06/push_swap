// #include "push_swap.h"



// void	sort_four_common(t_node **a, t_node	**b)
// {
// 	pb(a, b);
// 	sort_three(a);
// 	pa(a, b);
// }

// void sort_four_continuation(t_node **a, t_node **b, int pos)
// {
// 	if(pos == 2)
// 	{
// 		rra(a);
// 		rra(a);
// 		sort_four_common(a, b);
// 	}
// 	else if(pos == 3)
// 	{
// 		rra(a);
// 		if (already_sorted(*a))
// 			return ;
// 		sort_four_common(a, b);
// 	}
// }
// void    sort_four(t_node **a, t_node **b)
// {
// 	int	min;
// 	int	pos;

// 	min = get_minimum(*a);
// 	pos = get_pos(*a, min);
// 	// printf("a next = %d\n", (*a) -> next -> next -> next -> data);
// 	// printf("pos = %d\n", pos);
// 	if (pos == 0)
// 		sort_four_common(a, b);
// 	else if (pos == 1)
// 	{
// 		sa(a);
// 		if (already_sorted(*a))
// 			return ;
// 		sort_four_common(a, b);
// 	}
// 	// printf("TOP : %d\n", (*a)->data);
// 	sort_four_continuation(a, b, pos);
// }
