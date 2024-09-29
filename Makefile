SRCS			=	push_swap.c ft_split.c ft_atois.c arg_check.c check2.c initializer.c \
					initialize_alias.c sort_check.c small_chunk1.c small_chunk2.c  \
					small_chunk3.c sorter.c ft_strjoin.c ft_isdigit.c ft_strlen.c ft_strdup.c \
					mvs.c mvs2.c get_pos.c ft_isalpha.c m_chunk.c main.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

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
