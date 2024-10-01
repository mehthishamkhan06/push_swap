#include "push_swap.h"
/*
this function check if the list is sorted by iterating through the list,
the if condition checks if we have reached the end of the list,
if yes, that means the list is sorted.
else it return (1) meaning the list is not sorted.
*/
int	already_sorted(t_node *node)
{
	t_node *temp;

	temp = node;
	while (temp->next != node)
    {
        if (temp->data > temp->next->data)
            return (0);
        temp = temp->next;
    }
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