# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmostert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 10:06:00 by nmostert          #+#    #+#              #
#    Updated: 2018/09/05 14:10:34 by nmostert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES=../includes/
OBJ_PATH=../objs/
SRC_NAME= peek.c \
	   stacknew.c \
	   isempty.c \
	   stackdel.c \
	   stackrot.c \
	   stackrevrot.c \
	   stackswap.c \
	   stackpush.c \
	   stackpop.c \
	   stackmin.c \
	   stackindex.c \

FLAGS= -Wall -Werror -Wextra
OBJ = $(SRC_NAME:%.c=%.o)
CC = gcc $(FLAGS)
FILES=$(addprefix $(OBJ_PATH), $(OBJ))

all: $(SRC_NAME)
ifeq ("$(wildcard $(FILES))","")
	$(CC) -I$(INCLUDES) -c $(SRC_NAME)
	mv *.o $(OBJ_PATH)
endif

clean:
	/bin/rm -f $(addprefix $(OBJ_PATH), $(OBJ))

re: clean all
