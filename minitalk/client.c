/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:14:44 by tidigov           #+#    #+#             */
/*   Updated: 2022/02/03 15:24:17 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
    pid_t test;
    int toto = ft_atoi(argv[1]);
    test = toto;
    kill(test, SIGUSR1);
    return(0);
}
