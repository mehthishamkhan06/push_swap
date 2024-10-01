SRCS			=	push_swap.c libft/ft_split.c libft/ft_atois.c arg_check.c check2.c initializer.c \
					initialize_alias.c sort_check.c small_chunk1.c small_chunk2.c  \
					sorter.c libft/ft_strjoin.c libft/ft_isdigit.c libft/ft_strlen.c libft/ft_strdup.c \
					mvs.c mvs2.c get_pos.c libft/ft_isalpha.c m_chunk.c main.c

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
				@echo "cleaned"

re:				fclean $(NAME)
				@echo "recreated"

.PHONY:			all clean fclean re bonus
