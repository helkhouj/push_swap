/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:43:23 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:43:24 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		len += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (len);
}
