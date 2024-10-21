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

int	ft_save_buffer(int fd, char *buffer)
{
	int		bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (0);
	buffer[bytes_read] = '\0';
	return (1);
}

char	*ft_get_line(char *buffer)
{
	char	*line;
	char	*tempo;
	int		size;

	tempo = buffer;
	size = 0;
	while (tempo[size] != '\n' && tempo[size] != 0)
		size++;
	if (size == 0 && tempo[size] != '\0')
		return (0);
	else if (tempo[size] == '\n')
		line = malloc((size + 1 + 1) * sizeof(char));
	else
		line = malloc((size + 1 + 0) * sizeof(char));
	if (!line)
		return (0);
	memcpy(line, tempo, size);
	if (tempo[size] == '\n')
		line[size++] = '\n';
	line[size] = '\0';
	if (tempo[size - 1] == '\n')
		*buffer += (size - 1);
	else
		*buffer += size;
	return (line);
}
