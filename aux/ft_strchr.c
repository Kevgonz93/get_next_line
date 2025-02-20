#include "aux.h"

char	*ft_strchr(const char *c, int n)
{
	if (!c)
		return (NULL);
	while (*c)
	{
		if (*c == (char) n)
			return ((char *)c);
		c++;
	}
	if (*c == (char)n)
		return ((char *)c);
	return (0);
}
