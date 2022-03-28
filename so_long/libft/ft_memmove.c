/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:54:38 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/26 16:50:15 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst1 > src1)
	{
		while (i < len)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
