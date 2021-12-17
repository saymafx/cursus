/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:08:42 by tidigov           #+#    #+#             */
/*   Updated: 2021/12/17 15:27:29 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	a;
	size_t	b;
	size_t	c;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	c = a + b;
	copy = malloc(sizeof(char) * c);
	if (!copy)
		return (NULL);
	a = -1;
	b = 0;
	while (s1[++a] != '\0')
		copy[a] = s1[a];
	while (s2[b] != '\0')
	{
		copy[a] = s2[b];
		b++;
		a++;
	}
	copy[a] = '\0';
	return (copy);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	copy = malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
