#include "push_swap.h"

// Funzione per inizializzare lo stack
t_stack *init_stack(int capacity)
{
    t_stack *stack;
    
    stack = (t_stack *)malloc(sizeof(t_stack));
    if (stack == NULL)
        return NULL;
    
    stack->data = (int *)malloc(sizeof(int) * capacity);
    if (stack->data == NULL)
    {
        free(stack);
        return NULL;
    }
    
    stack->size = 0;
    stack->capacity = capacity;
    
    return stack;
}

// Funzione per aggiungere un elemento allo stack
void push_stack(t_stack *stack, int value)
{
    if (stack == NULL || stack->size >= stack->capacity)
        return;
    
    stack->data[stack->size] = value;
    stack->size++;
}

// Funzione per vedere l'elemento in cima allo stack
int peek_stack(t_stack *stack)
{
    if (stack == NULL || stack->size == 0)
        return 0;
    
    return stack->data[stack->size - 1];
}

// Funzione per liberare la memoria dello stack
void free_stack(t_stack *stack)
{
    if (stack == NULL)
        return;
    
    if (stack->data != NULL)
        free(stack->data);
    
    free(stack);
}

int main(void)
{
    t_stack *test;
    int i;
    
    // Creare stack
    test = init_stack(10);
    if (test == NULL)
    {
        printf("Errore: impossibile creare lo stack\n");
        return 1;
    }
    
    // Aggiungere 3 numeri
    push_stack(test, 42);
    push_stack(test, 21);
    push_stack(test, 84);
    
    // Stampare i numeri
    printf("Numeri nello stack (dal basso verso l'alto):\n");
    i = 0;
    while (i < test->size)
    {
        printf("  [%d]: %d\n", i, test->data[i]);
        i++;
    }
    
    printf("\nTop dello stack: %d\n", peek_stack(test));
    printf("Size: %d\n", test->size);
    printf("Capacity: %d\n", test->capacity);
    
    // Liberare memoria
    free_stack(test);
    
    return 0;
}