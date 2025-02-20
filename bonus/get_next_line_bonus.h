#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "../aux/aux.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>

// UTILS

char	*get_next_line(int fd);
char	*new_storage(char *storage);
char	*get_line(char *storage);
char	*get_buffer(int fd, char *buffer, ssize_t *bytes_read);

#endif
