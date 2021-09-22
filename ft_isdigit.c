#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48)
		return (0);
	if (c > 57)
		return (0);
	return (1);
}
