#include "printf.h"

int	main()
{
	char	alpha = 'H';
	char	*str = "This is a string";
	int		nbr = 678;
	double	deci = 78.99;
	char	p;

	ft_putstr("Test starts:\n\n");
	ft_printf("Test Ss: %s;\nTest Xx: %x;\nTest Cc: %c;\nTest i: %i;\nTest Oo: %o;\nTest Uu: %u;\nTest Dd: %d;\nTest p: %p;\n\nTest end.\n", str, nbr, alpha, nbr, nbr, deci, nbr, p);
	return (0);
}
