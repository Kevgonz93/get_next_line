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
	if (!c)
		return (NULL);
	while (*c)
	{
		if (*c == (char) n)
			return ((char *)c);
		c++;
	}
	if (*c == (char)n)
		return ((char *)c);
	return (0);
}
