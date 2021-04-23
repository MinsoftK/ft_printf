#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include "ft_printf.h"

int main()
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
	printf("--->|%10s|<----\n","abc");
<<<<<<< HEAD
>>>>>>> b6b3800... print_string
	ft_printf("--->|%s|<---- ", NULL);
>>>>>>> 07a0d9c... print_string upload
=======
	ft_printf("--->|%10s|<---- ", "abc");
>>>>>>> ec14b7a... fix print space
=======
	printf("--->|%0d|<----\n", -12);
	ft_printf("--->|%.5d|<----",1000);
>>>>>>> 8799042... test
=======
	printf("--->|%10.3d|<----\n", -1111);
	ft_printf("--->|%10.3d|<----\n", -1111);
>>>>>>> 0e4ebde... malloc error
}
