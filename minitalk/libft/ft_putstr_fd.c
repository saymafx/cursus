/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:46:39 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/05 17:36:39 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	a;

	if (s)
	{
		a = ft_strlen(s);
		write(fd, s, a);
	}
}
