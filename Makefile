# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 20:24:54 by minsungk          #+#    #+#              #
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
#    Updated: 2021/03/30 16:48:10 by minsungk         ###   ########.fr        #
>>>>>>> 32d480c... test
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
RM		= rm -f
SRCS	= ft_printf.c
OBJS 	= $(SRCS:.c=.o)
CC		= gcc
<<<<<<< HEAD
CFALGS	= -Wall -Wextra -Werror 
INCLUDE = -Iinclude
=======
CFALGS	= -Wall -Wextra -Werror -Iinclude
>>>>>>> 32d480c... test

all : $(NAME)

%.o : %.c
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o) -I$(INCLUDE)
>>>>>>> ccb5aa7... test

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
=======
#    Updated: 2021/04/20 15:28:47 by minsungk         ###   ########.fr        #
=======
#    Updated: 2021/04/20 16:23:25 by minsungk         ###   ########.fr        #
>>>>>>> 8c77b60... fix makefile && Update printf
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a
RM			= rm -f
SRCS		= ./ft_printf.c ./print_char.c ./utils.c 
OBJS 		= $(SRCS:.c=.o)
INCS		= .
CC			= gcc
CFALGS		= -Wall -Wextra -Werror -Iinclude

%.o : %.c
	$(CC) $(CFALGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
<<<<<<< HEAD
	make all -C $(LIBFT)
>>>>>>> da665fd... fix makefile
=======
	make all -C $(LIBFT)/
>>>>>>> 8c77b60... fix makefile && Update printf
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	ar rc $(NAME) $(OBJS)

.PHONEY: clean
<<<<<<< HEAD
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
=======

all : $(NAME)

>>>>>>> da665fd... fix makefile
clean : 
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

fclean :
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

re:
	fclean all
<<<<<<< HEAD

bonus:	bonus:	$(OBJS) $(BOBJS) $(POBJS)
	ar rc $(NAME) $(BOBJS) $(OBJS) $(POBJS)
<<<<<<< HEAD
>>>>>>> ccb5aa7... test
=======
>>>>>>> 32d480c... test
=======
>>>>>>> da665fd... fix makefile
