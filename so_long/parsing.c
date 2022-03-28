/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:47:39 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/25 14:58:20 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/jojo_game.h"

//nbr collectible & exit

void    co_ex(char **tab, t_jojo *map)
{
    int a;
    int b;

    a = 0;
    while (tab[a])
    {
        b = 0;
        while (tab[a][b])
        {
            if (tab[a][b] == 'C')
                map->to_collect++;
            else if (tab[a][b] == 'E')
                map->nbr_exit++;
            b++;
        }
        a++;
    }
    if (map->to_collect <= 0 || map->nbr_exit <= 0)
    {
        free(tab);
        ft_putendl_fd("wrong map !", STDERR_FILENO);
        exit(EXIT_FAILURE);
    }
}
