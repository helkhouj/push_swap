/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:42:44 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:42:45 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	ft_swap(t_list *list)
{
	int	value1;
	int	value2;
	int	tmp;

	if (!list || !list->next)
		return ;
	value1 = list->content;
	value2 = list->next->content;
	tmp = value1;
	list->content = value2;
	list->next->content = tmp;
}

void	ft_swap_a(t_list *list, int flag)
{
	ft_swap(list);
	if (flag == 1)
		ft_printf("sa\n");
}

void	ft_swap_b(t_list *list, int flag)
{
	ft_swap(list);
	if (flag == 1)
		ft_printf("sb\n");
}

void	ft_swap_a_b(t_list *list1, t_list *list2, int flag)
{
	ft_swap(list1);
	ft_swap(list2);
	if (flag == 1)
		ft_printf("ss\n");
}
