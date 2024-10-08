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
    // printf("a : %d\n", (*node)print->data);
    int i[5];
    t_node *temp;
    t_node *new;

    i[0] = 0;
    i[4] = list_size(*node);
    temp = (*node);

    // Iterate over each node in the original list
    while (i[0] < i[4])
    {
        i[3] = temp->data; // Get current node's data
        i[1] = 0;
        i[2] = 0;
        new = (*node); // Start from the beginning of the list for each element

        // Compare the current node with every other node
        while (i[1] < i[4])
        {
            if (i[3] > new->data) // Count how many nodes have data less than the current node
                i[2]++;
            new = new->next;
            i[1]++;
        }
        // After finding the rank (i[2]), add it to the alias list
        custom_alias(alias, i[2]);

        // Move to the next node in the original list
        temp = temp->next;
        i[0]++;
    }
}

