/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:12:27 by minsungk          #+#    #+#             */
/*   Updated: 2021/04/24 15:06:51 by minsungk         ###   ########.fr       */
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
	int		nbr_sign;
}				t_flag;

/*
****************Main***********
*/

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
*/

void			init_info(t_flag *info);
int				make_info(t_flag *info);
int				ft_nbrlen(unsigned long long nbr, t_flag *info);
char			*nbr_baseset(char type);

#endif
