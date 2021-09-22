#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	q;

	q = c;
	p = (unsigned char *)str;
	while (n-- > 0)
		*p++ = q;
	return (str);
}
