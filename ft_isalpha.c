#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A')
	{
		return (0);
	}
	if ((c > 'Z' && c < 'a') || (c > 'z'))
	{
		return (0);
	}
	return (1);
}
