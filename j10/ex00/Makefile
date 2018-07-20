# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phperrot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 11:36:05 by phperrot          #+#    #+#              #
#    Updated: 2018/07/19 16:13:05 by phperrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
.O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = ../includes/ft.h
LIB = libft.a

all: compilation

compilation:
	gcc -c $(addprefix srcs/, $(SRC)) -I $(addprefix includes/, $(HEADER))  && ar rc $(LIB) $(.O)

clean:
	 rm -f *.o

fclean:
	rm $(LIB)

re: fclean all
