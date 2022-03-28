/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:27:57 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/28 16:15:50 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	src1;
	size_t	dst1;

	dst1 = ft_strlen(dst);
	src1 = ft_strlen((char *)src);
	i = 0;
	if (dstsize <= dst1 || dstsize <= 0)
		return (src1 + dstsize);
	while (src[i] && (dst1 + i) < (dstsize - 1))
	{
		dst[dst1 + i] = src[i];
		i++;
	}
	dst[dst1 + i] = '\0';
	return (dst1 + src1);
}
