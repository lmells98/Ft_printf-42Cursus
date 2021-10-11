#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int 	ret;
	int		nb;

	ret = 0;
	nb = 420;

	printf("EO:\n[");
	ret += printf("%x", nb);
	printf("] chars = %i\n", ret);
	printf("AO:\n");
	write(1, "[", 1);
	ret = 0;
	ret += ft_printf("%x", nb);
	printf("] chars = %i\n", ret);
}
