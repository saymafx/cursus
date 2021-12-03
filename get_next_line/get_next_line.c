/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:56:12 by tidigov           #+#    #+#             */
/*   Updated: 2021/12/03 16:54:51 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_first_line(int fd, char *result)
{
	int     bytelu;
    char    buf[BUFFER_SIZE + 1];
    result = ft_strdup("");

	bytelu = read(fd, buf, BUFFER_SIZE);
    while (bytelu > 0)
    {
        buf[bytelu] = '\0';
        result = ft_strjoin(result, buf);
        bytelu = read(fd, buf, BUFFER_SIZE);
    }
    return (result);
}

char	*ft_cleanline(char *cleanresult)
{
	int     a;
	char	*first_line;
    cleanresult = ft_strdup("");

    a = 0;
	first_line = *ft_first_line(*result);
    if (!first_line)
        return (NULL);
    while (first_line[a++] != '\n')
		cleanresult = ft_strjoin(cleanresult, first_line);
	return (cleanresult);
}

//char	*get_next_line(int fd)

int main(int argc, char **argv)
{
    int	fd;
    
    (void) argc;
    fd = open(argv[1], O_RDONLY);
    printf("%s", *ft_cleanline(fd));
    close(fd);
    return(0);
}