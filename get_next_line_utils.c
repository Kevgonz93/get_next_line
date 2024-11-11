/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:39:18 by kegonzal          #+#    #+#             */
/*   Updated: 2024/10/21 14:39:20 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t data, size_t size)
{
	void	*prt;

	prt = malloc(size * data);
	if (!prt)
		return (NULL);
	return (ft_memset(prt, 0, size * data));
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

void	*ft_memset(void *buff, int value, size_t size)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)buff;
	i = 0;
	while (i < size)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (buff);
}

static char	*pre_join(char *str)
{
	char	*result;

	result = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (result)
		ft_memcpy(result, str, ft_strlen(str));
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (pre_join(s2));
	if (!s2)
		return (pre_join(s1));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = ft_calloc(i + j + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, i);
	ft_memcpy(result + i, s2, j);
	result[i + j] = '\0';
	free(s1);
	return (result);
}
