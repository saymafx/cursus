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

static void check_move_down(t_jojo *map)
{
    if (check_move(map, map->nbr_y, map->nbr_x) == 3)
    {
        map->collectible--;
        map->tab[map->nbr_y][map->nbr_x] = 'P';
        map->tab[map->nbr_y - 1][map->nbr_x] = '0';
    }
    else if (check_move(map, map->nbr_y, map->nbr_x) == 2 && !map->collectible)
    {
        free_tab(map->tab);
        exit(EXIT_SUCCESS);
    }
    if (map->tab[map->nbr_y - 1][map->nbr_x] != 'E' && map->tab[map->nbr_y][map->nbr_x] != 'E')
	{
		map->tab[map->nbr_y][map->nbr_x] = 'P';
		map->tab[map->nbr_y - 1][map->nbr_x] = '0';
	}
    map->bg_player = mlx_xpm_file_to_image(map->mlx, map->player_down, &map->win_width, &map->win_height);
}

void	player_down(t_data *map)
{
	map->nbr_y++;
	if (check_map_for_move(map, map->nbr_y, map->nbr_x) == 2
		&& map->collectible)
		map->nbr_y--;
	else if (check_map_for_move(map, map->nbr_y, map->nbr_x) == 0)
		map->nbr_y--;
	else if (check_map_for_move(map, map->nbr_y, map->nbr_x))
	{
		ft_bas_extension(map);
		parsing_map(map->tab, map);
		map->move++;
		print_info(map);
	}
}
