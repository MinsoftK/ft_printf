#include "ft_printf.h"

int		put_prec(unsigned long long nbr, t_flag *info, char **temp)
{

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
	nbr_len += 

	return (sum);
}
