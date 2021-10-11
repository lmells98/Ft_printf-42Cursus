#include "../includes/ft_printf.h"
#include "./libft/includes/libft.h"

static short	check_is_neg(long int nbr)
{
	if (nbr < 0)
	{
		return (1);
	}
	else
		return (0);
}

static int	get_nbr_len(unsigned long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		len += 1;
	}
	return (len);
}

int	print_digits(unsigned long int nbr, int sign)
{
	int		ret;
	int		len;
	char	*values;

	ret = 0;
	len = get_nbr_len(nbr);
	if (sign)
		len += 1;
	values = (char *)malloc((len + 1) * sizeof(char));
	if (values)
	{
		values[0] = '0';
		values[len] = 0;
		if (sign == 1)
			values[0] = '-';
		while (nbr && len-- > 0)
		{
			values[len] = (nbr % 10) + '0';
			nbr /= 10;
		}
		ret += print_str(values);
	}
	free(values);
	return (ret);
}

int	itoa(long int nbr)
{
	int		ret;
	int		sign;

	ret = 0;
	sign = check_is_neg(nbr);
	if (sign)
		nbr *= -1;
	ret += print_digits(nbr, sign);
	return (ret);
}

int	print_nbr_types(char type, va_list *arg_p)
{
	int	ret;

	ret = 0;
	if (ft_strchr("di", type))
		ret += itoa(va_arg(*arg_p, int));
	else if (type == 'u')
		ret += print_digits(va_arg(*arg_p, unsigned int), 0);
	return (ret);
}
