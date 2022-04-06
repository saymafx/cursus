/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:25:25 by tidigov           #+#    #+#             */
/*   Updated: 2022/04/06 16:34:59 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/jojo_game.h"

static void	check_move_left(t_jojo *map)
{
	if (check_move(map, map->nbr_y, map->nbr_x) == 3)
	{
		map->collectible--;
		map->tab[map->nbr_y][map->nbr_x] = 'P';
		map->tab[map->nbr_y][map->nbr_x + 1] = '0';
	}
	else if (check_move(map, map->nbr_y, map->nbr_x) == 2 && !map->collectible)
	{
		free_tab(map->tab);
		exit(EXIT_SUCCESS);
	}
	if (map->tab[map->nbr_y][map->nbr_x + 1] != 'E' &&
		map->tab[map->nbr_y][map->nbr_x] != 'E')
	{
		map->tab[map->nbr_y][map->nbr_x] = 'P';
		map->tab[map->nbr_y][map->nbr_x + 1] = '0';
	}
	map->is_player = mlx_xpm_file_to_image(map->mlx, map->player_down,
			&map->screen_width, &map->screen_height);
}

void	player_left(t_jojo *map)
{
	map->nbr_y++;
	if (check_move(map, map->nbr_y, map->nbr_x) == 2
		&& map->collectible)
		map->nbr_x++;
	else if (check_move(map, map->nbr_y, map->nbr_x) == 0)
		map->nbr_x++;
	else if (check_move(map, map->nbr_y, map->nbr_x))
	{
		check_move_left(map);
		pars_map(map->tab, map);
		map->move++;
		move_and_collect(map);
	}
}
