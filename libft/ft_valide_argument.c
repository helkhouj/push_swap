/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valide_argument.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:42:47 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:42:48 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_valid_arguments(char *nptr)
{
	if (ft_atoi(nptr) == 2147483649)
		return (1);
	else if (*nptr == '+' || *nptr == '-')
	{
		nptr++;
		if (!(*nptr >= '0' && *nptr <= '9'))
			return (1);
	}
	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
		nptr++;
	if (!*nptr)
		return (0);
	else
		return (1);
}
