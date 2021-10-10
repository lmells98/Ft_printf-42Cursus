#include "../includes/ft_printf.h"
#include "./libft/includes/libft.h"

#include <stdio.h>

int	check_is_neg(long int nbr)
{
	if (nbr < 0)
	{
		printf("\nHELLO\n");
		write(1, "-", 1);
		return (1);
	}
	else
		return (0);
}

static int	get_nbr_len(long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		len += 1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		len += 1;
	}
	return (len);
}

/*
 * void	dump_arr(void *array)
 * {
 * 		char			ch_p;
 * 		char			*temp;
 * 		unsigned int	i;
 *
 * 		if (!array)
 * 		return ;
 * 		temp = (char *)array;
 * 		for (i = 0; i < ft_strlen((char *)array); i++)
 * 		{
 * 			ch_p = temp[i];
 * 			printf("\nindex=%i\tchar=%c", i, ch_p);
 * 			}
 * 		printf("\n\n");
 * 	}
*/

int	li_itoa(long int nbr)
{
	int	len;
	int	ret;
	char	*values;

	ret = 0;
	len = get_nbr_len(nbr);
	values = (char *)malloc((len + 1) * sizeof(char));
	values[0] = '0';
	values[len] = 0;
	if (nbr < 0)
	{
		values[0] = '-';
		nbr *= -1;
	}
	while (nbr && len-- > 0)
	{
		values[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
//	dump_arr(values);
	ret += print_str(values);
	free(values);
	return (ret);
}

int	print_nbr_types(char type, va_list *arg_p)
{
	int	ret;

	ret = 0;
	if (ft_strchr("di", type))
		ret += li_itoa(va_arg(*arg_p, int));
	return (ret);
}
