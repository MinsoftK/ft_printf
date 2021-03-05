# ft_printf


🎯 Object
Recode printf. Learn how to use variadic arguments.

# Mandatory part
### Program name

libftprintf.a

### Turn in ﬁles

* .c, /.c, *.h, /.h, Makefile

### Makeﬁle

all, clean, fclean, re, bonus

### External functs.

malloc, free, write, va_start, va_arg, va_copy, va_end

### Libft authorized

yes

# Description
Write a library that contains ft_printf, a function that will mimic the real printf

ft_printf의 프로토타입은 int ft_printf(const char *, …); 이여야 합니다.
당신은 libc의 printf 함수를 recode해야 합니다.
원래의 printf 함수처럼 buffer 관리를 해서는 안 됩니다.
다음과 같은 conversions를 관리 할 것입니다 : cspdiuxX%
모든 conversions에서 ‘-0.*’ 플래그와 minimum field width의 조합을 관리 할 것입니다.
원래의 printf 함수와 비교될 것입니다.

