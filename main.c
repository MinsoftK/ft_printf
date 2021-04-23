#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i = 198;
	printf("-->|%04i|<--\n", i);
	ft_printf("-->|%04i|<--\n", i);
}
