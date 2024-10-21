#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

<<<<<<< HEAD
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
=======
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
>>>>>>> refs/remotes/origin/main

char	*get_next_line(int fd);
int		ft_save_buffer(int fd, char *buffer);
char	*ft_get_line(char *buffer);

#endif
