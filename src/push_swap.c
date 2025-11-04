/* push_swap_list_main.c
 * create_stack, assign_indices_simple e main adattate a linked list
 * Si suppone che check_errors, ft_atol, ft_printf, swap_*, free_list siano
 * implementate in altri file del progetto.
 */

#include "push_swap.h"
#include <stdlib.h>

#include <stdlib.h>

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
		node = (t_stack *)malloc(sizeof(*node));
		if (!node)
		{
			if (head)
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

    int count;
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

	if (check_errors(argv, argc) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	a = create_stack(argc, argv);
	if (!a && argc > 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	assign_indices_simple(a, argc - 1);
	if (argc == 3)
		swap_two_numbers(a, argc);
	else if (argc == 4)
		swap_three_numbers(a, argc);
	free_list(a);
	return (0);
}
