#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int ret;
	int	test;

	ret = 0;
	test = INT_MIN;

	printf("EO:\n[");
	ret += printf("%i", test);
	printf("] chars = %i\n", ret);
	printf("AO:\n");
	write(1, "[", 1);
	ret = 0;
	ret += ft_printf("%i", test);
	printf("] chars = %i\n", ret);
}
