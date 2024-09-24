#include "push_swap.h"

void    create_node(t_node **head, int data)
{
    t_node *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node)
        return ;
    new_node->prev = new_node;
    new_node->data = data;
    new_node->next = new_node;
    *head = new_node;
}

void    append_at_end(t_node **head, int data)
{
    t_node *new_node;
    t_node *last;

    create_node(&new_node, data);
    if (!(*head))
        return ;
    last = (*head)->prev;
    last -> next = new_node;
    new_node -> prev = last;
    new_node -> next = *head;
    (*head) -> prev = new_node;
}
/*
list size function first stores the data value of the first node in the list
then it increments the length variable by 1 and moves to the next node.
It continues to do this until the data value of the first node is equal 
to the data value of the current node.
*/
int list_size(t_node *node)
{
    int length;
    int data;

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
void    initialize_stack(t_node **a, char *args)
{
    int i;
    int j;
    char **array;

    i = 0;
    j = 1;
    array = ft_split(args, ' ');
    create_node(&(*a), ft_atoi_list(array, array[i]));
    while (array[j])
    {
        append_at_end(a, ft_atoi_list(array, array[j]));
        j++;
    }
    while(array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
}