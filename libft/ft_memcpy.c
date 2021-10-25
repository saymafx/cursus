/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:54:03 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/25 15:30:08 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*dst1++ = *src1++;
		n--;
	}
	return (dst);
}
