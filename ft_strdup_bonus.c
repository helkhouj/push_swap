/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:39:59 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:40:00 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup_bns(const char *str)
{
	size_t	i;
	char	*ptr;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	ptr = malloc((len + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = ' ';
	ptr[i + 1] = '\0';
	return (ptr);
}
