/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:39:57 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:39:58 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_bns(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	if (!s2 && !s1)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup_bns(s2));
	if (s2 == NULL)
		return (ft_strdup_bns(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = malloc((len1 + len2 + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len1);
	ft_memcpy(ptr + len1, s2, len2);
	ptr[len1 + len2] = ' ';
	ptr[len1 + len2 + 1] = '\0';
	return (ptr);
}
