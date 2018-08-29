# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 10:06:00 by nmostert          #+#    #+#              #
#    Updated: 2018/08/29 15:09:52 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=stack.a
CC=gcc
INCLUDES=../includes/
CFLAGS=-Wall -Wextra -Werror -I$(INCLUDES)
CFILES=peek.c \
	   stacknew.c \
	   isempty.c \
	   stackdel.c \
	   stackrot.c \
	   stackrevrot.c \
	   stackswap.c \
	   stackpush.c \
	   stackpop.c \

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
