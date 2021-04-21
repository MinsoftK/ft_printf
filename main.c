#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("--->|%.2s|<----\n","abc");
	ft_printf("--->|%s|<---- ", NULL);
}
