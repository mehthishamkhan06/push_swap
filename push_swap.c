#include "push_swap.h"


void	sorter(t_node **a, t_node **b, t_node **temp)
{
	int length;

	(void)b;
	length = 
}
int ft_start(t_node **a, t_node **b, t_node **temp)
{
	if (sorted(*a) == 1)
	{
		free(*a);
		return (0);
	}
	sorter(a, b, temp);
	ft_free(a);
	ft_free(tempa);
	return(1);
}
static	void	push_swap(int argc, char *args)
{
	t_node *a;
	t_node *b;
	t_node *temp;

	a = NULL;
	b = NULL;
	temp = NULL;
	if (argc > 3)
	{
		ft_initialize(&a, args);
		free (args);
		ft_start(&a, &b, &temp);
	}
}

int main(int argc, char *argv[])
{
	int	i;
	char *args;
	int flag;

	i = 1;
	args = NULL;
	flag = 1;
	if (argc > 3)
	{
		if (arg_check == 0)
			return (1);
		i = 1;
		while(argv[i])
		{
			args = ft_strjoin(args, " ", flag);
			flag = 0;
			args = ft_strjoin(args, argv[i], flag);
			i++;
		}
		ft_error(args);
		push_swap(argc, args);
	}
	return (0);
}