# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 17:30:24 by bamsyah           #+#    #+#              #
#    Updated: 2024/05/20 02:25:49 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		Utils/ft_putbase.c \
		Utils/ft_putchar_len.c \
		Utils/ft_putnbr_len.c \
		Utils/ft_putstr_len.c \
		Utils/ft_putunbr_len.c \
		Utils/ft_putbase.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(OBJ) $(NAME)

re : fclean all
