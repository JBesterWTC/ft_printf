#include "printf.h"

int	main()
{
	char	c = 'H';
	char	*str = "This is a string";
	char	*var1;

	ft_putstr("Test starts:\n\n");
	ft_printf("Cc test: %c;\nSs test: %s;\np test: %p", c, str, var1);
	ft_putstr("\n\nTest end.\n");
	return (0);
}
