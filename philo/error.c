/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:29:51 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/19 15:33:52 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int    time_set(void)
{
	struct timeval	tv;
	long int		time;
	
	gettimeofday(&tv, NULL);
	time = (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
	return (time);
}

int	arg_error(t_philo *ph, int a, int arg, char **av)
{
	if (ph->nbr_philo < 1 || ph->time_to_die < 1 || 
		ph->time_to_eat < 1 || ph->time_to_sleep < 1)
		return (0);
	if (arg == 6)
		ph[a].must_eat = av[5];
	
}