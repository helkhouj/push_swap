/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:15 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:16 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_position(int target, t_list *lst)
{
	size_t	i;

	i = 1;
	while (lst != NULL)
	{
		if (target == lst->content)
			break ;
		lst = lst->next;
		i++;
	}
	return (i);
}
