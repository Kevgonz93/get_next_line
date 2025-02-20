#include "aux.h"

void	*ft_calloc(size_t data, size_t size)
{
	void	*prt;

	prt = malloc(size * data);
	if (!prt)
		return (NULL);
	return (ft_memset(prt, 0, size * data));
}
