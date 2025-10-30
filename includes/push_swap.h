#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "../libft/includes/libft.h"
#include "../libft/ft_printf/ft_printf.h"
#include <stdio.h>

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
    
} t_stack;

/* Error checking functions */
int     check_empty_input(char **argv);
int     check_multiple_spaces(char **argv);
int     check_errors(char **argv, int argc);
int    check_signs(char **argv);
int     check_multiple_signs(char **argv);
int     check_integer_limits(char **argv);
int     check_integer(char **argv);
int     check_double_numbers(char **argv);
void    exit_with_error();
int     check_void_input(int argc);

/* Stack creation and indexing */
t_stack *create_stack(int argc, char **argv);
void    assign_indices_simple(t_stack *a, int size);
void    stampa(t_stack *a, int size);

/* Swap operations */
void    swap(t_stack *stack);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);

/* Push operations */


/* Small algorithm functions */
void    swap_two_numbers(t_stack *a, int argc);

#endif