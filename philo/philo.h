/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:35:51 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/19 16:55:14 by tidigov          ###   ########.fr       */
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
	int				time_to_sleep;
	int				time_to_die;
	int				time_to_eat;
	int				nbr_philo;
	int				must_eat;
	long int		last_eat;
	long int		first;
	int				death;
	int				last;
	int				p;
	pthread_t		phi;
	pthread_mutex_t	*rf;
	pthread_mutex_t	lf;
}	t_philo;

int	ft_atoi(const char *str);
long int    time_set(void);

#endif