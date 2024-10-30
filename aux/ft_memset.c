/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c               		                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:20:45 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/16 21:20:46 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
