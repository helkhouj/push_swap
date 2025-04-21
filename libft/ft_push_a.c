/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:48 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:49 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (!(*stack_b))
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_a);
	*stack_a = tmp;
	if (flag == 1)
		ft_printf("pa\n");
}
