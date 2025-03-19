#include "push_swap.h"

int find_min_index(t_stack *stack)
{
    t_node *temp;
    int min;
    int index;
    int min_index;

    temp = stack->top;
    min = temp->value;
    index = 0;
    min_index = 0;

    while (temp)
    {
        if (temp->value < min)
        {
            min = temp->value;
            min_index = index;
        }
        temp = temp->next;
        index++;
    }
    return (min_index);
}
