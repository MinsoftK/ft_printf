/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:14:40 by minsungk          #+#    #+#             */
/*   Updated: 2021/03/06 09:14:42 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		{
			sum += ft_putchar(str[i++]);
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
