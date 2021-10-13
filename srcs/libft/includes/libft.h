#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strchr(const char *s, int c);
char	*ft_itoa(long int nbr);
char	*ft_ul_itoa(unsigned long int nbr, size_t size);
void	ft_putstr(const char *str);
size_t	ft_strlen(const char *str);

#endif
