/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:42:50 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:42:51 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(int a, int b)
{
	return (a < b);
}

int	is_sorted(t_list *list)
{
	int	first;
	int	second;

	if (!list)
		return (1);
	while (list->next)
	{
		first = list->content;
		second = list->next->content;
		if (checker(first, second) == 0)
			return (1);
		list = list->next;
	}
	return (0);
}
