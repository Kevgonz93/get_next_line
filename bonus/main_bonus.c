#include "get_next_line_bonus.h"

void	print_line(char *line, int fd, char *file)
{
	if (line)
		printf("%s: %s", file, line);
	free(line);
}

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("../txt/adios.txt", O_RDONLY);
	fd2 = open("../txt/duality.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
		return (perror("Error abriendo los archivos"), 1);
	printf("Leyendo de adios.txt y duality.txt alternadamente:\n");
	line1 = get_next_line(fd1);
	line2 = get_next_line(fd2);
	while (line1 || line2)
	{
		print_line(line1, fd1, "adios.txt");
		print_line(line2, fd2, "duality.txt");
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
	}
	close(fd1);
	close(fd2);
	return (0);
}
