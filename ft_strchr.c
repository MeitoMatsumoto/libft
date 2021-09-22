#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
