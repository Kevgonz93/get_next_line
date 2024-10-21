#include "get_next_line.h"

int	ft_save_buffer(int fd, char *buffer)
{
	int		bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
		return (0);
	buffer[bytes_read] = 0;
	return (1);
}

char	*ft_get_line(char *buffer)
{
	char	*line;
	int		size;

	size = 0;
	while (buffer[size] != '\n' && buffer[size] != 0)
		size++;
	line = ft_calloc((size + 1), sizeof(char));
	if (!line)
		return (0);
	line = ft_memcpy(line, buffer, size);
	line[size] = 0;
	return (line);
}
