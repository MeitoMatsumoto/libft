#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	i = 0;
	if (p1 == NULL && p2 == NULL)
		return (NULL);
	if (p1 == p2)
		return (p1);
	if (p1 > p2)
	{
		i = n;
		while (i--)
			p1[i] = p2[i];
		return (dest);
	}
	while (n--)
		*p1++ = *p2++;
	return (dest);
}
