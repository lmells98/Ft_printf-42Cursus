#include "./includes/libft.h"

static	int	get_digits(unsigned long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

char	*ft_ul_itoa(unsigned long int nbr, size_t sign)
{
	int		len;
	char	*values;

	len = get_digits(nbr);
	if (sign)
		len += 1;
	values = (char *)malloc((len + 1) * sizeof(char));
	if (values)
	{
		values[0] = '0';
		values[len] = 0;
		if (sign)
			values[0] = '-';
		while (nbr && len > 0)
		{
			len--;
			values[len] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	return (values);
}

char	*ft_itoa(long int nbr)
{
	int	sign;

	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	return (ft_ul_itoa(nbr, sign));
}
