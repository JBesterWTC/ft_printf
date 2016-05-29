#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		ft_printf(const char *restrict format, ...);
char	*ft_recog(va_list ap, char c);
char	*ft_strings(va_list ap, char ca);
char	*ft_hexadec(va_list ap, char cb);
char	ft_character(va_list ap, char cc);
char	*ft_nbrs(va_list ap, char cd);
char	*ft_octal(va_list ap, char ce);
char	*ft_deci(va_list ap, char cf);
char	*ft_padr(va_list ap, char cg);

#endif
