/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:39:52 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:39:53 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_line(int fd, char *str, char *buffer)
{
	ssize_t	n;
	char	*tmp;
	char	*check_new_line;

	while (1)
	{
		n = read(fd, buffer, BUFFER_SIZE);
		if (n == -1)
			return (NULL);
		else if (n == 0)
			break ;
		buffer[n] = '\0';
		if (!str)
			str = ft_strdup("");
		tmp = str;
		str = ft_strjoin3(tmp, buffer);
		free(tmp);
		check_new_line = ft_strchr(buffer, '\n');
		if (check_new_line)
			break ;
	}
	return (str);
}

char	*find_next_line(char *str)
{
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (NULL);
	tmp = ft_substr(str, i + 1, len - i);
	if (tmp[0] == '\0')
	{
		free(tmp);
		tmp = NULL;
	}
	str[i + 1] = '\0';
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*save_str;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = find_line(fd, save_str, buffer);
	free(buffer);
	if (!line)
		return (NULL);
	save_str = find_next_line(line);
	return (line);
}
