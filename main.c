#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int 	ret;
//	int		nb;
//	void	*val;

	ret = 0;
//	nb = 420;
//	val = &nb;

	printf("EO:\n[");
	ret += printf(" %p ", (void *)16);
	printf("] chars = %i\n", ret);
	printf("AO:\n");
	write(1, "[", 1);
	ret = 0;
	ret += ft_printf(" %p ", (void *)16);
	printf("] chars = %i\n", ret);
}
