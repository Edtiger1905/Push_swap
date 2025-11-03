
#include "../includes/push_swap.h"


/*rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.*/

void reverse_rotate(t_stack **head)
{
    t_stack *ptr1;
    t_stack *ptr2;
    t_stack *ptr3;

    ptr1 = *head;
    ptr2 = NULL;
    ptr3 = *head;

    while(ptr3->next != NULL)
    {
        ptr2 = ptr3;
        ptr3 = ptr3->next;
    }
    ptr2->next = NULL;
    ptr3->next = ptr1;
    *head = ptr3;
}

void rra(t_stack *a)
{
    reverse_rotate(&a);
    ft_printf("rra\n");
}
void rrb(t_stack *b)
{
    reverse_rotate(&b);
    ft_printf("rrb\n");
}
void rrr(t_stack *a,t_stack *b)
{
    reverse_rotate(&a);
    reverse_rotate(&b);
    ft_printf("rrr\n");
}