
#include "push_swap.h"

void swap(t_stack *stack)
{
    int temp;

    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;
}

void sa(t_stack *a)
{
    swap(a);
    ft_printf("sa\n");
}

void sb(t_stack *b)
{
    swap(b);
    ft_printf("sb\n");
}   

void ss(t_stack *a, t_stack *b)
{
     swap(a);
     swap(b);
     ft_printf("ss\n");
}
