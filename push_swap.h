#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
// # include "Libft/libft.h"

typedef struct s_node {
	struct s_node	*next;
	struct s_node	*prev;
	int				data;
}	t_node;

/*
push_swap.c
*/
int				start_sorting(t_node **a, t_node **b, t_node **temp);
void	push_swap(int argc, char *args);
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2, int flag);
int		ft_isdigit(int c);
char	**ft_split(char *s, char c);
char	*ft_strdup( char *src);
int		ft_isalpha(int c);

int	valid_argument_check(char *argv[]);
void arg_error(char *args);
bool    is_alpha_string(char **argv);
int	is_duplicate_str(char **argv);
bool	invalid_input(char **argv);
void	ft_error_continues(char *args);
void	ft_atoi_overflow(long long answer, int sign);
int	ft_atoi(char *str);
void	free_list(char **tab);
void	ft_atoi_list_overflow(long long answer, int sign, char **tab);
int	ft_atoi_list(char **tab, char *str);
void    create_node(t_node **head, int data);
void    append_at_end(t_node **head, int data);
int list_size(t_node *node);
void    initialize_stack(t_node **a, char *args);
void	custom_alias(t_node **alias, int data);
void	initialize_alias(t_node **node, t_node **alias);
int	already_sorted(t_node *node);
void	ft_free(t_node **node);
void	sort_s_chunk(t_node **a, t_node **b, int len);
void	sort_two(t_node **a);
void	sort_three_continue(t_node **a);
void	list_sorter(t_node **a, t_node **b, t_node **tempa);
void    sort_four(t_node **a, t_node **b);
void    sort_more(t_node **a, t_node **b);
void    sort_more_continuation(t_node **a, t_node **b, int i);
void    sort_pushed_chunk(t_node **a, t_node **b);
void    push_chunk(t_node **a, t_node **b, int i, int max);
void    sort_m_chunk(t_node **a, t_node **b);
void    sort_l_chunk(t_node **a, t_node **b);
void	sort_three(t_node **a);
int get_minimum(t_node *a);
int get_maximum(t_node *a);
int get_pos(t_node *a, int data);
void	del_first_node(t_node **n);
void    create_node(t_node **head, int data);
void    append_at_start(t_node **tail, int data);
void    append_at_end(t_node **head, int data);
/*
moves
*/
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void    ra(t_node **a);
void    rb(t_node **b);
void    rr(t_node **a, t_node **b);
void    rra(t_node **a);
void    rrb(t_node **b);
void    rrr(t_node **a, t_node **b);
#endif