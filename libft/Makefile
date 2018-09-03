# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 08:56:15 by nmostert          #+#    #+#              #
#    Updated: 2018/09/03 17:39:30 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT_SRC_PATH =./libft_src/
STACK_SRC_PATH =./stack_src/
OBJ_P =./objs/
IDIR =./includes/

CFLAGS = -Wall -Wextra -Werror -I$(IDIR)
CC = gcc $(CFLAGS)

OBJ=$(wildcard ./objs/*.o)

all: $(NAME)

$(NAME): SUBDIR
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	find . -name "*.h.gch" -delete

SUBDIR:
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@make -C $(LIBFT_SRC_PATH)
	@make -C $(STACK_SRC_PATH)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -rf $(OBJ_P) 2> /dev/null || true

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
