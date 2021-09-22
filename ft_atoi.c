#include "libft.h"

int	isover(int nbr)
{
	if (nbr == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	long	c;
	long	s;
	long	nbr;

	c = 0;
	s = 1;
	nbr = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] != '\0' && ft_isdigit(str[c]))
	{
		if ((nbr * 10 + (str[c] - '0')) / 10 != nbr)
			return (isover(s));
		nbr = (str[c] - '0') + (nbr * 10);
		c++;
	}
	return (nbr * s);
}
