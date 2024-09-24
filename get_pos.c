#include "push_swap.h"

int get_minimum(t_node *a)
{
	int		size_l;
	int		min;
	t_node	*temp;
	int		i;

	i = 0;
	size_l = list_size(a);
	min = a->data;
	temp = a;
	while (i < size_l)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
		i++;
	}
	return (min);
}

int	get_maximum(t_node *a)
{
	int		size_l;
	int		max;
	t_node	*temp;
	int		i;

	i = 0;
	size_l = list_size(a);
	max = a->data;
	temp = a;
	while (i < size_l)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
		i++;
	}
	return (max);
}

int get_pos(t_node *a, int data)
{
	int pos;
	int i;
	int size_l;
	t_node *temp;

	pos = 0;
	i = 0;
	size_l = list_size(a);
	temp = a;
	while (i < size_l)
	{
		if (temp->data == data)
			return (pos);
		pos++;
		temp = temp->next;
		i++;
	}
	return (pos);
}