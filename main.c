#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int i = 198;
	printf("-->|%-0.10d|<--\n", 198);
	ft_printf("-->|%-0.10i|<--\n", i);
}
