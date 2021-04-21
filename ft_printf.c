/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:14:40 by minsungk          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2021/04/26 19:31:52 by minsungk         ###   ########.fr       */
=======
/*   Updated: 2021/03/30 15:04:41 by minsungk         ###   ########.fr       */
>>>>>>> a8e0b1f... printf 작성중
=======
/*   Updated: 2021/03/30 16:47:00 by minsungk         ###   ########.fr       */
>>>>>>> 6e98197... test
=======
/*   Updated: 2021/03/30 19:54:48 by minsungk         ###   ########.fr       */
>>>>>>> 574be6f... test
=======
/*   Updated: 2021/03/30 19:56:57 by minsungk         ###   ########.fr       */
>>>>>>> 24072ef... test
=======
/*   Updated: 2021/04/20 14:41:25 by minsungk         ###   ########.fr       */
>>>>>>> da665fd... fix makefile
=======
/*   Updated: 2021/04/20 16:15:04 by minsungk         ###   ########.fr       */
>>>>>>> 8c77b60... fix makefile && Update printf
=======
/*   Updated: 2021/04/20 17:41:49 by minsungk         ###   ########.fr       */
>>>>>>> acb77c4... string 처리 부분 시작
=======
/*   Updated: 2021/04/20 18:12:46 by minsungk         ###   ########.fr       */
>>>>>>> a138d87... update
=======
/*   Updated: 2021/04/21 12:38:15 by minsungk         ###   ########.fr       */
>>>>>>> 07a0d9c... print_string upload
=======
/*   Updated: 2021/04/21 14:29:58 by minsungk         ###   ########.fr       */
>>>>>>> b6b3800... print_string
=======
/*   Updated: 2021/04/21 15:06:42 by minsungk         ###   ########.fr       */
>>>>>>> f6873f0... print_nbr 작성 시작
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
int		format_type(va_list ap, t_flag *info)
=======
=======
int		check_format()
=======
int		check_format(va_list ap, char *str, t_flag *info, int i)
>>>>>>> eaba386... backup
=======
int		format_type(va_list ap, t_info* info)
>>>>>>> 84c1733... print type
=======
int		format_type(va_list ap, t_flag* info)
>>>>>>> ee0f69d... fix error
{
	int sum;

	sum = 0;
	if (info->type == 'c')
	{
		sum = print_char(va_arg(ap, int), info);
	}
	else if (info->type == '%')
		sum = print_char('%', info);
	else if (info->type == 's')
		sum = print_string(va_arg(ap, char*), info);
	else if (info->type == 'd' || info->type == 'i')
		sum = print_nbr(va_arg(ap, int), info);
	else if (info->type == 'x' || info->type == 'X' || info->type == 'u')
		sum = print_nbr(va_arg(ap, unsigned int), info);
	else if (info->type == 'p')
		sum = print_nbr(va_arg(ap, unsigned long long), info);
	return (sum);
}

void	check_width_prec(va_list ap, char *str, t_flag *info, int i)
{
			if (ft_isdigit(str[i]))
		{
			if (info->prec == -1)
				info->width = info->width * 10 + str[i] - 48;
			else
				info->prec = info->prec * 10 + str[i] - 48;
		}
		else if (str[i] == '*')
		{
			if (info->prec == - 1)
			{
				info->width = va_arg(ap, int);
				if (info->width < 0)
				{
					info->minus = 1;
					info->width *= -1;
				}
			}
			else
				info->prec = va_arg(ap, int);
		}
}

void	check_format(va_list ap, char *str, t_flag *info, int i)
{
	if (str[i] == '-')
		info->minus = 1;
	else if (str[i] == '0' && info->width == 0 && info->prec == 0)
		info->zero = 1;
	else if (str[i] == '.')
		info->prec = 0;
	else if (ft_isdigit(str[i]) || str[i] == '*')
		check_width_prec(ap, str, info, i);	
}

<<<<<<< HEAD
>>>>>>> 6e98197... test
int		ft_printf(const char *str, ...)
>>>>>>> 3fada60... test
{
	int sum;

	sum = 0;
	if (info->type == 'c')
	{
		sum = print_char(va_arg(ap, int), info);
	}
	else if (info->type == '%')
		sum = print_char('%', info);
	else if (info->type == 's')
		sum = print_string(va_arg(ap, char*), info);
	else if (info->type == 'd' || info->type == 'i')
		sum = print_nbr(va_arg(ap, int), info);
	else if (info->type == 'x' || info->type == 'X' || info->type == 'u')
		sum = print_nbr(va_arg(ap, unsigned int), info);
	else if (info->type == 'p')
		sum = print_nbr(va_arg(ap, unsigned long long), info);
	return (sum);
}

void	check_width_prec(va_list ap, char *str, t_flag *info, int i)
{
	if (ft_isdigit(str[i]))
	{
		if (info->prec == -1)
			info->width = info->width * 10 + str[i] - 48;
		else
			info->prec = info->prec * 10 + str[i] - 48;
	}
	else if (str[i] == '*')
	{
		if (info->prec == -1)
		{ 
			info->width = va_arg(ap, int);
			if (info->width < 0)
			{
				info->minus = 1;
				info->width *= -1;
			}
		}
		else
			info->prec = va_arg(ap, int);
	}
}

void	check_format(va_list ap, char *str, t_flag *info, int i)
{
	if (str[i] == '-')
		info->minus = 1;
	else if (str[i] == '0' && info->width == 0 && info->prec == -1)
		info->zero = 1;
	else if (str[i] == '.')
		info->prec = 0;
	else if (ft_isdigit(str[i]) || str[i] == '*')
		check_width_prec(ap, str, info, i);
}

int		parse_format(va_list ap, char *str)
{
	int		i;
	int		sum;
	t_flag	*info;

	i = 0;
	sum = 0;
	if (!(info = malloc(sizeof(t_flag) * 1)))
=======
int		parse_format(va_list ap, char *str)
{
	int 	i;
	int 	sum;
	t_flag 	*info;

	i = 0;
	sum = 0;
	info = malloc(sizeof(t_flag) * 1);
	if (!info)
>>>>>>> 8c77b60... fix makefile && Update printf
		return (-1);
	while (str[i] != '\0')
	{
		while (str[i] != '%' && str[i] != '\0')
<<<<<<< HEAD
<<<<<<< HEAD
			sum += ft_putchar_fd(str[i++]);
		if (str[i] == '%')
		{
			init_info(info);
			while (str[++i] != '\0' && !(ft_strchr(TYPE, str[i])))
				check_format(ap, str, info, i);
			info->type = str[i++];
<<<<<<< HEAD
			if ((info->minus == 1 || info->prec > -1) && info->type != '%')
				info->zero = 0;
			sum += format_type(ap, info);
		}
		if (str[i] == '-')
		{
			sum += ft_putchar
=======
			sum += ft_putchar(str[i++]);
=======
			sum += ft_putchar_fd(str[i++]);
>>>>>>> 8c77b60... fix makefile && Update printf
		if (str[i] == '%')
		{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
			
>>>>>>> a8e0b1f... printf 작성중
=======
			info->minus = 0;
			info->zero = 0;
			info->width = 0;
			info->prec = -1;
			info->type = 0;
=======
			init_info(struct *info);
>>>>>>> eaba386... backup
=======
			init_info(info);
>>>>>>> ee0f69d... fix error
			while (str[++i] != '\0' && !(ft_strchr(TYPE, str[i])))
				check_format(ap, str, info, i);
<<<<<<< HEAD

<<<<<<< HEAD
			}
>>>>>>> 6e98197... test
=======
		}
		if (str[i] == '-')
		{
			sum += ft_putchar;
>>>>>>> eaba386... backup
=======
			info->type = str[++i];
=======
>>>>>>> acb77c4... string 처리 부분 시작
			if ((info->minus == 1 || info->prec > -1) && info->type !='%')
				info->zero = 0;
			sum += format_type(ap, info);
>>>>>>> 84c1733... print type
		}
	}
	free(info);
	return (sum);
}

int		ft_printf(const char *str, ...)
{
<<<<<<< HEAD
<<<<<<< HEAD
	va_list		ap;
=======
	va_list 	ap;
>>>>>>> 8c77b60... fix makefile && Update printf
	int			sum;

	va_start(ap, str);
	sum = parse_format(ap, (char *)str);
	va_end(ap);
	return (sum);
<<<<<<< HEAD
=======
	int num;
	num = printf("test->%-10.3d<-\n", 5);
	printf("%-c",'a');
	ft_printf("ft_printf ----->%-10.3d<-----", 5);
	return (0);
>>>>>>> 8f3bd28... test
=======
>>>>>>> 8c77b60... fix makefile && Update printf
}
