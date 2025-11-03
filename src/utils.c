
#include "../includes/push_swap.h"

int ft_is_sorted(t_stack *a)
{
    int i;

    i = 0;
    while (i < a[i].top - 1)
    {
        if (a[i].value > a[i + 1].value)
            return 1;
        i++;
    }
    return 0;
}
int ft_find_index_max(t_stack *a)
{
    int i;
    int max_index;

    i = 0;
    max_index = a[0].index;
    while (a[i].top != 1 && i < INT_MAX)
    {
        if (a[i].index > max_index)
            max_index = a[i].index;
        i++;
    }
    return (max_index);
}
