#include "printf.h"

int	ft_printf(const char *restrict format, ...)
{
	va_list	ap;
	char	*search;

	search = (char *)format;
	va_start(ap,format);
	while (*search != '\0')
	{
		while (*search != '%' && *search)
		{
			ft_putchar(*search);
			search++;
		}
		search++;
		ft_recog(ap, *search);
		search++;
	}
	va_end(ap);
}
