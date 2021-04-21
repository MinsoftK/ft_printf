#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("--->|%10s|<----\n","abc");
	ft_printf("--->|%s|<---- ", NULL);
}
