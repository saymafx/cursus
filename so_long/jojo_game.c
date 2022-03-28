/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jojo_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:55:13 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/25 13:59:35 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/jojo_game.h"

char	new_map(char *line, char *tab, char **tmp, t_jojo *map)
{
	
}

char	**get_map(char *tab, t_jojo *map)
{
	int		fd;
	char	*line;
	char	**tmp;
	
	line = NULL;
	map->count_line = 1;
	fd = open(tab, O_DIRECTORY);
	if (fd != 1)
		return (NULL);
	else
	{
		(fd = open(tab, O_RDONLY));
		if (fd == -1)
			return (NULL);
	}
	while (get_next_line(fd) == 1)
		map->count_line++;
	tmp = ft_calloc(sizeof(tmp), map->count_line + 1);
	if (!tmp)
		return (0);
	return (NULL);
}
 

void    map_init(t_jojo *map)
{
	map->player_down = "img/josuke_down.xpm";
	map->player_up = "img/josuke_up.xpm";
	map->player_left = "img/josuke_left.xpm";
	map->player_right = "img/josuke_right.xpm";
	map->ground = "img/ground.xpm";
	map->x = 100;
	map->y = 100;
	map->mlx = mlx_init();
	map->win = mlx_new_window(map->mlx, 700, 700, "JoJo Game");
}

static void	texture_init(t_jojo *map)
{
	map->player_right = mlx_xpm_file_to_image(map->mlx, map->player_right, &map->width, &map->height);
	map->player_left = mlx_xpm_file_to_image(map->mlx, map->player_left, &map->width, &map->height);
	map->player_down = mlx_xpm_file_to_image(map->mlx, map->player_down, &map->width, &map->height);
	map->player_up = mlx_xpm_file_to_image(map->mlx, map->player_up, &map->width, &map->height);
	map->ground = mlx_xpm_file_to_image(map->mlx, map->ground, &map->width, &map->height);
}

void aff_map(t_jojo *map)
{
	while (map->y < 600)
	{
		while (map->x < 600)
		{
			mlx_put_image_to_window(map->mlx, map->win, map->player_down, map->x, map->y);
			map->x += 32;
		}
		map->x = 100;
		map->y += 32;
	}
}

int main(int ac,char **av)
{
	t_jojo  map;
	char    **tab;
	
	map_init(&map);
	texture_init(&map);
	aff_map(&map);
	mlx_loop(map.mlx);
	return (0);
}