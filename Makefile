# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 20:24:54 by minsungk          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/04/24 16:28:07 by minsungk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a
RM			= rm -f
SRCS		= ./ft_printf.c ./print_char.c ./print_string.c ./print_nbr.c ./utils.c 
OBJS 		= $(SRCS:.c=.o)
INCS		= .
CC			= gcc
CFALGS		= -Wall -Wextra -Werror -Iinclude

%.o : %.c
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o) -I$(INCS)
=======
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
>>>>>>> ccb5aa7... test

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	ar rc $(NAME) $(OBJS)

.PHONEY: clean
<<<<<<< HEAD

all : $(NAME)

clean : 
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

fclean :
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

re:	fclean all
=======
clean : 
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME)

re:
	fclean all

bonus:	bonus:	$(OBJS) $(BOBJS) $(POBJS)
	ar rc $(NAME) $(BOBJS) $(OBJS) $(POBJS)
>>>>>>> ccb5aa7... test
