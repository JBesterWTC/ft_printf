#include "printf.h"

/*Decimal numbers*/
char	*ft_decinbr(va_list ap,  char cf)
{
	char	*str5;

	str5 = va_arg(ap, void *);
	ft_putstr(str5);
	return (0);
}

/*Any normal numbers*/
char	*ft_nbrs(va_list ap, char cd)
{
	int	i;

	i = va_arg(ap, int);
	ft_putnbr(i);
	return (0);
}

/*Octal numbers*/
char	*ft_octal(va_list ap, char ce)
{
	char				*str3;
	unsigned int		store;

	store = va_arg(ap, unsigned int);
	str3 = ft_convert(store, 8);
	ft_putstr(str3);
	return (0);
}

/*Characters*/
char	ft_character(va_list ap, char cc)
{
	char	alph;

	alph = va_arg(ap, long int);
	ft_putchar(alph);
	return (0);
}
/*Strings*/
char	*ft_strings(va_list ap, char ca)
{
	char	*str1;

	str1 = va_arg(ap, char *);
	ft_putstr(str1);
	return (0);
}

/*Hexadecimals*/
char	*ft_hexadec(va_list ap, char cb)
{
	char			*str2;
	unsigned int	carry;


	carry = va_arg(ap, unsigned int);
	if (cb == 'x')
		str2 = ft_convert(carry, 16);
	else if (cb == 'X')
		str2 = ft_upper_convert(carry, 16);
	ft_putstr(str2);
	return (0);
}

/*Recognize character and sort*/
char	*ft_recog(va_list ap, char c)
 {
 	int	i;

 	if (c == 's' || c == 'S')
 		ft_strings(ap, c);
 	else if (c == 'x' || c == 'X')
		ft_hexadec(ap, c);
	else if (c == 'c' || c == 'C')
		ft_character(ap, c);
	else if (c == 'i')
		ft_nbrs(ap, c);
	else if (c == 'd' || c == 'D')
		ft_nbrs(ap, c);
	else if (c == 'o' || c == 'O')
		ft_octal(ap, c);
//	else if (c == 'u' || c == 'U')
//		ft_deci(ap, c);
//	else if (c == 'p')
//		ft_ptradr(ap, c);
	return (0);
}
