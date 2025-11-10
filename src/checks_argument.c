/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:24:04 by epandele          #+#    #+#             */
/*   Updated: 2025/11/10 09:28:42 by epandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_empty_input(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				break ;
			j++;
		}
		if (argv[i][j] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	check_multiple_spaces(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ' && argv[i][j + 1] == ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_signs(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-') && (argv[i][j
					+ 1] < '0' || argv[i][j + 1] > '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_multiple_signs(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-') && (argv[i][j
					+ 1] == '+' || argv[i][j + 1] == '-'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_integer_limits(char **argv)
{
	int		i;
	long	num;

	i = 1;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}
