/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:34:49 by tidigov           #+#    #+#             */
/*   Updated: 2022/05/17 19:38:24 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void *routine(void *arg)
{
	t_philo	*ph;
	int	a;

	a = 0;
	if (ph->p % 2 == 0)
		usleep(300);
	return (0);
}

void    philo_create(t_philo ph)
{
	pthread_t	dead;
	int a;

	a = 0;
	while (a < ph.nbr_philo)
    {
		
        if (pthread_create(&ph.p, NULL, &routine, (void *)ph.p) != 0);
			exit(EXIT_FAILURE);
        a++;
    }
	a = 0;
	while (a < ph.nbr_philo)
    {
        if (pthread_create(&dead, NULL, &routine, (void *)ph.p) != 0);
			exit(EXIT_FAILURE);
        a++;
    }
}

int init(int ac, char **av, t_philo *ph)
{
	ph->nbr_philo = ft_atoi(av[1]);
	ph->time_to_die = ft_atoi(av[2]);
	ph->time_to_eat = ft_atoi(av[3]);
	ph->time_to_sleep = ft_atoi(av[4]);
	ph->must_eat = ft_atoi(av[5]);
	
}

int main(int ac, char **av)
{
	t_philo ph;
	int i;

	i = 0;
	if (ac == 5 || ac == 6)
	{
		init(ac, av, &ph);
		pthread_join(ph.p, NULL);
		pthread_exit(NULL);
		return 0;
	}
}