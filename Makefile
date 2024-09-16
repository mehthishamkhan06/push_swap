# SRCS			=	push_swap.c ft_split.c ft_atois.c moves.c moves2.c \
# 					sorts.c sorts2.c list_fns.c list_fns2.c error.c error2.c \
# 					sort_chunks.c init_lst.c \

SRCS			=	parser.c ft_atoi.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus