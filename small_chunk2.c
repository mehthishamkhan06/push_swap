#include "push_swap.h"

void        sort_more_continuation(t_node **a, t_node **b, int i)
{
    while(i)
    {
        pa(a, b);
        i--;
    }
}
void    sort_more(t_node **a, t_node **b)
{
    int min;
    int pos;
    int i[2];

    i[1] = list_size(*a);
    i[0] = 0;
    while(i[1] > 4)
    {
        min = get_minimum(*a);
        pos = get_pos(*a, min);
        if((*a) -> data != min)
        {
            if(pos <= i[1] / 2)
                while((*a) -> data != min)
                    ra(a);
            else
                while((*a) -> data != min)
                    rra(a);
        }
        pb(a, b);
        i[0]++;
        i[1]--;
    }
    sort_four(a, b);
    sort_more_continuation(a, b, i[0]);
}
