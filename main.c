#include <stdio.h>
#include "ft_printf.c"

int main()
{
	printf("%c\n", 'a');
	ft_printf("--->|%c|<---- ", 'a');
}
