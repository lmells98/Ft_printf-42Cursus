#include "../includes/ft_printf.h"
#include "./libft/includes/libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	print_percent(char type)
{
	int	ret;

	ret = 0;
	if (type == '%')
	{
		write(1, "%", 1);
		ret += 1;
	}
	return (ret);
}

int	print_char_types(char type, va_list *arg_p)
{
	int	ret;

	ret = 0;
	if (ft_strchr("sc", type))
	{
		if (type == 's')
			ret += ft_putstr(va_arg(*arg_p, char *));
		else if (type == 'c')
			ret += ft_putchar(va_arg(*arg_p, int));
	}
	return (ret);
}
