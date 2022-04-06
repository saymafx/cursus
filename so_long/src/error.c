/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:41:37 by tidigov           #+#    #+#             */
/*   Updated: 2022/04/06 16:29:07 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/jojo_game.h"

int	exit_game(void)
{
	exit(0);
}

void	file_error(int c)
{
	if (c == 1)
	{
		ft_putendl_fd("Error Directory", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (c == 2)
	{
		ft_putendl_fd("Error File", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
}


