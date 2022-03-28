/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:16:58 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/26 19:34:55 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*copy;
	size_t	a;
	size_t	all;

	all = count * size;
	copy = malloc(all);
	if (!copy)
		return (NULL);
	a = 0;
	while (all--)
	{
		copy[a] = 0;
		a++;
	}
	return ((void *)copy);
}
