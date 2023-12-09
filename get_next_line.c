/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:15:33 by raviz-es          #+#    #+#             */
/*   Updated: 2023/12/09 20:18:05 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*next_line;
	char	*str;
	int		i;

	str = str_new(BUFFER_SIZE);
	if (!str)
		return (NULL);
	i = 1;
	while (i > 0)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i < 0)
			return (NULL);
		if (*str == '\n')
			break ;
		next_line = ft_strjoinmod(next_line, str);
		if (!next_line)
			return (NULL);
	}
	free(str);
	return (next_line);
}

/*
int main()
{
    int	fd;

	fd = open("file.txt", O_RDONLY);
	return (0);
}
*/