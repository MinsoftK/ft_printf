/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:05:23 by minsungk          #+#    #+#             */
/*   Updated: 2021/04/16 15:05:25 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		put_width(int width, int len, int zero)
{
	int		sum;

	sum = 0;
	while (len < width)
	{
		if (zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		len++;
		sum++;
	}
	return (sum);
}

int		printf_char(int point, t_flag *info)
{
	int sum;

	sum = 0;
	if (info->type == '%' && info->minus == 1)
		info->zero = 0;
	if (info->minus == 1)
		sum += ft_putchar(point);
	sum += put_width(info->width, 1, info->zero);
	if (info->minus == 0)
		sum += ft_putchar(point);
	return (sum);
}
