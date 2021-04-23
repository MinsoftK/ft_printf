#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("--->|%10.3d|<----\n", -1111);
	ft_printf("--->|%10.3d|<----\n", -1111);
}
