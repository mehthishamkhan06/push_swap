/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:39:41 by mohkhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:39:43 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	char	*args;
	int		check_free;

	args = "";
	check_free = 0;
	if (argc > 1)
	{
		if (valid_argument_check(argv) == 0)
			exit(1);
		i = 1;
		while (argv[i])
		{
			args = ft_strjoin(args, " ", check_free);
			check_free = 1;
			args = ft_strjoin(args, argv[i], check_free);
			i++;
		}
		arg_error(args);
		push_swap(argc, args);
	}
	return (0);
}
