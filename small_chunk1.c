/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_chunk1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:40:42 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:40:44 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

void	sort_three_continue(t_node **a)
{
	if ((*a)->data < (*a)->next->data)
	{
		if ((*a)-> data < (*a)->prev->data
			&& (*a)->next->data > (*a)->prev->data)
		{
			sa(a);
			ra(a);
		}
		if ((*a)->data > (*a)->prev->data
			&& (*a)->next->data > (*a)->prev->data)
			rra(a);
	}
}

void	sort_three(t_node **a)
{
	if ((*a)-> data > (*a)-> next -> data)
	{
		if ((*a)-> data < (*a)-> prev -> data
			&& (*a)->next->data < (*a)->prev->data)
			sa(a);
		else if ((*a)-> data > (*a)-> prev -> data
			&& (*a)-> next -> data > (*a)-> prev -> data)
		{
			sa(a);
			rra(a);
		}
		else if ((*a)-> data > (*a)-> prev -> data
			&& (*a)-> next -> data < (*a)-> prev -> data)
			ra(a);
	}
	sort_three_continue(a);
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
