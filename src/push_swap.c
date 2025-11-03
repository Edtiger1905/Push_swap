
#include "push_swap.h"

/* void stampa(t_stack *a, int argc)
{
    int i = 1;

    while (i < argc)
    {
        ft_printf("Value: %d Index: %d\n", a[i -1].value, a[i - 1].index);
        i++;
    }
} */

void assign_indices_simple(t_stack *a, int size)
{
    int i;
    int j;
    int count;

    i = 0;
    while(i < size)
    {
        j = 0;
        count = 0;
        while (j < size)
        {
            if (a[j].value < a[i].value)
                count++;
            j++;
        }
        a[i].index = count;
        i++;
    }
}

t_stack *create_stack(int argc, char **argv)
{
    t_stack *a;
    int i;
    
    a = (t_stack *)malloc(sizeof(t_stack) * (argc - 1));
    if (!a)
        return (NULL);
    i = 1;
    while (i < argc)
    {
        a[i - 1].value = (int)ft_atol(argv[i]);
        a[i - 1].index = 0;
        i++;
    }
    return (a);
}

int main(int argc, char **argv)
{
    t_stack *a;

    if (check_errors(argv, argc) == 1)
    {
        ft_printf("Error\n");
        return (1);
    }
    a = create_stack(argc, argv);
    
    assign_indices_simple(a, argc - 1);

    if (argc == 3)
        swap_two_numbers(a, argc);
    else if (argc == 4)
        swap_three_numbers(a, argc);
    free(a);
    return (0);
}
