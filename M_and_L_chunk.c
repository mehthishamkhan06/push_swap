/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M_and_L_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:35:30 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:35:37 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunk(t_node **a, t_node **b, int min, int max)
{
	int	length;

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
			length = list_size(*b);
			if (length > max)
				break ;
		}
	}
}

void	sort_pushed_chunk(t_node **a, t_node **b)
{
	int	size;
	int	max;
	int	pos;
	int	middle;

	while (1)
	{
		max = get_maximum(*b);
		pos = get_pos(*b, max);
		size = list_size(*b);
		middle = size / 2;
		if ((*b)->data == max)
			pa(a, b);
		else if (pos <= middle)
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
		sort_three(a);
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
