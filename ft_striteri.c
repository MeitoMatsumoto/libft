#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == 0 || f == 0)
		return ((void)0);
	i = 0;
	while (*s != '\0')
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
