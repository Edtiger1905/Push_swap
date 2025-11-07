
#include "../includes/push_swap.h"

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++; 
		stack = stack->next;
	}
	return (size);
}

int ft_is_sorted(t_stack *a)
{
    t_stack *current;

    if (!a)
        return 1; 

    current = a;
    while (current->next)
    {
        if (current->value > current->next->value)
            return 0;               
        current = current->next;
    }
    return 1;                       
}

int ft_find_index_max(t_stack *a)
{
    int max_index;
    t_stack *current;

    max_index = a->index;
    current = a;
    while (current)
    {
        if (current->index > max_index)
            max_index = current->index;
        current = current->next;
    }
    return (max_index);
}
int	find_min_position(t_stack *stack)
{
	int		min_value;
	int		min_pos;
	int		current_pos;
	t_stack	*temp;

	min_value = stack->value;
	min_pos = 0;
	current_pos = 0;
	temp = stack;
	while (temp)
	{
		if (temp->value < min_value)
		{
			min_value = temp->value;
			min_pos = current_pos;
		}
		temp = temp->next;
		current_pos++;
	}
	return (min_pos);
}

void	move_min_to_top(t_stack **stack)
{
	int	min_pos;
	int	size;

	min_pos = find_min_position(*stack);
	size = stack_size(*stack);
	if (min_pos <= size / 2)
	{
		while (min_pos > 0)
		{
			ra(stack);
			min_pos--;
		}
	}
	else
	{
		while (min_pos < size)
		{
			rra(stack);
			min_pos++;
		}
	}
}


