/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atois.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohkhan <mohkhan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:13:21 by mohkhan           #+#    #+#             */
/*   Updated: 2024/06/24 12:13:33 by mohkhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_atoi_overflow(size_t answer, int sign, char *str)
{
	if (answer > 2147483647 && sign == -1)
	{
		write(2, "Error\n", 6);
		free(str);
		exit(1);
	}
	if (answer > 2147483647 && sign == 1)
	{
		write(2, "Error\n", 6);
		free(str);
		exit(1);
	}
}

int	ft_atoi(char *str)
{
	size_t	answer;
	size_t	temp_answer;
	int		sign;
	int		i;

	answer = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp_answer = answer;
		answer = answer * 10 + str[i++] - '0';
		if (temp_answer > answer)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
	}
	ft_atoi_overflow(answer, sign, str);
	return (sign * answer);
}

void	free_list(char **tab, char *args)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	free(args);
	write(2, "Error\n", 6);

	exit(1);
}


void	ft_atoi_list_overflow(size_t answer, int sign, char **tab, char *args)
{
	if (answer > 2147483647 && sign == -1)
		free_list(tab, args);
	if (answer > 2147483647 && sign == 1)
		free_list(tab, args);
}
int	ft_atoi_list(char **tab, char *str, char *args)
{
	size_t	answer;
	size_t	temp_answer;
	int		sign;
	int		i;

	answer = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp_answer = answer;
		answer = answer * 10 + str[i++] - '0';
		if (temp_answer > answer)
		{
			printf("heellooooo\n");
			free_list(tab, args);
			exit(0);
		}
	}
	ft_atoi_list_overflow(answer, sign, tab, args);
	return (answer * sign);
}