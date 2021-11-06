/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:58:21 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/02 18:27:30 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countnbr(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
	}
	if (!n)
		return (1);
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			a;
	long int	b;

	a = countnbr(n);
	result = malloc(a * sizeof(char) + 1);
	if (!result)
		return (NULL);
	b = n;
	if (b < 0)
	{
		b *= -1;
		result[0] = '-';
	}
	result[a--] = '\0';
	if (n == 0)
		result[a] = '0';
	while (b)
	{
		result[a] = '0' + b % 10;
		b /= 10;
		a--;
	}
	return (result);
}
