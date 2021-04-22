<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:35:29 by minsungk          #+#    #+#             */
/*   Updated: 2021/04/24 14:42:02 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD
<<<<<<< HEAD
char	*prec_str(char *str, int prec_len, int str_len)
{
	int		i;
	char	*temp;

	prec_len = prec_len < str_len ? prec_len : str_len;
	temp = (char *)malloc(sizeof(char) * prec_len + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < prec_len)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

void	put_width_str_free(t_flag *info, char **str, char **width)
{
	char *temp;

	if (info->minus == 0)
	{
		temp = *str;
		*str = ft_strjoin(*width, *str);
		free(temp);
	}
	else
	{
		temp = *str;
		*str = ft_strjoin(*str, *width);
		free(temp);
	}
	free(*width);
}

int		put_width_str(char **str, t_flag *info)
{
	char	*width;
	int		len;
	int		i;

	if (info->width <= (int)ft_strlen(*str))
		return ((int)ft_strlen(*str));
	len = info->width - (int)ft_strlen(*str);
	width = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		width[i] = (info->zero == 1) ? '0' : ' ';
		i++;
	}
	width[i] = '\0';
	put_width_str_free(info, str, &width);
	return (info->width);
}

=======
#include "ft_printf.h"

<<<<<<< HEAD
>>>>>>> a138d87... update
=======
char	*tmp_str(char *str, int prec_len, int len)
=======
char	*prec_str(char *str, int prec_len, int len)
>>>>>>> c04a4a7... nbr print 구현부
=======
char	*prec_str(char *str, int prec_len, int str_len)
>>>>>>> 8799042... test
{
	int i;
	char *temp;

	prec_len = prec_len < str_len ? prec_len : str_len;
	temp = (char *)malloc(sizeof(char) * prec_len + 1);
	if(!temp)
		return (NULL);
	i = 0;
	while (i < prec_len)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

void	put_width_str_free(t_flag *info, char **str, char **width)
{
	char *temp;

	if (info->minus == 0)
	{
		temp = *str;
		*str = ft_strjoin(width, *str);
		free (temp);
	}
	else
	{
		temp = *str;
		*str = ft_strjoin(*str, width); //동적할당 해제
		free (temp);
	}
	free(width);
}

int		put_width_str(char **str, t_flag *info)
{
	char 	*width;
	int		len;
	int		i;

	if (info->width <= (int)ft_strlen(*str))
		return ((int)ft_strlen(*str));
	len = info->width - ft_strlen(*str);
	width = (char *)malloc (sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		width[i] = (info->zero == 1) ? '0' : ' ';
		i++;
	}
	width[i] = '\0';
	put_width_str_free(info, str, &width);
	return (info->width);
}

>>>>>>> 07a0d9c... print_string upload
int		print_string(char *str, t_flag *info)
{
	int		sum;
	char	*temp;

	sum = 0;
<<<<<<< HEAD
<<<<<<< HEAD
	if (str == NULL)
		str = "(null)";
	if (info->prec == -1 || (size_t)info->prec > ft_strlen(str))
		info->prec = ft_strlen(str);
	temp = prec_str(str, info->prec, ft_strlen(str));
	sum = put_width_str(&temp, info);
	ft_putstr(temp);
	free(temp);
	return (sum);
=======
	while (str != '\0')
=======
	temp = str;
	if (str == NULL)
		str = "(null)";
	if (info->prec == - 1 || (size_t)info->prec > ft_strlen(str))
		info->prec = ft_strlen(str);
	temp = prec_str(str, info->prec, ft_strlen(str));
	sum = put_width_str(&temp, info);
	ft_putstr(temp);
	free(temp);
>>>>>>> 07a0d9c... print_string upload
	return(sum);
>>>>>>> a138d87... update
}
