/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jojo_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:55:13 by tidigov           #+#    #+#             */
/*   Updated: 2022/04/06 16:30:04 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/jojo_game.h"

void	add_tab(t_jojo *map)
{
	int		fd;
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	map->line_max = 0;
	map->count_line = 0;
	fd = open("maps/map.ber", O_RDONLY);
	tmp = ft_get_next_line(fd);
	while (ft_get_next_line(fd))
		map->count_line++;
	map->count_line += 1;
	while (tmp[i])
	{
		map->line_max++;
		i++;
	}
	printf("%d\n", map->count_line);
	printf("%d\n", map->line_max);
}

void	add_map(t_jojo *map)
{
	int		fd;
	int		i;
	char	**tmp;

	i = 0;
	map->tab = malloc(sizeof(char *) * map->count_line + 1);
	while (i < map->count_line)
	{
		map->tab[i] = malloc(sizeof(char) * map->line_max + 1);
		i++;
	}
	i = 0;
	fd = open("maps/map.ber", O_RDONLY);
	while (i < map->count_line)
	{
		map->tab[i] = ft_get_next_line(fd);
		i++;
	}
	i = -1;
	while (map->tab[++i])
		printf("%s", map->tab[i]);
}

void	map_init(t_jojo *map)
{
	map->mlx = mlx_init();
	map->player_right = "img/josuke_right.xpm";
	map->player_left = "img/josuke_left.xpm";
	map->player_down = "img/josuke_down.xpm";
	map->player_up = "img/josuke_up.xpm";
	map->collectible = "img/ground.xpm";
	map->ground = "img/ground.xpm";
	map->exit = "img/ground.xpm";
	map->wall = "img/wall.xpm";
	map->collectible = 0;
	map->nbr_player = 0;
	map->nbr_exit = 0;
	map->nbr_x = 0;
	map->nbr_y = 0;
	map->move = 0;
}

static void	texture_init(t_jojo *map)
{
	map->win = mlx_new_window(map->mlx, 700, 700, "JoJo Game");
	map->is_collectible = mlx_xpm_file_to_image(map->mlx, map->collectible,
			&map->screen_width, &map->screen_height);
	map->is_player = mlx_xpm_file_to_image(map->mlx, map->player_down,
			&map->screen_width, &map->screen_height);
	map->is_ground = mlx_xpm_file_to_image(map->mlx, map->ground,
			&map->screen_width, &map->screen_height);
	map->is_wall = mlx_xpm_file_to_image(map->mlx, map->wall,
			&map->screen_width, &map->screen_height);
	map->is_exit = mlx_xpm_file_to_image(map->mlx, map->exit,
			&map->screen_width, &map->screen_height);
}

int	main(int ac, char **av)
{
	t_jojo	map;

	map.tab = NULL;
	add_tab(&map);
	add_map(&map);
	map_init(&map);
	texture_init(&map);
	mlx_loop(map.mlx);
	return (1);
}
