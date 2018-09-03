# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 10:06:00 by nmostert          #+#    #+#              #
#    Updated: 2018/09/03 17:26:03 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES=../includes/
OBJ_P=../objs/
CFLAGS = -Wall -Werror -Wextra
CFILES = peek.c \
	   stacknew.c \
	   isempty.c \
	   stackdel.c \
	   stackrot.c \
	   stackrevrot.c \
	   stackswap.c \
	   stackpush.c \
	   stackpop.c \

OBJ = $(C_FILES:%.c=%.o)
CC = gcc $(CFLAGS)
FILES=$(addprefix $(OBJ_P), $(OBJ))

all: $(C_FILES)
ifeq ("$(wildcard $(FILES))","")
	$(CC) -I$(INCLUDES) -c $(CFILES)
	mv *.o $(OBJ_P)
endif

clean:
	/bin/rm -f $(addprefix $(OBJ_P), $(OBJ))

re: clean all

.PHONY: clean fclean re
