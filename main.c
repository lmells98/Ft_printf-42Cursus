#include "./includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ret;
	char	*chars;
	char	*test;

	ret = 0;
	test = "";
	chars = "\nchars = ";

	printf("EO:\n[");
	ret += printf(" %s ", test);
	printf("]%-s%-i\n", chars, ret);
	printf("AO:\n[");
	ret = 0;
	ret += ft_printf(" %s ", test);
	printf("]%-s%-i\n", chars, ret);
}
