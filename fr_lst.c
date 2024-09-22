#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> // for malloc

typedef struct s_list
{
    void *content;
    struct s_list *next;
    struct s_list *prev;
}   t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

int main()
{
    t_list *l1;
    t_list *l2;
    t_list *l3;
    t_list *l4;

    l1 = ft_lstnew((void *)1);
    l2 = ft_lstnew((void *)2);
    l3 = ft_lstnew((void *)3);
    l4 = ft_lstnew((void *)4);
    l1 -> next = l2;
    l2 -> prev = l1;
    l2 -> next = l3;
    l3 -> next = l4;
    l3 -> prev = l2;
    l4 -> next = l1;
    l1 -> prev = l4;

    l2 -> prev = l4;
    l4 -> next = l2;

    free(l1);
    t_list *curr;

    curr = l2;
    int count = 0;

    while(count < 7)
    {
        printf("%d\n", (int)curr->content);
        curr = curr->next;
        count++;
    }
}
