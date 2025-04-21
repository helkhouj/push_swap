/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:52 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:53 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (!(*stack_a))
		return ;
	tmp = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_b);
	*stack_b = tmp;
	if (flag == 1)
		ft_printf("pb\n");
}
