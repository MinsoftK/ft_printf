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

int		check_format()
{

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
			info->minus = 0;
			info->zero = 0;
			info->width = 0;
			info->prec = -1;
			info->type = 0;
			while (str[++i] != '\0' && !(ft_strchr(TYPE, str[i])))
			{
				if (str[i] == '-')
					info->minus = 1;
				else if (str[i] == '0' && info->width == 0 && info->prec == 0)
					info->zero = 1;
				else if (str[i] == '.')
					info->prec = 0;
				else if (ft_isdigit(str[i]) || str[i] == '*')
				{
					if (ft_isdigit(str[i]))
					{
						if (info->prec == 0)
							info->width = info->width * 10 + str[i] - 48;
						else
							info->prec = info->prec * 10 + str[i] - 48;
					}
					else if (str[i] == '*')
					{
						if (info->prec == - 1)
						{
							
						}
						else
					}
				}

			}
		}
		if (str[i] == '-')
		{
			sum += ft_putchar
		}
	}

	return (0);
}

int main()
{
	int num;
	num = printf("test->%-10.3d<-\n", 5);
	printf("%d", num);
	ft_printf("ft_printf ----->%-10.3d<-----", 5);
	return (0);
}
