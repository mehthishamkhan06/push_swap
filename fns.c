/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fns.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:36:33 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:36:35 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_node(t_node **head, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->prev = new_node;
	new_node->data = data;
	new_node->next = new_node;
	*head = new_node;
}

void	del_first_node(t_node **n)
{
	t_node	*tmp;

	if ((*n) == NULL)
		return ;
	tmp = (*n);
	if (tmp == (*n)->next)
	{
		free((*n));
		(*n) = NULL;
		return ;
	}
	(*n)->next->prev = (*n)->prev;
	(*n)->prev->next = (*n)->next;
	(*n) = (*n)->next;
	free(tmp);
}

void	append_at_start(t_node **tail, int data)
{
	t_node	*new_node;
	t_node	*start;

	create_node(&new_node, data);
	if (!(*tail))
		return ;
	start = (*tail)->prev;
	new_node -> next = (*tail);
	new_node -> prev = start;
	(*tail)-> prev = new_node;
	start -> next = new_node;
	(*tail) = new_node;
}

void	append_at_end(t_node **head, int data)
{
	t_node	*new_node;
	t_node	*last;

	create_node(&new_node, data);
	if (!(*head))
		return ;
	last = (*head)->prev;
	last -> next = new_node;
	new_node -> prev = last;
	new_node -> next = (*head);
	(*head)-> prev = new_node;
}
/*
list size function first stores the data value of the first node in the list
then it increments the length variable by 1 and moves to the next node.
It continues to do this until the data value of the first node is equal 
to the data value of the current node.
*/

int	list_size(t_node *node)
{
	int	length;
	int	data;

	length = 1;
	data = node->data;
	node = node ->next;
	while (data != node -> data)
	{
		length++;
		node = node->next;
	}
	return (length);
}
