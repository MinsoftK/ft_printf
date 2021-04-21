/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:12:27 by minsungk          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2021/04/24 15:06:51 by minsungk         ###   ########.fr       */
=======
/*   Updated: 2021/03/30 16:27:58 by minsungk         ###   ########.fr       */
>>>>>>> a8e0b1f... printf 작성중
=======
/*   Updated: 2021/04/20 16:24:27 by minsungk         ###   ########.fr       */
>>>>>>> 8c77b60... fix makefile && Update printf
=======
/*   Updated: 2021/04/20 16:40:48 by minsungk         ###   ########.fr       */
>>>>>>> 72c2209... fix header
=======
/*   Updated: 2021/04/21 15:05:08 by minsungk         ###   ########.fr       */
>>>>>>> f6873f0... print_nbr 작성 시작
=======
/*   Updated: 2021/04/21 16:25:14 by minsungk         ###   ########.fr       */
>>>>>>> 395bf79... nbr 처리]
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# define TYPE "cspdiuxX%"

typedef struct	s_flag
{
	int		minus;
	int		zero;
	int		width;
	int		prec;
	char	type;
	int		nbr_base;
	int		nbr_sign = 1;
}				t_flag;

/*
****************Main***********
*/
<<<<<<< HEAD

int				ft_printf(const char *str, ...);
int				parse_format(va_list ap, char *str);
void			check_format(va_list ap, char *str, t_flag *info, int i);
void			check_width_prec(va_list ap, char *str, t_flag *info, int i);
int				format_type(va_list ap, t_flag *info);

/*
****************Print***********
*/

int				print_char(int point, t_flag *info);
int				put_width(int width, int len, int zero);
int				print_string(char *str, t_flag *info);
char			*prec_str(char *str, int prec_len, int len);
int				put_width_str(char **str, t_flag *info);
void			put_width_str_free(t_flag *info, char **str, char **width);
int				print_nbr(unsigned long long nbr, t_flag *info);
int				nbr_put_pointer(char **temp);
int				nbr_put_minus(t_flag *info, char **temp);
int				nbr_put_minus2(int nbr_len, t_flag *info, char **temp);
int				prec_nbr(unsigned long long nbr, t_flag *info,
char **temp, int i);

/*
****************Util***********
=======
int		ft_printf(const char *, ...);
int		parse_format(va_list ap, char *str);
void	check_format(va_list ap, char *str, t_flag *info, int i);
void	check_width_prec(va_list ap, char *str, t_flag *info, int i);
int		format_type(va_list ap, t_flag* info);

/*
****************Print***********
>>>>>>> c59ed9d... Update header
*/
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

void			init_info(t_flag *info);
int				make_info(t_flag *info);
int				ft_nbrlen(unsigned long long nbr, t_flag *info);
char			*nbr_baseset(char type);
=======
>>>>>>> a8e0b1f... printf 작성중

=======
int		printf_char(int point, t_flag *info);
=======
int		print_char(int point, t_flag *info);
>>>>>>> 8c77b60... fix makefile && Update printf
int		put_width(int width, int len, int zero);
int		print_string(char *str, t_flag *info);
char	*prec_str(char *str, int prec_len, int len);
int		put_width_str(char **str, t_flag *info);
int		print_nbr(unsigned long long nbr, t_flag *info);

/*
****************Util***********
*/
<<<<<<< HEAD
int		init_info(t_flag *info);
>>>>>>> efa964b... fix error
=======
void	init_info(t_flag *info);
<<<<<<< HEAD
>>>>>>> 8c77b60... fix makefile && Update printf
=======
int		ft_nbrlen(unsigned long long nbr, t_flag *info);
>>>>>>> 395bf79... nbr 처리]

#endif
