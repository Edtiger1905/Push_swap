/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epandele <epandele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:40:52 by epandele          #+#    #+#             */
/*   Updated: 2025/11/10 09:40:53 by epandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/ft_printf/ft_printf.h"
# include "../libft/includes/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				top;
	struct s_stack	*next;
}					t_stack;

/* Error checking functions */
int					check_empty_input(char **argv);
int					check_multiple_spaces(char **argv);
int					check_errors(char **argv, int argc);
int					check_signs(char **argv);
int					check_multiple_signs(char **argv);
int					check_integer_limits(char **argv);
int					check_integer(char **argv);
int					check_double_numbers(char **argv);
void				exit_with_error(void);
int					check_void_input(int argc);

/* Stack creation and indexing */
t_stack				*create_stack(int argc, char **argv);
void				assign_indices_simple(t_stack *a, int size);
void				stampa(t_stack *a, int size);

/* Swap operations */
void				swap(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);

/* Push operations */
void				push(t_stack **src, t_stack **dst);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

/* Rotate operations */
void				rotate(t_stack **head);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);

/* Reverse rotate operations */
void				reverse_rotate(t_stack **head);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);

/* Small algorithm functions */
void				swap_two_numbers(t_stack **a, int argc);
void				swap_three_numbers(t_stack **a, int argc);
void				handle_small_stack(t_stack **a, t_stack **b, int argc);

/* Utility functions */
int					ft_is_sorted(t_stack *a);
int					ft_find_index_max(t_stack *a);
int					stack_size(t_stack *stack);
int					find_min_position(t_stack *stack);
void				move_min_to_top(t_stack **stack);

/* List manipulation functions */
t_stack				*ft_lstnew(int value);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
void				ft_lstadd_front(t_stack **lst, t_stack *new);

/* Free memory functions */
void				free_split(char **array);
void				free_list(t_stack *head);

/* Large algorithm functions */
void				assign_indices(t_stack *a);
int					get_max_bits(int size);
void				radix_sort(t_stack **a, t_stack **b);

#endif