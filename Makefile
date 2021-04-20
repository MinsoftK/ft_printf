# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 20:24:54 by minsungk          #+#    #+#              #
#    Updated: 2021/04/20 15:28:47 by minsungk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		=libft
LIBFT_LIB	=libft.a
RM			= rm -f
SRCS		= ft_printf.c printf_char.c utils.c 
OBJS 		= $(SRCS:.c=.o)
INCS		= .
CC			= gcc
CFALGS		= -Wall -Wextra -Werror -Iinclude

%.o : %.c
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	ar rc $(NAME) $(OBJS)

.PHONEY: clean

all : $(NAME)

clean : 
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

fclean :
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

re:
	fclean all
