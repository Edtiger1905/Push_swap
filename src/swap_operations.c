
#include "push_swap.h"

void swap(t_stack *stack)
{
    t_stack temp;

    temp = stack[0];
    stack[0] = stack[1];
    stack[1] = temp;
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
