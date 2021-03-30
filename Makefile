# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 20:24:54 by minsungk          #+#    #+#              #
#    Updated: 2021/03/08 18:36:16 by minsungk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
RM		= rm -f
SRCS	= ft_printf.c
OBJS 	= $(SRCS:.c=.o)
CC		= gcc
CFALGS	= -Wall -Wextra -Werror 
INCLUDE = -Iinclude

all : $(NAME)

%.o : %.c
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o) -I$(INCLUDE)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

.PHONEY: clean
clean : 
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME)

re:
	fclean all

bonus:	bonus:	$(OBJS) $(BOBJS) $(POBJS)
	ar rc $(NAME) $(BOBJS) $(OBJS) $(POBJS)
