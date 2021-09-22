#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	i = 0;
	n = (const char)n;
	c = (const char)c;
	p = (const char *)s;
	while (i < n)
	{
		if (*p == c)
			return ((void *)p);
		p++;
		i++;
	}
	return (0);
}
