/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 09:41:42 by jbester           #+#    #+#             */
/*   Updated: 2016/05/30 15:30:14 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_decinbr(va_list ap, char cf)
{
	float	deci;
	char	*str8;

	deci = va_arg(ap, double);
	str8 = ft_itoa(deci);
	ft_putstr(str8);
	return (0);
}

char	*ft_nbrs(va_list ap, char cd)
{
	int	i;

	i = va_arg(ap, int);
	ft_putnbr(i);
	return (0);
}

char	*ft_octal(va_list ap, char ce)
{
	unsigned int	alph;
	char	*str1;

	alph = va_arg(ap, unsigned int);
	str1 = ft_convert(alph, 8);
	ft_putstr(str1);
	return (0);
}

char	*ft_ptradr(va_list ap, char cg)
{
	void	*addr;
	char	*str7;

	addr = va_arg(ap, void *);
	ft_putstr("0x7fff");
	str7 = ft_convert((unsigned int)addr, 16);
	ft_putstr(str7);
	return (0);
}
