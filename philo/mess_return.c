/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mess_return.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:30:30 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/19 14:21:24 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	file_error(int c)
{
    t_philo *ph;
    
	if (c == 1)
	{
		printf("%ld %d has taken a fork", time_set(), ph->p);
		exit(EXIT_FAILURE);
	}
	if (c == 2)
	{
		ft_putendl_fd("Error File", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (c == 3)
	{
		ft_putendl_fd("Invalid charactere", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (c == 4)
	{
		ft_putendl_fd("Map is not rectangular", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (c == 5)
	{
		ft_putendl_fd("Map is not close", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}