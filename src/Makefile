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

 NAME = $(BIN_DIR)/libft.a
 OBJ_DIR = ../obj
 BIN_DIR = ../bin
 INC_DIR = ../inc
 SRC_DIR = .
 OBJS	 = $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/ \
		   $(OBJ_DIR)/

 CC = gcc
 CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

 $(NAME) : $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
 
 $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -c -MD $(CFLAGS) $< -o $@

 -include $(OBJ_DIR)/*.d

 all : $(NAME)

 .PHONY: clean
 clean :
	@rm -r $(OBJ_DIR)
 
 .PHONY: fclean
 fclean : clean
	@rm -r $(NAME)

 .PHONY: re
 re : fclean all