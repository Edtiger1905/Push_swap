#include "push_swap.h"

void free_split(char **array)
{
    int i;

    if (!array)
        return;
    i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
}
void free_list(t_stack *head)
{
    t_stack *tmp;
    
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
