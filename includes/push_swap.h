// Definire struttura stack
typedef struct s_stack
{
	int	*data;
	int	size;
	int	capacity;
}		t_stack;

// Definire struttura per due stack
typedef struct s_push_swap
{
    t_stack *a;
    t_stack *b;
    int     total_numbers;
}           t_push_swap;
