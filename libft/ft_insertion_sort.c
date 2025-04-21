/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:23 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:24 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insertion_sort(int *str, int len)
{
	int	i;
	int	tmp;
	int	j;

	i = 1;
	while (i < len)
	{
		tmp = str[i];
		j = i - 1;
		while (j >= 0)
		{
			if (str[j] > tmp)
			{
				str[j + 1] = str[j];
				str[j] = tmp;
			}
			j--;
		}
		i++;
	}
}
