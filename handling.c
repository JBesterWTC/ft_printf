#include "printf.h"

char	ft_recog(va_list ap, char c)	/*recognises type*/
{
	void	*i;
	char	alph;
	char	*str;

	if (c == 'c' || c == 'C')
	{
		alph = va_arg(ap, long int);
		ft_putchar(alph);
	}
	else if (c == 's' || c == 'S')
	{
		str = va_arg(ap, char *);
		ft_putstr(str);
	}
	else if (c == 'p')
	{
		i = va_arg(ap, void *);
		ft_putstr(i);
	}
}
