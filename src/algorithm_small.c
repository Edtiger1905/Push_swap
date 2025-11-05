/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 00:00:00 by epandele          #+#    #+#             */
/*   Updated: 2025/11/05 16:11:47 by epandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_two_numbers(t_stack **a, int argc)
{
	if (argc == 3)
	{
		if (ft_is_sorted(*a))
			return ;
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
}

void	swap_three_numbers(t_stack **a, int argc)
{
	if (argc == 4)
	{
		if (ft_is_sorted(*a))
			return ;
		if ((*a)->index == ft_find_index_max(*a))
			ra(a);
		if ((*a)->next->index == ft_find_index_max(*a))
			rra(a);
		if (!ft_is_sorted(*a))
			sa(a);
	}
}