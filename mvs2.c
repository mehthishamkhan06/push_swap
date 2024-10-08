/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mvs2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:40:03 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:40:06 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	(*a) = (*a)-> next;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	(*b) = (*b)-> next;
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void	rra(t_node **a)
{
	(*a) = (*a)-> prev;
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	(*b) = (*b)-> prev;
	write(1, "rrb\n", 4);
}
