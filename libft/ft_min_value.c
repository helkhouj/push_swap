/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:43 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:44 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min_value(t_list *list)
{
	int	min;

	min = list->content;
	list = list->next;
	while (list)
	{
		if (min > list->content)
			min = list->content;
		list = list->next;
	}
	return (min);
}
