# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helkhouj <helkhouj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 11:43:29 by helkhouj          #+#    #+#              #
#    Updated: 2025/04/21 11:43:30 by helkhouj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putadress.c ft_putchar_fd.c ft_puthxs_l.c ft_putnbr_fd.c \
		ft_unsignedint.c ft_puthxs_u.c ft_putstr_fd.c
OBJS = $(SRCS:.c=.o)
DELETE = rm -f
NAME = printf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELETE) $(OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
