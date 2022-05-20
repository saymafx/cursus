/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:34:49 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/19 17:36:45 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void *routine(void *av)
{
	t_philo	*ph;

	ph = av;
	if (ph->p % 2 == 0)
		usleep(300);
	while (1 && ph->must_eat > 0)
	{
		if (ph->must_eat == 0)
			exit(EXIT_SUCCESS);
		pthread_mutex_lock(&ph->lf);
		if (ph->nbr_philo == 1)
		{
			//
			exit(EXIT_SUCCESS);
		}
		pthread_mutex_lock(ph->rf);
		//
		ph->last_eat = time_set();
		//
		pthread_mutex_unlock(ph->rf);
		pthread_mutex_unlock(&ph->lf);
		//
	}
	return (NULL);
}

void	philo_die(void *av)
{
	t_philo	*ph;
	
	ph = av
	while (1)
	{
		if (ph->must_eat == 0)
			return (NULL);
		if (time_set() - ph->last_eat > ph-> time_to_die)
		{
			pthread_mutex_lock(&ph->print);
			//
			time_set() - ph->start, ph->p);
			pthread_mutex_unlock(&ph->print);
			exit(0);
		}
	}
	return (NULL);
}

void    philo_create(t_philo *ph)
{
	pthread_t	dead;
	int a;

	a = 1;
	while (a <= ph->nbr_philo)
    {
		ph[a].last_eat = time_set();
		ph[a].first = time_set();
        if (pthread_create(&ph[a].p, NULL, &routine, &(ph[a])) != 0);
			exit(EXIT_FAILURE);
        a++;
    }
	a = 1;
	while (a <= ph->nbr_philo)
    {
    	pthread_create(&dead, NULL, &routine, &ph[a]);
		pthread_join(dead, NULL);
        a++;
    }
}

int init(int ac, char **av, t_philo *ph)
{
	int	a;

	a = 0;
	ph[a].nbr_philo = ft_atoi(av[1]);
	while (a < ph->nbr_philo)
	{
		ph[a].time_to_die = ft_atoi(av[2]);
		ph[a].time_to_eat = ft_atoi(av[3]);
		ph[a].time_to_sleep = ft_atoi(av[4]);
		ph[a].must_eat = MAX;
		ph[a].last_eat = 0;
		ph[a].rf = NULL;
		ph[a].p = a;
		a++;	
	}
}

int main(int ac, char **av)
{
	t_philo ph;
	int i;

	i = 1;
	printf("%ld %d has taken a fork\n", time_set(), ph.p);
	if (ac == 5 || ac == 6)
	{
		init(ac, av, &ph);
		philo_create(&ph);
		pthread_exit(NULL);
		return 0;
	}
}
