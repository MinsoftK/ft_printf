/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:05:23 by minsungk          #+#    #+#             */
/*   Updated: 2021/04/20 16:38:19 by minsungk         ###   ########.fr       */
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
			ft_putchar_fd('0');
		else
			ft_putchar_fd(' ');
		len++;
		sum++;
	}
	return (sum);
}

int		print_char(int point, t_flag *info)
{
	int sum;

	sum = 0;
	if (info->type == '%' && info->minus == 1)
		info->zero = 0;
	if (info->minus == 1)
		sum += ft_putchar_fd(point);
	sum += put_width(info->width, 1, info->zero);
	if (info->minus == 0)
		sum += ft_putchar_fd(point);
	return (sum);
}
