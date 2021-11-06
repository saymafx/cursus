/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:42:20 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/28 15:41:31 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!dst)
		return (0);
	while (src[a])
		a++;
	if (!dstsize)
		return (a);
	while (src[b] && b < dstsize - 1)
	{
		dst[b] = src[b];
		b++;
	}
	dst[b] = '\0';
	return (a);
}
