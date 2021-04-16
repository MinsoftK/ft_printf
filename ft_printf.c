/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:14:40 by minsungk          #+#    #+#             */
/*   Updated: 2021/03/30 19:56:57 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		format_type(va_list ap, t_flag* info)
{
	int sum;

	sum = 0;
	if (info->type == 'c')
		sum = printf_char(va_arg(ap, int), info);
	else if (info->type == '%')
		sum = printf_char('%', info);
	else if (info->type == 's')
		sum = printf_string(va_arg(ap, char*), info);
	else if (info->type == 'd' || info->type == 'i')
		sum = printf_nbr(va_arg(ap, int), info);
	else if (info->type == 'x' || info->type == 'X' || info->type == 'u')
		sum = printf_nbr(va_arg(ap, unsigned int), info);
	else if (info->type == 'p')
		sum = printf_nbr(va_arg(ap, unsigned long long), info);
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

int		check_format(va_list ap, char *str, t_flag *info, int i)
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

int		ft_printf(const char *str, ...)
{
	va_list 	ap;
	int			i;
	int			sum;
	t_flag		*info;

	info = malloc(sizeof(t_flag) * 1);
	if (!info)
		return (-1);
	va_start(ap, str);
	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '%' && str[i] != '\0')
			sum += ft_putchar(str[i++]);
		if (str[i] == '%')
		{
			init_info(info);
			while (str[++i] != '\0' && !(ft_strchr(TYPE, str[i])))
				check_format(ap, str, info, i);
			info->type = str[++i];
			if ((info->minus == 1 || info->prec > -1) && info->type !='%')
				info->zero = 0;
			sum += format_type(ap, info);
		}
	}
	free(info);
	return (sum);
}

int main()
{
	int num;
	num = printf("test->%-10.3d<-\n", 5);
	printf("%-c",'a');
//	ft_printf("ft_printf ----->%-10.3d<-----", 5);
	return (0);
}
