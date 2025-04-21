/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:59 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:42:00 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_list(t_list **list)
{
	t_list	*tmp;

	tmp = (*list)->next;
	if ((*list)->content > tmp->content)
		ft_swap_a(*list, 1);
	if (tmp->next->content < tmp->content)
	{
		ft_reverse_rotate_a(list, 1);
		if (is_sorted(*list))
			ft_swap_a(*list, 1);
	}
}
