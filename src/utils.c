
#include "../includes/push_swap.h"

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