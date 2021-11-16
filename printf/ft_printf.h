/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:07:29 by tidigov           #+#    #+#             */
/*   Updated: 2021/11/16 17:34:39 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);

//libft
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int	ft_putnbr(int nb);
int	ft_putchar(char c);

#endif