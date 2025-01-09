# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanrome <juanrome@student.42madrid.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 17:02:51 by juanrome          #+#    #+#              #
#    Updated: 2025/01/06 18:51:18 by juanrome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

SRCS = ft_printf.c ft_putmemadress.c ft_putunbr.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_puthex_min.c ft_puthex_upp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Biblioteca $(NAME) creada."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Archivos objeto eliminados."
	
fclean: clean
	@rm -f $(NAME)
	@echo "Biblioteca $(NAME) eliminada."
	
re: fclean all

.PHONY: all clean fclean re