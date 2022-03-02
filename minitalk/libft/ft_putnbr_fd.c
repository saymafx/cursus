/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:54:02 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/01 17:47:15 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;
	long long int	a;
	long long int	b;

	nbr = n;
	a = 0;
	b = 9;
	if (nbr < a)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > b)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	else
	{
		nbr = nbr + '0';
		ft_putchar_fd(nbr, fd);
	}
}
