/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jojo_game.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:56:27 by tidigov           #+#    #+#             */
/*   Updated: 2022/04/06 16:29:20 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JOJO_GAME_H
# define JOJO_GAME_H

# define ESC 53
# define W_KEY 13
# define A_KEY 0
# define S_KEY 1
# define D_KEY 2
# define PXL 32

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include <string.h>

typedef struct s_jojo
{
	char	*player_right;
	char	*player_down;
	char	*player_left;
	char	*collectible;
	char	*player_up;
	char	*ground;
	char	*name;
	char	*wall;
	char	*exit;
	char	**tab;

	void	*is_collectible;
	void	*is_ground;
	void	*is_player;
	void	*is_exit;
	void	*is_wall;
	void	*img;
	void	*win;
	void	*mlx;

	int		screen_height;
	int		screen_width;
	int		line_max;
	int		count_line;
	int		to_collect;
	int		nbr_player;
	int		nbr_exit;
	int		height;
	int		width;
	int		move;
	int		max_x;
	int		nbr_x;
	int		nbr_y;
	int		x;
	int		y;
}	t_jojo;

static void	check_move_right(t_jojo *map);
static void	check_move_down(t_jojo *map);
static void	check_move_left(t_jojo *map);
static void	check_move_up(t_jojo *map);
static void	texture_init(t_jojo *map);
void	aff_map(char **tab, t_jojo *map, int y, int x);
void	position_player(char **tab, t_jojo *map);
void	pars_map(char **tab, t_jojo *map);
void	co_ex(char **tab, t_jojo *map);
void	move_and_collect(t_jojo *map);
void	player_right(t_jojo *map);
void	player_down(t_jojo *map);
void	player_left(t_jojo *map);
void	aff_ground(t_jojo *map);
void	player_up(t_jojo *map);
void	map_init(t_jojo *map);
void	add_tab(t_jojo *map);
void	free_tab(char **tab);
void	add_map(t_jojo *map);
void	file_error(int c);
int	check_move(t_jojo *map, int x, int y);
int	key_assign(int key, t_jojo *map);
int	exit_game(void);

#endif