/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:02:08 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/02 16:49:11 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char const *s, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(n + 1);
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count(char *s, char set)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != set)
		b++;
	while (s[a])
	{
		if (s[a] == set)
		{
			if (s[a] == set && (s[a + 1] != set && s[a + 1] != '\0'))
				b++;
		}
		a++;
	}
	return (b);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		a;
	int		twords;
	int		tab;

	tab = 0;
	a = -1;
	if (!s)
		return (NULL);
	result = ft_calloc(sizeof(result), (ft_count((char *)s, c) + 1));
	if (!result)
		return (NULL);
	while (s[++a])
	{
		twords = 0;
		if (s[a] != c)
		{
			while (s[a + twords] != c && s[a + twords] != '\0')
				twords++;
			result[tab++] = ft_strndup(s + a, twords);
			a = a + twords - 1;
		}
	}
	result[tab] = 0;
	return (result);
}
