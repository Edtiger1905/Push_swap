
#include "../includes/push_swap.h"

void	swap_two_numbers(t_stack *a, int argc)
{
	if (argc == 3)
	{
        if (ft_is_sorted(a))
        {
        return ;
        }
		if (a[0].value > a[1].value)
		{
			sa(a);
		}
	}
}

void	swap_three_numbers(t_stack *a, int argc)
{
	if (argc == 4)
	{
        if (ft_is_sorted(a))
        {
            return ;
        }
		if (a->index == ft_find_index_max(a))
        {
            ra(a);
        }
        if (a->next->index == ft_find_index_max(a))
        {
            
        }
        
	}
}