/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:39:08 by kegonzal          #+#    #+#             */
/*   Updated: 2024/10/21 14:39:10 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!ft_save_buffer(fd, buffer))
		return (NULL);
	line = ft_get_line(buffer);
	return (line);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	if (argc < 2)
	{
		printf("write the name file \n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	printf("file open \n");
	if (fd == -1)
		return (printf("error to open.\n"), 1);
	line = (char *)malloc(BUFFER_SIZE * sizeof(char));
	if (!line)
		return (0);
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (line != NULL)
			printf("%s", line);
		free(line);
	}
	close(fd);
	printf("file closed \n");
	return (0);
}
