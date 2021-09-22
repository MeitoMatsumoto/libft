#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(ft_strlen((char *)src) + 1);
	if (!dest)
		return (dest);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (dest);
}
