/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:35:51 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/17 19:38:16 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

# define MIN -2147483648
# define MAX 2147483647

typedef struct s_philo
{
	int				p;
	int				nbr_philo;
	int				death;
	int				must_eat;
	int				time_to_sleep;
	int				time_to_die;
	int				time_to_eat;
	pthread_t		phi;
	pthread_mutex_t	*rf;
	pthread_mutex_t	lf;
}	t_philo;

int	ft_atoi(const char *str);

#endif