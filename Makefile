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

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
 
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
