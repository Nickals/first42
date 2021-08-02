# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoncada <nmoncada@student.42urduliz.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 19:10:27 by nmoncada          #+#    #+#              #
#    Updated: 2021/07/22 19:10:30 by nmoncada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_DIR = obj
INC = libft.h
SRC_DIR = .
OBJS     = $(OBJ_DIR)/ft_strlen.o \
           $(OBJ_DIR)/ft_strncmp.o \
		   $(OBJ_DIR)/ft_isalpha.o \
		   $(OBJ_DIR)/ft_isdigit.o \
		   $(OBJ_DIR)/ft_isalnum.o \
		   $(OBJ_DIR)/ft_isascii.o \
		   $(OBJ_DIR)/ft_isprint.o

CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS) $(INC)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	@rm -r $(OBJ_DIR)

fclean : clean
	@rm -r $(NAME)

re : fclean all
