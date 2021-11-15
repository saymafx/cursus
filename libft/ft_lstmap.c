/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:40:03 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/06 16:42:01 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*courant;
	t_list	*courant1;

	if (!lst || !del)
		return (NULL);
	courant = NULL;
	while (lst)
	{
		courant1 = ft_lstnew((*f)(lst->content));
		if (!courant1)
		{
			while (courant)
			{
				courant1 = courant->next;
				(*del)(courant->content);
				free(courant);
				courant = courant1;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&courant, courant1);
		lst = lst->next;
	}
	return (courant);
}
