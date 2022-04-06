/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:47:39 by tidigov           #+#    #+#             */
/*   Updated: 2022/04/06 16:10:10 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/jojo_game.h"

void	co_ex(char **tab, t_jojo *map)
{
	int	a;
	int	b;

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

void	position_player(char **tab, t_jojo *map)
{
	int	i;
	int	a;

	i = 0;
	while (tab[i])
	{
		a = 0;
		while (tab[i][a])
		{
			if (tab[a][i] == 'P')
			{
				map->nbr_player++;
				map->nbr_x += a;
				map->y += i;
			}
			a++;
		}
		i++;
	}
	if (map->nbr_player == 0 && map->nbr_player < 0)
	{
		free(tab);
		ft_putendl_fd("player not found", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}

void	pars_map(char **tab, t_jojo *map)
{
	int	i;
	int	a;

	i = 0;
	map->x = 0;
	while (tab[i])
	{
		a = 0;
		map->y = 0;
		while (tab[i][a])
		{
			aff_map(tab, map, i, a);
			a++;
			map->x += PXL;
		}
		i++;
		map->y += PXL;
	}
	map->tab = tab;
}

void	aff_map(char **tab, t_jojo *map, int y, int x)
{
	if (tab[y][x] == 1)
		mlx_put_image_to_window(map->mlx, map->win,
			map->is_wall, map->x, map->y);
	else if (tab[y][x] == 0)
		aff_ground(map);
	else if (tab[y][x] == 'P')
	{
		mlx_put_image_to_window(map->mlx, map->win,
			map->is_ground, map->x, map->y);
		mlx_put_image_to_window(map->mlx, map->win,
			map->is_player, map->x, map->y);
	}
	else if (tab[y][x] == 'C')
	{
		aff_ground(map);
		mlx_put_image_to_window(map->mlx, map->win,
			map->is_collectible, map->x, map->y);
	}
	else if (tab[y][x] == 'E')
	{
		aff_ground(map);
		mlx_put_image_to_window(map->mlx, map->win,
			map->is_exit, map->x, map->y);
	}
}

void	aff_ground(t_jojo *map)
{
	mlx_put_image_to_window(map->mlx, map->win, map->is_ground, map->x, map->y);
}
