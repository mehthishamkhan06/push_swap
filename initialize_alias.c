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
	int i[5];
	t_node	*temp;
	t_node	*new;

	i[0] = 0;
	i[4] = list_size(*node);
	temp = *node;
	while (i[0] < i[4])
	{
		i[3] = temp->data;
		i[1] = 0;
		i[2] = 0;
		new = *node;
		while (i[1] < i[4])
		{
			if (i[3] > new->next->data)
				i[2]++;
			new = new->next;
			i[1]++;
		}
		new = new -> next;
		custom_alias(alias, i[2]);
		temp = temp -> next;
		i[0]++;
	} 
}
