#include "aux.h"

void	*ft_memset(void *buff, int value, size_t size)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)buff;
	i = 0;
	while (i < size)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (buff);
}
