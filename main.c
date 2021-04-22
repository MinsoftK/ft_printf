#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("--->|%0d|<----\n", -12);
	ft_printf("--->|%.5d|<----",1000);
}
