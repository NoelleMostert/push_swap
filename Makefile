# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 12:57:38 by nmostert          #+#    #+#              #
#    Updated: 2018/09/04 13:40:21 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker

CFLAGS = -Wall -Werror -Wextra
CC = gcc $(CFLAGS)

LFLAGS = -L ./libft/
LFT = -lft

SRC_P = ./helpers/
OBJ_P = ./objs/
INC = ./includes/

CFILES =  print.c \
		   sorting.c \
		   pushing.c \
		   rotating.c \
		   swaping.c \
		   ft_flags.c \

OBJ_N = $(CFILES:%.c=%.o)

SRC = $(addprefix $(SRC_P)/,$(SRC_N))
OBJ = $(addprefix $(OBJ_P)/,$(OBJ_N))

all: $(NAME1) $(NAME2)

$(NAME1): $(OBJ) $(INC) ./mains/push_swap.c
	@make -C./libft/
	@$(CC) -o $@  $(OBJ) ./mains/push_swap.c  $(LFLAGS) $(LFT)

$(NAME2): $(OBJ) $(INC) ./mains/checker.c
	@make -C./libft/
	@$(CC)  -o $@ $(OBJ) ./mains/checker.c $(LFLAGS) $(LFT)

$(OBJ_P)%.o: $(SRC_P)%.c
	@mkdir $(OBJ_P) 2> /dev/null || true
	@$(CC) -I$(INC) -o $@ -c $<

clean: cleanlib
	/bin/rm -rf $(OBJ)
	/bin/rm -rf $(OBJ_P) 2> /dev/null || true

cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@rm -f $(NAME1)
	@rm -f $(NAME2)

fcleanlib:
	@make fclean -C ./libft/

re : fclean all

.PHONY: clean fclean re
