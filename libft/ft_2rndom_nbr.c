/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2rndom_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:40:54 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:40:55 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_2nbr(t_list **list)
{
	int	min_node;
	int	pos;

	min_node = ft_min_value(*list);
	pos = ft_find_position(min_node, *list);
	if (pos == 2)
	{
		if ((*list)->content > (*list)->next->content)
			ft_swap_a(*list, 1);
	}
}
