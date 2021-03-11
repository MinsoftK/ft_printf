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
#include <stdio.h>
int		ft_printf(const char *str, ...)
{
	int num;
	int i;

	va_list ap;
	i = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		num = va_arg(ap, int);
	}
	va_end(ap);
	printf("num : %d", num);
	return (0);
}

int main()
{
	printf("test");
	ft_printf("this is %dth.", 6);
	return (0);
}
