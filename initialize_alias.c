/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_alias.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:37:00 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:37:02 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	custom_alias(t_node **alias, int data)
{
	if (!(*alias))
		create_node(alias, data);
	else
		append_at_end(alias, data);
}

/*
this function helps to sort large numbers using the alias list technique
it basically checks for large nmbers and gives them an alias and then sorts them.
*/
void	initialize_alias(t_node **node, t_node **alias)
{
	int		i[5];
	t_node	*tmp;
	t_node	*tmp1;

	i[0] = 0;
	i[4] = list_size(*node);
	tmp = (*node);
	while (i[0] < i[4])
	{
		i[3] = tmp->data;
		i[1] = 0;
		i[2] = 0;
		tmp1 = (*node);
		while (i[1] < i[4])
		{
			if (i[3] > tmp1->next->data)
				i[2]++;
			tmp1 = tmp1->next;
			i[1]++;
		}
		tmp1 = tmp1->next;
		custom_alias(alias, i[2]);
		tmp = tmp->next;
		i[0]++;
	}
}
