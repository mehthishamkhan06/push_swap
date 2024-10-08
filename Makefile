# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:35:49 by mohkhan           #+#    #+#              #
#    Updated: 2024/10/08 16:35:52 by mohkhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	push_swap.c libft/ft_split.c libft/ft_atois.c arg_check.c error_checks.c fns.c \
					initialize_alias.c list_sort.c small_chunk1.c small_chunk2.c  \
					libft/ft_strjoin.c libft/ft_isdigit.c libft/ft_strlen.c libft/ft_strdup.c \
					mvs.c mvs2.c get_fns.c libft/ft_isalpha.c M_and_L_chunk.c main.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g3

NAME			= push_swap

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo "push_swap created"

clean:
				@$(RM) $(OBJS)
				@echo "cleaned"

fclean:			clean
				@$(RM) $(NAME)
				@echo "fcleaned"

re:				fclean $(NAME)
				@echo "recreated"

.PHONY:			all clean fclean re bonus
