/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:54 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:55 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*last_node;
	t_list	*bebor_last_nd;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	bebor_last_nd = *stack;
	last_node = ft_lstlast(*stack);
	while (bebor_last_nd->next->next)
		bebor_last_nd = bebor_last_nd->next;
	bebor_last_nd->next = NULL;
	ft_lstadd_front(stack, last_node);
}

void	ft_reverse_rotate_a(t_list **stack_a, int flag)
{
	ft_reverse_rotate(stack_a);
	if (flag == 1)
		ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_list **stack_b, int flag)
{
	ft_reverse_rotate(stack_b);
	if (flag == 1)
		ft_printf("rrb\n");
}

void	ft_reverse_rotate_a_b(t_list **stack_a, t_list **stack_b, int flag)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	if (flag == 1)
		ft_printf("rrr\n");
}
