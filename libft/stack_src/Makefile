# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 10:06:00 by nmostert          #+#    #+#              #
#    Updated: 2018/08/27 12:17:08 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=stack.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror -I.
CFILES=peek.c \
	   stacknew.c \
	   isempty.c \

OBJ=$(CFILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(OBJ) -L ../libft_src -lft

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
