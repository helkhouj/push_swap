#include "push_swap.h"

t_stack *init_stack(void)
{
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->top = NULL;
    stack->size = 0;
    return (stack);
}

void push(t_stack *stack, int value)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    if (!new)
        return;
    new->value = value;
    new->next = stack->top;
    stack->top = new;
    stack->size++;
}

int pop(t_stack *stack)
{
    t_node *temp;
    int value;

    if (!stack->top)
        return (INT_MAX);
    temp = stack->top;
    value = temp->value;
    stack->top = temp->next;
    free(temp);
    stack->size--;
    return (value);
}

void print_stack(t_stack *stack, char name)
{
    t_node *temp;

    temp = stack->top;
    printf("Stack %c: ", name);
    while (temp)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
