#include "push_swap.h"
/*
this function check if the list is sorted by iterating through the list,
the if condition checks if we have reached the end of the list,
if yes, that means the list is sorted.
else it return (1) meaning the list is not sorted.
*/
int	already_sorted(t_node *node)
{
	int i;
	int length;
	t_node *temp;

	temp = node;
	length = list_size(node);
	i = 0;
	while (i < length)
	{
		if (temp->data > temp->next->data)
			break ;
		temp = temp->next;
		i++;
	}
	if (i == length)
		return (0);
	else
		return (1);
}

void	ft_free(t_node **node)
{
	t_node *temp;
	t_node *next;

	temp = *node;
	next = NULL;
	while (temp->next != *node)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	free(temp);
}