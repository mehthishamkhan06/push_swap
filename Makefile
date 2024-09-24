SRCS			=	push_swap.c ft_split.c ft_atois.c arg_check.c check2.c initializer.c \
					initialize_alias.c sort_check.c sort1.c sorter.c

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
