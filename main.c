#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include "ft_printf.h"

int main()
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	int i = 198;
	printf("-->|%-0.10d|<--\n", 198);
	ft_printf("-->|%-0.10i|<--\n", i);
=======
#include "ft_printf.c"
=======
#include "ft_printf.h"
>>>>>>> 0c98e51... add main

int main()
{
	printf("%c\n", 'a');
	ft_printf("--->|%c|<---- ", 'a');
>>>>>>> 72c2209... fix header
=======
	printf("--->|%c|<----\n", 'b');
=======
	printf("--->|%s|<----\n", "");
>>>>>>> a138d87... update
	ft_printf("--->|%%|<---- ", 'b');
>>>>>>> acb77c4... string 처리 부분 시작
=======
	printf("--->|%.2s|<----\n","abc");
	ft_printf("--->|%s|<---- ", NULL);
>>>>>>> 07a0d9c... print_string upload
}
