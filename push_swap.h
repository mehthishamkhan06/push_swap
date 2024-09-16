#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_stack {
	struct s_stack	*next;
	struct s_stack	*prev;
	int				data;
}	t_stack;

#endif