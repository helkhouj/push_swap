/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:43:20 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:43:21 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int len)
{
	long	num;
	char	arr[10];
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		len += ft_putchar_fd('-', fd);
		num = -num;
	}
	else if (num == 0)
		len += ft_putchar_fd('0', fd);
	while (num > 0)
	{
		arr[i++] = (num % 10) + '0';
		num = num / 10;
	}
	i = i - 1;
	while (i >= 0)
		len += ft_putchar_fd(arr[i--], fd);
	return (len);
}
