/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:14:44 by tidigov           #+#    #+#             */
/*   Updated: 2022/02/12 16:36:44 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    send_to_server (pid_t pid, const unsigned char *str)
{
	int	a;
	unsigned char	bit;
    
    while (*str)
    {
		bit = 1 << 7;
		while (bit)
		{
        	bit--;
        	if (*str & bit)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(300);
			bit >>= 1;
		}
		str++;
    }
	a = -1;
	while (++a < 8)
	{
		kill(pid, SIGUSR2);
		usleep(300);
	}
}

int main(int argc, char **argv)
{
    int	pid;
	
	if (argc != 3)
	{
		write(2, "NULL", 4);
		return (1);
	}
	
    pid = ft_atoi(argv[1]);
	send_to_server(pid, (const unsigned char *)argv[2]);
    return(0);
}
