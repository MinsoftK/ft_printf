#include "ft_printf.h"

int		put_minus(t_flag *info, char **temp)
{
	char	*ptr;

	if ((info->type == 'i' || info->type == 'd') && info->nbr_sign == -1)
	{
		if (info->zero == 0)
		{
			ptr = *temp;
			*temp = ft_strjoin("-", *temp);
			free(ptr);
		}
		else
		{
			
		}
		//유틸에 함수를 따로 만들어서 넣어주기 
	}
	return (1);
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
		return (NULL);
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

	return (sum);
}
