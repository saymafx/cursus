/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:42:18 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/02 16:40:38 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_find(char c, const char *set)
{
	size_t	a;

	a = 0;
	while (set[a])
	{
		if (c == set[a])
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	start;
	size_t	end;
	size_t	a;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && to_find(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && to_find(s1[end - 1], set))
		end--;
	copy = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!copy)
		return (NULL);
	a = 0;
	while (start < end)
	{
		copy[a] = s1[start];
		a++;
		start++;
	}
	copy[a] = 0;
	return (copy);
}
