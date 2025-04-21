/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:40:15 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:40:16 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_argument(char **argv, char *arr)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_valid_arguments(argv[i]))
		{
			write(2, "Error\n", 6);
			free_args(argv, arr);
			exit(1);
		}
		i++;
	}
	if (ft_has_duplicates_bns(argv))
	{
		write(2, "Error\n", 6);
		free_args(argv, arr);
		exit(1);
	}
	return (0);
}
