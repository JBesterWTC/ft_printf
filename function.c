/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 09:45:47 by jbester           #+#    #+#             */
/*   Updated: 2016/05/30 16:01:13 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put32char(wchar_t c)
{
	write(1, &c, 1);
}

void	ft_put32str(char *str)
{
	while (*str != '\0')
	{
		ft_put32char(*str);
		str++;
	}
}

int		ft_pridouble(double decinb, int l)
{
	ft_putnbr((int)decinb);
	decinb -= (int)decinb;
	if (!n && !l)
		return (0);
	write(1, ".", 1);
	while ((!n && l) || l)
	{
		ft_putnbr((int)(n * 10));
		n = n * 10 - ((int)(n*10));
		l--;
	}
	return (0);
}

int	main()
{
	char	*output;
	output = ft_dtoa(12.34);
	ft_putstr(output);
	return (0);
}
