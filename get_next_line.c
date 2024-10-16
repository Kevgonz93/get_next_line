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

// int	main(int argc, char **argv)
// {
// 	int		fd;
// 	char	*line;

// 	(void)argc;
// 	if (argc < 2)
// 	{
// 		printf("write the name file \n");
// 		return (0);
// 	}
// 	fd = open(argv[1], O_RDONLY);
// 	printf("file open \n");
// 	if (fd == -1)
// 		return (1);
// 	line = (char *)malloc(BUFFER_SIZE * sizeof(char));
// 	while (line != NULL)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s \n", line);
// 		free(line);
// 	}
// 	close(fd);
// 	printf("file closed \n");
// 	return (0);
// }
