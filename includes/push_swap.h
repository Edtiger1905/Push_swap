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
} t_stack;

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


#endif