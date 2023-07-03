# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 12:33:19 by dcarro-m          #+#    #+#              #
#    Updated: 2023/07/03 09:20:12 by dcarro-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = ar rcs

SOURCES =	ft_putchar.c	\
			ft_putstr.c	\
			ft_hexadec.c	\
			ft_voidptr.c	\
			ft_dec.c	\
			ft_unsignedec.c	\
			ft_printf.c	\
			ft_strlen.c	\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(LIB) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
