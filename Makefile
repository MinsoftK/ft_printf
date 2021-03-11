# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 20:24:54 by minsungk          #+#    #+#              #
#    Updated: 2021/03/06 20:24:56 by minsungk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
RM		= rm -f
SRCS	= ft_printf.c

OBJS 	= $(SRCS:.c=.o)
CC		= gcc
CFALGS	= -Wall -Wextra -Werror -Iinclude

all : $(NAME)

%.o: %.c %.h
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
.PHONEY: clean
clean : 
	$(RM) $(OBJS)
fclean :
	$(RM) $(NAME)
re:
	fclean all
bonus:




