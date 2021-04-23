#include "ft_printf.h"

int		put_pointer(char **temp)
{
	char *ptr;
	ptr = *temp;
	*temp = ft_strjoin("0x", *temp);
	free(ptr);
	return(2);
}

int		put_minus(t_flag *info, char **temp)
{
	char	*ptr;
	int		sum;

	sum = 0;
	if ((info->type == 'i' || info->type == 'd') && info->nbr_sign == -1)
	{
		if (info->zero == 0)
		{
			ptr = *temp;
			*temp = ft_strjoin("-", *temp);
			free(ptr);
			sum = 1;
		}
	}
	return (sum);
}

int		put_minus2(int nbr_len, t_flag *info, char **temp)
{
	int sum;
	char *ptr;

	sum = 0;
	if (info->zero == 1 && info->nbr_sign == -1)
	{
		if (nbr_len >= info->width)
		{
			ptr = *temp;
			*temp = ft_strjoin("-", *temp);
			free(ptr);
			sum = 1;
		}
		else if (nbr_len < info->width)
			*temp[0] = '-';
	}
	return (sum);
}

int		put_prec(unsigned long long nbr, t_flag *info, char **temp)
{
	int		nbr_len;
	int		res;
	int		i;

	nbr_len = ft_nbrlen(nbr, info);
	res = (info->prec > nbr_len) ? info->prec : nbr_len;
	*temp = (char *)malloc (sizeof(char) * res + 1);
	if(!(*temp))
		return (0);
	(*temp)[res] = '\0';
	i = 0;
	while(nbr_len + i < res)
	{
		(*temp)[i] = '0';
		i++;
	}
	i = 1;
	if (nbr == 0)
		(*temp)[res - i] ='0';
	while (nbr)
	{
		(*temp)[res - i] = nbr_baseset(info->type)[nbr % info->nbr_base];
		nbr /= info->nbr_base;
		i++;
	}
	return (nbr_len);
}

int 	print_nbr(unsigned long long nbr, t_flag *info)
{
	char	*temp;
	int		nbr_len;
	int		sum;

	sum = 0;
	if (info->type == 'x' || info->type == 'X' || info->type == 'p')
		info->nbr_base = 16;
	if ((info->type == 'd' || info->type == 'i') && (int)nbr < 0)
	{
		info->nbr_sign = -1;
		nbr = -nbr;
	}
	nbr_len = put_prec(nbr, info, &temp);
	nbr_len += put_minus(info, &temp);
	if (info->type == 'p')
		nbr_len += put_pointer(&temp);
	sum = put_width_str(&temp, info);
	sum += put_minus2(nbr_len, info, &temp);
	ft_putstr(temp);
	free(temp);
	return (sum);
}
