#include "aux.h"

static char	*pre_join(char *str)
{
	char	*result;

	result = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (result)
		ft_memcpy(result, str, ft_strlen(str));
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (pre_join(s2));
	if (!s2)
		return (pre_join(s1));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = ft_calloc(i + j + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, i);
	ft_memcpy(result + i, s2, j);
	result[i + j] = '\0';
	free(s1);
	return (result);
}
