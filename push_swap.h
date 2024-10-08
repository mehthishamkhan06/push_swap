/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:40:28 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:40:30 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	int				data;
}	t_node;

/*
Libft_fns
*/
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2, int flag);
int		ft_isdigit(int c);
char	**ft_split(char *s, char c);
char	*ft_strdup( char *src);
int		ft_isalpha(int c);
int		ft_atoi_list(char **tab, char *str, char *args);

/*
error checks
*/
int		valid_argument_check(char *argv[]);
void	arg_error(char *args);
void	ft_error_continues(char *args);
/*
list fns
*/
int		already_sorted(t_node *node);
void	create_node(t_node **head, int data);
void	del_first_node(t_node **n);
void	append_at_start(t_node **tail, int data);
void	append_at_end(t_node **head, int data);
int		list_size(t_node *node);
int		get_minimum(t_node *a);
int		get_maximum(t_node *a);
int		get_pos(t_node *a, int data);
void	ft_free(t_node **node);
void	initialize_alias(t_node **node, t_node **alias);
void	initialize_stack(t_node **a, char *args);
void	list_sorter(t_node **a, t_node **b, t_node **tempa);
void	sort_m_chunk(t_node **a, t_node **b);
void	sort_l_chunk(t_node **a, t_node **b);
void	sort_two(t_node **a);
void	sort_three(t_node **a);
void	sort_s_chunk(t_node **a, t_node **b, int len);
void	sort_four(t_node **a, t_node **b);
void	sort_more(t_node **a, t_node **b);
void	push_swap(int argc, char *args);
/*
moves
*/
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
#endif
