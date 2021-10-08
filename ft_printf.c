#include "./includes/ft_printf.h"

extern size_t	ft_strlen(const char *format);

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

char	*ft_strdup(char *src)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (*src && src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	arg_p;

	len = 0;
	if (!format)
		return (0);
	va_start(arg_p, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				format++;
				write (1, "%", 1);
				len += 1;
			}
			if (*format == 's')
			{
				format++;
				len += ft_putstr(va_arg(arg_p, char *));
			}
		}
		else
		{
			write(1, format++, 1);
			len += 1;
		}
	}
	va_end(arg_p);
	return (len);
}
