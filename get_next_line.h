#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 42

char	*get_next_line(int fd);
int		ft_save_buffer(int fd, char *buffer);
char	*ft_get_line(char *buffer);

#endif
