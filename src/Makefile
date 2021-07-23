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
SRC_DIR = .
OBJS     = $(OBJ_DIR)/ft_strlen.o \
           $(OBJ_DIR)/ft_strncmp.o

CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(OBJ_DIR)/%.o : %.c
        mkdir -p $(OBJ_DIR)
        $(CC) -c -MD $(CFLAGS) $< -o $@

$(NAME) : $(OBJS)
        $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
        @rm -r $(OBJ_DIR)

fclean : clean
        @rm -r $(NAME)

re : fclean all