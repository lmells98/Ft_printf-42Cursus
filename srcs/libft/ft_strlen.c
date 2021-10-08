#include "./includes/libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (*str++ != '\0')
		i++;
	return (i);
}
