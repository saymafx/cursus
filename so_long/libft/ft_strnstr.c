/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:03:04 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/26 19:16:05 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (needle[i] == '\0')
		return ((char *) haystack + i);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] == needle[c] && i + c < len)
		{
			if (needle[c + 1] == '\0')
				return ((char *) haystack + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
