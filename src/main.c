
#include "push_swap.h"

void stampa(int *array)
{
    int i = 0;
    while (array[i])
    {
        printf("%d\n", array[i]);
        i++;
    }
}


int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (check_errors(argv, argc) == 1)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    int *array = (int *)malloc(sizeof(int) * (argc - 1));
    while (argv[i])
    {
        array[i - 1] = (int)ft_atol(argv[i]);
        i++;
    }

    stampa(array);

    free(array);
    return (0);
}
