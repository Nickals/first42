# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/09 18:18:24 by nmoncada          #+#    #+#              #
#    Updated: 2021/08/09 18:59:29 by nmoncada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	= libft.a

SRCS	= $(wildcard *.c)		 

LIBC	= ar -rcs

OBJS	= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

INCS	= libft.h

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(INCLUDE)
	$(LIBC) $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re .c .o
