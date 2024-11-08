#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void	test_file(const char *filename)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (perror("ERROR: The file could not be read."));
	printf("Testing file: %s\n", filename);
	while ((line = get_next_line(fd))!= NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	printf("\n---\n");
}

int	main(void)
{
	test_file("0_empty.txt");
	test_file("5_single.txt");
	test_file("2_long.txt");
	test_file("6_wemptylines.txt");
	test_file("4_onlynl.txt");
	// test_file("1_large.txt");
	test_file("3_multiple.txt");
	return (0);
}
