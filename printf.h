#ifndef HEADER_H
# define HEADER_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

struct	types
{
	char			*str;
	char			alph;
	int				nbr;
	long int		lonbr;
	unsigned int	unbr;
};

int		ft_printf(const char *restrict format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	ft_recog(va_list ap, char c);

#endif
