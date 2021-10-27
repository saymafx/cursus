/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:17:55 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/27 16:26:59 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	a;
	size_t	b;
	size_t	c;

	if (!s1 && !s2)
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
		copy = s1[a];
	while (s2[b] != '\0')
	{
		copy[a] = s2[b];
		b++;
		a++;
	}
	copy[a] = '\0';
	return (copy);
}
