/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:25:48 by minsungk          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2021/04/24 15:33:09 by minsungk         ###   ########.fr       */
=======
/*   Updated: 2021/04/20 16:24:20 by minsungk         ###   ########.fr       */
>>>>>>> 8c77b60... fix makefile && Update printf
=======
/*   Updated: 2021/04/21 16:03:31 by minsungk         ###   ########.fr       */
>>>>>>> 395bf79... nbr 처리]
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
void		init_info(t_flag *info)
=======
int		init_info(t_info *info)
>>>>>>> eaba386... backup
=======
int		init_info(t_flag *info)
>>>>>>> efa964b... fix error
=======
void	init_info(t_flag *info)
>>>>>>> 8c77b60... fix makefile && Update printf
{
	info->minus = 0;
	info->zero = 0;
	info->width = 0;
	info->prec = -1;
	info->type = 0;
<<<<<<< HEAD
<<<<<<< HEAD
	info->nbr_base = 10;
	info->nbr_sign = 1;
}

<<<<<<< HEAD
int			ft_nbrlen(unsigned long long nbr, t_flag *info)
=======
int		ft_nbrlen(unsigned long long nbr, t_flag *info)
>>>>>>> 395bf79... nbr 처리]
{
	int i;

	i = 0;
<<<<<<< HEAD
	if (nbr == 0 && info->prec != 0)
		return (1);
	while (nbr)
	{
		i++;
		nbr /= info->nbr_base;
	}
	return (i);
}

char		*nbr_baseset(char type)
{
	if (type == 'u' || type == 'd' || type == 'i')
		return ("0123456789");
	else if (type == 'x' || type == 'p')
		return ("0123456789abcdef");
	else if (type == 'X')
		return ("0123456789ABCDEF");
	return (0);
=======
>>>>>>> eaba386... backup
=======
	info->nbr_base = 10;
	info->nbr_sign = 1;
>>>>>>> 95e07a6... test
}
=======
	if (nbr == 0 || info->prec != 0)
		return (1);
	while(nbr)
	{
		nbr /= info->nbr_base;
		i++;
	}
	return (i);
}
>>>>>>> 395bf79... nbr 처리]
