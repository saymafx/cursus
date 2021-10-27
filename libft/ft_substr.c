/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:45:07 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/27 16:16:39 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*copy;

	a = -1;
	b = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[b] && ++a < len)
		b++;
	copy = ft_calloc(sizeof(*copy), a + 1);
	if (!copy)
		return (NULL);
	a = 0;
	while (s[start] && a < len)
	{
		copy[a] = s[start];
		a++;
		start++;
	}
	copy[a] = '\0';
	return (copy);
}
