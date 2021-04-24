#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i = 198;
	printf("-->|%.*i|<--\n", -10, i);
	ft_printf("-->|%0.-4i|<--\n", i);
}
