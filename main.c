#include "./includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ret;
	char	*test;

	ret = 0;
	test = "";

	printf("EO:\n[");
	ret += printf("%s%%", test);
	printf("] chars = %i\n", ret);
	printf("AO:\n");
	write(1, "[", 1);
	ret = 0;
	ret += printf("%s%%", test);
	printf("] chars = %i\n", ret);
}
