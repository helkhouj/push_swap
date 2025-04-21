/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:43:10 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:43:11 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrees(unsigned long nbr, int fd, char *str)
{
	char	arr[18];
	int		len;
	int		i;
	int		res;

	i = 0;
	res = 0;
	len = 0;
	if (nbr == 0)
		return (ft_putstr_fd("(nil)", fd));
	while (nbr > 0)
	{
		res = nbr % 16;
		arr[i] = str[res];
		i++;
		nbr /= 16;
	}
	i = i - 1;
	len += write(fd, "0x", 2);
	while (i >= 0)
		len += ft_putchar_fd(arr[i--], fd);
	return (len);
}
