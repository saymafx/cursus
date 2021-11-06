/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:02:14 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/04 17:36:03 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*courant;
	t_list	*tmp;
	
	if (lst)
	{
		courant = *lst;
		while (courant)
		{
			tmp = courant->next;
			ft_lstdelone(courant, del);
			courant = tmp;
		}
		*lst = NULL;
	}
}