/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 00:00:00 by epandele          #+#    #+#             */
/*   Updated: 2025/11/07 15:39:47 by epandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	add_node_back(t_stack **head, t_stack **tail, t_stack *node)
{
	if (!*head)
	{
		*head = node;
		*tail = node;
	}
	else
	{
		(*tail)->next = node;
		*tail = node;
	}
}

t_stack	*create_stack(int argc, char **argv)
{
	t_stack	*head;
	t_stack	*tail;
	t_stack	*node;
	int		i;

	head = NULL;
	tail = NULL;
	i = 1;
	while (i < argc)
	{
		node = (t_stack *)malloc(sizeof(t_stack));
		if (!node)
		{
			free_list(head);
			return (NULL);
		}
		node->value = (int)ft_atol(argv[i]);
		node->index = 0;
		node->next = NULL;
		add_node_back(&head, &tail, node);
		i++;
	}
	return (head);
}

void	assign_indices_simple(t_stack *a, int size)
{
	t_stack	*i_node;
	t_stack	*j_node;
	int		count;

	(void)size;
	i_node = a;
	while (i_node)
	{
		count = 0;
		j_node = a;
		while (j_node)
		{
			if (j_node->value < i_node->value)
				count++;
			j_node = j_node->next;
		}
		i_node->index = count;
		i_node = i_node->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	
	if (check_errors(argv, argc) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	a = create_stack(argc, argv);
	b = NULL;
	if (!a && argc > 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	assign_indices_simple(a, argc - 1);
	if (argc == 3)
		swap_two_numbers(&a, argc);
	else if (argc == 4)
		swap_three_numbers(&a, argc);
	else if (argc == 5 || argc == 6)
		handle_small_stack(&a, &b, argc);
	else
		radix_sort(&a, &b);
	free_list(a);
	return (0);
}
