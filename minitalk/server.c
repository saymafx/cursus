/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:14:49 by tidigov           #+#    #+#             */
/*   Updated: 2022/02/03 16:10:12 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    tata(int a)
{
    if (a == SIGUSR1)
        printf("salut");
}

int main ()
{
    struct sigaction str;
    // toto.sa_flags = 0;
    str.sa_handler = tata;
    sigaction(SIGUSR1, &str, NULL);
	while (1)
		pause();
    return(0);
}
