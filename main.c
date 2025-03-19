#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    if (argc < 2)
        return (0); 

    a = init_stack();
    b = init_stack();

    if (!parse_input(a, argv))
        return (1);

    print_stack(a, 'A');

    if (a->size == 3)
        sort_three(a);
    else if (a->size == 4)
        sort_four(a, b);
    else if (a->size == 5)
        sort_five(a, b);

    print_stack(a, 'A');
    return (0);
}
