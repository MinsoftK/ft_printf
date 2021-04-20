#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("--->|%c|<----\n", 'b');
	ft_printf("--->|%%|<---- ", 'b');
}
