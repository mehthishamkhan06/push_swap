#include "push_swap.h"


void    sa(t_node **a)
{
    int tmp;

    tmp = (*a) -> data;
    (*a) -> data = (*a) -> next -> data;
    (*a) -> next -> data = tmp;
    write(1, "sa\n", 3);
}

void   sb(t_node **b)
{
    int tmp;

    tmp = (*b) -> data;
    (*b) -> data= (*b) -> next -> data;
    (*b) -> next -> data = tmp;
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
    int tmp;

    if (!(*b))
        return ;
    tmp = (*b) -> data;
    del_first_node(&(*b));
    if (!(*a))
        create_node(&(*a), tmp);
    else
        append_at_start(&(*a), tmp);
    write(1, "pa\n", 3);
}

void  pb(t_node **a, t_node **b)
{
    int tmp;

    if (!(*a))
        return ;
    tmp = (*a) -> data;
    del_first_node(&(*a));
    if (!(*b))
        create_node(&(*b), tmp);
    else
        append_at_start(&(*b), tmp);
    write(1, "pb\n", 3);
}