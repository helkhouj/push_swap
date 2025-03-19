#include "push_swap.h"

int is_number(char *str)
{
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

long	ft_atol(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
        if ((result * sign) > INT_MAX || (result * sign) < INT_MIN)
            return (2147483648);
    }
    return (result * sign);
}
int	has_duplicates(t_stack *a)
{
    t_node *outer = a->top;
    t_node *inner;

    while (outer)
    {
        inner = outer->next;
        while (inner)
        {
            if (outer->value == inner->value)
                return (1);
            inner = inner->next;
        }
        outer = outer->next;
    }
    return (0);
}
int	parse_input(t_stack *a, char **argv)
{
    int i = 1;
    long num;

    while (argv[i])
    {
        if (!is_number(argv[i])) 
        {
            write(2, "Error\n", 6);
            return (0);
        }
        num = ft_atol(argv[i]);
        if (num == 2147483648)
        {
            write(2, "Error\n", 6);
            return (0);
        }
        push(a, (int)num);
        i++;
    }
    if (has_duplicates(a))
    {
        write(2, "Error\n", 6);
        return (0);
    }
    return (1);
}



