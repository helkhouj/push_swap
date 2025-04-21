/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:25 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:41:26 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_empty(char **av)
{
	int		i;
	size_t	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j] == ' ' || (av[i][j] >= 9 && av[i][j] <= 13))
			j++;
		if (j == ft_strlen(av[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		else if (av[i][0] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

char	*ft_join_args(char **argv)
{
	int		j;
	char	*arr;
	char	*tmp;

	arr = NULL;
	j = 1;
	check_empty(argv);
	while (argv[j])
	{
		tmp = arr;
		arr = ft_strjoin(arr, argv[j]);
		if (tmp)
			free(tmp);
		j++;
	}
	return (arr);
}
