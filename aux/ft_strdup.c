/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:15:17 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/18 12:15:18 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*copy;

	i = 0;
	size = ft_strlen(s);
	copy = (char *)ft_calloc(size + 1, sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
