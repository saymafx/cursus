/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:31:56 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/15 17:31:58 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main()
{
	printf("trc :%d \n",printf(" NULL %s NULL ", NULL));
	printf("ftc :%d \n",ft_printf(" NULL %s NULL ", NULL));
}