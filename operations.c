#include "push_swap.h"

void	sa(t_stack *a)
{
	if (!a || !a->top || !a->top->next)
		return;
	t_node	*first = a->top;
	t_node	*second = first->next;
	first->next = second->next;
	second->next = first;
	a->top = second;
	printf("sa\n");
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return;
	push(a, pop(b));
	printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return;
	push(b, pop(a));
	printf("pb\n");
}

void	ra(t_stack *a)
{
	if (!a->top || !a->top->next)
		return;
	t_node	*temp = a->top;
	while (temp->next)
		temp = temp->next;
	temp->next = a->top;
	a->top = a->top->next;
	temp->next->next = NULL;
	printf("ra\n");
}

void	rra(t_stack *a)
{
	if (!a->top || !a->top->next)
		return;
	t_node	*prev = NULL;
	t_node	*last = a->top;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = a->top;
	a->top = last;
	prev->next = NULL;
	printf("rra\n");
}
