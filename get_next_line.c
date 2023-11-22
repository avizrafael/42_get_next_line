/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:15:33 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/22 14:57:57 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*next_line;
	char	*line;
	int		i;

	line = str_new(BUFFER_SIZE);
	if (!line)
		return (NULL);
	i = 1;
	while (i > 0)
	{
		i = read(fd, line, BUFFER_SIZE);
		if (i < 0)
			return (NULL);
		if (*line == '\n')
			break ;
		next_line = ft_strjoinmod(next_line, line);
		if (!next_line)
			return (NULL);
	}
	free(line);
	return (next_line);
}

int main()
{
    int	fd;

	fd = open("file.txt", O_RDONLY);
}
