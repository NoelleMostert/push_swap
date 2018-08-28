# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 08:56:15 by nmostert          #+#    #+#              #
#    Updated: 2018/08/28 14:47:14 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT_SRC_PATH =./libft_src/
STACK_SRC_PATH=./stack_src/

CC=gcc

CFLAGS=-Wall -Wextra -Werror -I $(IDIR)

OBJ=$(LIBFT_SRC_PATH:%.c=%.o)
OBJ+=$(STACK_SRC_PATH:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_SRC_PATH)
	make -C $(STACK_SRC_PATH)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	make clean -C $(LIBFT_SRC_PATH)
	make clean -C $(STACK_SRC_PATH)
	rm -rf $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_SRC_PATH)
	#make fclean -C $(STACK_SRC_PATH)
	rm -rf $(NAME)

re: fclean $(NAME)
