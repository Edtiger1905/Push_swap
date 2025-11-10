/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:23:01 by epandele          #+#    #+#             */
/*   Updated: 2025/11/10 09:32:02 by epandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_void_input(int argc)
{
	if (argc < 2)
		return (1);
	return (0);
}

int	check_integer(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != ' '
				&& argv[i][j] != '+' && argv[i][j] != '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_double_numbers(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_single_argument(int argc)
{
	int	i;

	i = 1;
	if (argc <= 2)
		return (1);
	else
		return (0);
}

int	check_errors(char **argv, int argc)
{
	if (check_empty_input(argv) == 1)
		return (1);
	if (check_single_argument(argc) == 1)
		return (1);
	if (check_multiple_spaces(argv) == 1)
		return (1);
	if (check_signs(argv) == 1)
		return (1);
	if (check_multiple_signs(argv) == 1)
		return (1);
	if (check_integer_limits(argv) == 1)
		return (1);
	if (check_integer(argv) == 1)
		return (1);
	if (check_void_input(argc) == 1)
		return (1);
	if (check_double_numbers(argv) == 1)
		return (1);
	return (0);
}
