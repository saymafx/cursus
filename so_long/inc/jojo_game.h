/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jojo_game.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:56:27 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/25 10:31:35 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"
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
	char	*map;
	
	void	*is_collectible;
	void	*is_player;
	void	*is_exit;
	void	*is_wall;
	void	*win;
    void	*mlx;
	void	*img;
	
	int		screen_height;
	int		screen_width;
	int		line_length;
	int		count_line;
	int		to_collect;
	int		nbr_player;
	int		nbr_exit;
	int		height;
	int		width;
	int		moove;
	int		max_x;
	int		nbr_x;
	int		nbr_y;
	int		x;
	int		y;
}	t_jojo;

enum event{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_EXPOSE = 12,
	ON_DESTROY = 17,
};

enum key{
	ESC = 65307,
	UP_KEY = 65362,
	DOWN_KEY = 65364,
	RIGHT_KEY = 65363,
	LEFT_KEY = 65361,
	W_KEY = 119,
	A_KEY = 97,
	S_KEY = 115,
	D_KEY = 100,
};

#endif