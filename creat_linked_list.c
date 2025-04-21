/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:40:11 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:40:12 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	creat_linked_list(char **av, t_list **stack, t_list **actual_node)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (av[i])
	{
		number = ft_atoi(av[i]);
		*actual_node = creat_node(number);
		if (!stack)
			stack = actual_node;
		else
			ft_lstadd_back(stack, *actual_node);
		i++;
	}
}
