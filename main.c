#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

void	test_file(const char *filename)
{
	int		fd;
	char	*line;
	int		i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (perror("ERROR: The file could not be read."));
	i = 0;
	printf("Testing file: %s\n", filename);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	printf("\n---\n");
}

int	main(int argc, char *argv[])
{
	int	i;

	(void)argv;
	i = 1;
	if (argc == 1)
	{
		test_file("txt/5_single.txt");
		test_file("txt/2_long.txt");
		test_file("txt/6_wemptylines.txt");
		test_file("txt/4_onlynl.txt");
		test_file("txt/1_large.txt");
		test_file("txt/3_multiple.txt");
		test_file("txt/duality.txt");
		return (0);
	}
	else
		test_file(argv[1]);
}
