#include "push_swap.h"


void    sa(t_node **a)
{
    t_node *tmp;

    tmp = *a;
    (*a) = (*a) -> next;
    tmp -> next = (*a) -> next;
    (*a) -> next = tmp;
    write(1, "sa\n", 3);
}

void   sb(t_node **b)
{
    t_node *tmp;

    tmp = *b;
    (*b) = (*b) -> next;
    tmp -> next = (*b) -> next;
    (*b) -> next = tmp;
    write(1, "sb\n", 3);
}


void   ss(t_node **a, t_node **b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}

void   pa(t_node **a, t_node **b)
{
    t_node *tmp;

    if (!(*b))
        return ;
    tmp = (*b);
    del_first_node(&(*b));
    if (!(*a))
        create_node(&(*a), tmp -> data);
    else
        append_at_end(&(*a), tmp -> data);
    write(1, "pa\n", 3);
}

void  pb(t_node **a, t_node **b)
{
    t_node  *tmp;

    if (!(*a))
        return ;
    tmp = (*a);
    del_first_node(&(*a));
    if (!(*b))
        create_node(&(*b), tmp -> data);
    else
        append_at_start(&(*b), tmp -> data);
    write(1, "pb\n", 3);
}