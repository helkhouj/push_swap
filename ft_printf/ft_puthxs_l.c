/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthxs_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:43:15 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:43:16 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthxs_lower(unsigned int nbr, int fd, char *str)
{
	char	arr[18];
	int		len;
	int		i;
	int		res;

	i = 0;
	res = 0;
	len = 0;
	if (nbr == 0)
		len += ft_putchar_fd(str[0], fd);
	while (nbr > 0)
	{
		res = nbr % 16;
		arr[i] = str[res];
		i++;
		nbr /= 16;
	}
	i = i - 1;
	while (i >= 0)
		len += ft_putchar_fd(arr[i--], fd);
	return (len);
}
