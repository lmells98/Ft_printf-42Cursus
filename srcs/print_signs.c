#include "../includes/ft_printf.h"
#include "./libft/includes/libft.h"

int	print_percent(char type)
{
	int	ret;

	ret = 0;
	if (type == '%')
		ret += print_char(type);
	return (ret);
}

int	print_sign(char type)
{
	int	ret;

	ret = 0;
	if (ft_strchr("px", type))
		ret += print_str("0x");
	else if (type == 'X')
		ret += print_str("0X");
	return (ret);
}
