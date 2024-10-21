/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:15:17 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/18 12:15:18 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t data, size_t size)
{
	void	*prt;

	prt = malloc(size * data);
	if (!prt)
		return (NULL);
	return (ft_memset(prt, 0, size * data));
}
