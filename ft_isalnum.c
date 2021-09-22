#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 'A' && c > '9')
		return (0);
	if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	if ((c < '0'))
		return (0);
	return (1);
}
