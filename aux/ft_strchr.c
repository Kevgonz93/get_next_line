/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:20:53 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/16 21:20:54 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *c, int n)
{
	int	i;

	i = 0;
	while (c[i] != 0)
	{
		if (c[i] == (char)n)
			return ((char *)c + i);
		i++;
	}
	if (!c && !n)
		return (0);
	if (c[i] == (char)n)
		return ((char *)c + i);
	return (0);
}
