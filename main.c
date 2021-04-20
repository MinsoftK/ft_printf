#include <stdio.h>
<<<<<<< HEAD
#include "ft_printf.h"

int main()
{
	int i = 198;
	printf("-->|%-0.10d|<--\n", 198);
	ft_printf("-->|%-0.10i|<--\n", i);
=======
#include "ft_printf.c"

int main()
{
	printf("%c\n", 'a');
	ft_printf("--->|%c|<---- ", 'a');
>>>>>>> 72c2209... fix header
}
