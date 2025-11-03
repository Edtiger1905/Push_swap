#include "../includes/push_swap.h"

void rotate(t_stack **head)
{
    t_stack *ptr1;
    t_stack *ptr2;

    ptr1 = *head;
    ptr2 = ptr1->next;
    *head = ptr2;
    ptr1->next = NULL;
    ft_lstadd_back(head, ptr1);
}

void ra(t_stack *a)
{
    rotate(&a);
    ft_printf("ra\n");
}
void rb(t_stack *b)
{
    rotate(&b);
    ft_printf("rb\n");
}

void rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
    ft_printf("rr\n");
}