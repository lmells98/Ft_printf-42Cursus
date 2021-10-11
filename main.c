#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int ret;
	int	test;

	ret = 0;
	test = 0;

	printf("EO:\n[");
	ret += printf("%d", test);
	printf("] chars = %i\n", ret);
	printf("AO:\n");
	write(1, "[", 1);
	ret = 0;
	ret += ft_printf("%d", test);
	printf("] chars = %i\n", ret);
}
