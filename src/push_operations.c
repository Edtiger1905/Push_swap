
#include "../includes/push_swap.h"

void push(t_stack *src, t_stack *dst){
   t_stack *node;

   if (src == NULL|| dst == NULL || src == NULL)
       return;
    node = src;
    src = node->next;
    node->next = dst;
    dst = node;
}

void pa(t_stack *b, t_stack *a)
{
    push(b, a);
    ft_printf("pa\n");
}
void pb(t_stack *a, t_stack *b)
{
    push(a, b);
    ft_printf("pb\n");
}