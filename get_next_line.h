/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:39:45 by helkhouj          #+#    #+#             */
/*   Updated: 2025/04/21 11:39:46 by helkhouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# if BUFFER_SIZE > 2147483646
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*find_line(int fd, char *str, char *buffer);
char	*ft_strjoin3(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*ft_strdup_bns(const char *str);
char	*ft_strjoin_bns(char const *s1, char const *s2);
char	*ft_join_args_bns(char **argv);
void	creat_linked_list(char **av, t_list **stack, t_list **actual_node);
int		check_argument(char **argv, char *arr);
int		ft_has_duplicates_bns(char **arr);
#endif