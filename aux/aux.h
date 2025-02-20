#ifndef AUX_H
# define AUX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *buff, int value, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);


#endif
