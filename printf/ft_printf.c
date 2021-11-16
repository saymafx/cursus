/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:03:33 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/16 17:35:38 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_arg(const char flag)
{
	return (ft_strchr("cspdiuxX%", flag) != '\0');
}

static int ft_arg(const char s, va_list ap, int len)
{
	if (s == '%')
		len += ft_putchar(s);
	if (s == 'c')
		len += ft_putchar(va_arg(ap, int));
	if (s == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (s == 'p')
		len += ft_putptr(va_arg(ap, void *));
	if (s == 'd')
		len += ft_putnbr(va_arg(ap, int));
	if (s == 'i')
		len += ft_putnbr(va_arg(ap, int));
	if (s == 'u')
		len += 0;
	if (s == 'x')
		len += 0;
	if (s == 'X')
		len += 0;
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;

	
}
