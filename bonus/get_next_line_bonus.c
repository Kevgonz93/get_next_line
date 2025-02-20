#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*storage[1024];
	char		*line;
	char		*buffer;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(storage[fd], '\n') && bytes_read != 0)
	{
		buffer = get_buffer(fd, buffer, &bytes_read);
		if (!buffer)
			return (NULL);
		storage[fd] = ft_strjoin(storage[fd], buffer);
		if (!storage[fd])
			return (free(buffer), NULL);
	}
	free(buffer);
	line = get_line(storage[fd]);
	storage[fd] = new_storage(storage[fd]);
	return (line);
}
