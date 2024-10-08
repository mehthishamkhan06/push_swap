/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:40:15 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:40:18 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
this function check if the list is sorted by iterating through the list,
the if condition checks if we have reached the end of the list,
if yes, that means the list is sorted.
else it return (1) meaning the list is not sorted.
*/

int	already_sorted(t_node *node)
{
	t_node	*temp;

	temp = node;
	while (temp->next != node)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	start_sorting(t_node **a, t_node **b, t_node **temp_a)
{
	if (already_sorted(*a))
		return (ft_free(a), 0);
	list_sorter(a, b, temp_a);
	ft_free(a);
	ft_free(temp_a);
	return (1);
}

void	push_swap(int argc, char *args)
{
	t_node	*a;
	t_node	*b;
	t_node	*temp_a;

	a = NULL;
	b = NULL;
	temp_a = NULL;
	if (argc > 1)
	{
		initialize_stack(&a, args);
		free(args);
		start_sorting(&a, &b, &temp_a);
	}
}
