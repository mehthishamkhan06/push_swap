#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "Libft/libft.h"

typedef struct s_stack {
	struct s_stack	*next;
	struct s_stack	*prev;
	int				data;
}	t_stack;

/*
push_swap.c
*/
void			sorter(t_node **a, t_node **b, t_node **temp)
int				ft_start(t_node **a, t_node **b, t_node **temp):
static	void	push_swap(int argc, char *args);

#endif