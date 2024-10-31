/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:22:15 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/18 17:22:16 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		result = ft_calloc(ft_strlen(s2) + 1, sizeof(char));
		if (result)
			ft_memcpy(result, s2, ft_strlen(s2));
		return (result);
	}
	if (!s2)
	{
		result = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
		if (result)
			ft_memcpy(result, s2, ft_strlen(s2));
		return (result);
	}
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
