#include "./includes/libft.h"

void	ft_putstr(const char *str)
{
	if (!str)
		return ;
	while (*str != '\0')
		write(1, str++, 1);
}
