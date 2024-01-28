/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:58 by raviz-es          #+#    #+#             */
/*   Updated: 2024/01/28 17:20:09 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizetotal;
	char	*res;
	int		i;
	int		j;

	i = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (sizetotal + 1));
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[sizetotal] = 0;
	return (res);
}

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

void	ft_bzero(void *str, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)str++ = 0;
		n--;
	}
}

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	t_size;
	void	*dst;

	t_size = size * nitems;
	if (nitems && size && nitems > (UINT_MAX / size))
		return (NULL);
	dst = (void *)malloc(t_size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, t_size);
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
