/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 00:00:00 by epandele          #+#    #+#             */
/*   Updated: 2025/11/07 12:04:19 by epandele         ###   ########.fr       */
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
void	handle_small_stack(t_stack **a, t_stack **b,int argc)
{
	int	size;
	int	pushes;

	if(ft_is_sorted(*a))
		return ;
	size = stack_size(*a);
	if (size == 5)
		pushes = 2;
	else
		pushes = 1;
	while (pushes > 0)
	{
		move_min_to_top(a);
		pb(a, b);
		pushes--;
	}
	swap_three_numbers(a, argc);
	if (stack_size(*b) == 2)
	{
		if ((*b)->value > (*b)->next->value)
			sb(b);
	}
	while (*b)
		pa(a, b);
	/* ft_printf("a: \n");
	print_stack(*a);
	ft_printf("b: \n");
	print_stack(*b); */
}

