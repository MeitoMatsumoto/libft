#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*str;

	str = malloc(number * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, number * size);
	return ((void *)str);
}
