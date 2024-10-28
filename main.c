#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"  // Incluye tu header

void	test_file(const char *filename) {
	char	path[256];
	char	*line;
	int		fd;

	snprintf(path, sizeof(path), "files/%s", filename);

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (perror("Error al abrir el archivo"));

	printf("Testing file: %s\n", path);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	printf("\n---\n");
}

int	main(void)
{
	test_file("empty.txt");
	test_file("single.txt");
	test_file("multiple.txt");
	test_file("long.txt");
	test_file("wemptylines.txt");
	test_file("onlynl.txt");
	test_file("large.txt");
	return (0);
}
