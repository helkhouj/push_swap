#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	first = a->top->value;
	int	second = a->top->next->value;
	int	third = a->top->next->next->value;

	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void sort_four(t_stack *a, t_stack *b)
{
    int min_index;

    min_index = find_min_index(a);
    while (min_index--)
        ra(a);
    pb(a, b);
    sort_three(a);
    pa(a, b);
}


void sort_five(t_stack *a, t_stack *b)
{
    int min_index;

    min_index = find_min_index(a);
    while (min_index--)
        ra(a);
    pb(a, b);

    min_index = find_min_index(a);
    while (min_index--)
        ra(a);
    pb(a, b);

    sort_three(a);
    pa(a, b);
    pa(a, b);
}
