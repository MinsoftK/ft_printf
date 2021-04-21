#include "ft_printf.h"

char	*tmp_str(char *str, int prec_len, int len)
{
	int i;
	char *temp;

	prec_len = prec_len < len ? prec_len : len;
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

int		put_width_str(char **str, t_flag *info)
{
	char 	*width;
	int		len;
	int		i;

	if (info->width <= (int)ft_strlen(str))
		return ((int)ft_strlen(str));
	len = info->width - ft_strlen(*str) + 1;
	width = (char *)malloc (sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		width[i] = (info->zero == 1) ? '0' : ' ';
		i++;
	}
	width[i] = '\0';
	if (info->minus == 0)
		*str = ft_strjoin(width, *str);
	else
		*str = ft_strjoin(*str, width);
	free(width);
	return (info->width);
}

int		print_string(char *str, t_flag *info)
{
	int		sum;
	char	*temp;

	sum = 0;
	temp = str;
	if (str == NULL)
		str = "(null)";
	if (info->prec == - 1 || (size_t)info->prec > ft_strlen(str))
		info->prec = ft_strlen(str);
	temp = tmp_str(str, info->prec, ft_strlen(str));
	sum = put_width_str(&temp, info);
	ft_putstr(temp);
	free(temp);
	return(sum);
}
