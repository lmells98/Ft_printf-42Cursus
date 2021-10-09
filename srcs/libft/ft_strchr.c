#include "./includes/libft.h"

int	ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s && *s != '\0')
	{
		if (*s == (char)c)
			return ((char)c);
		s++;
	}
	return (0);
}
