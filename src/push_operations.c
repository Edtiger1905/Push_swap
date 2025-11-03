
#include "../includes/push_swap.h"

void push(t_stack *src, t_stack *dst){
    int i;

    i = 0;

    while (dst[i].top != 1 && i < INT_MAX)
        i++;
    if (i == INT_MAX)
        return ;
    dst[i].top = 0;
    i = 0;
    while (src[i].top != 1 && i < INT_MAX)
        i++;
    src[i].top = 1;
}

void pa(t_stack *a, t_stack *b)
{
    push(a, b);
    ft_printf("pa\n");
}
void pb(t_stack *a, t_stack *b)
{
    push(b, a);
    ft_printf("pb\n");
}