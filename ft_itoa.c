#include "libft.h"

void	culclate(long n, char *s)
{
	int	i;
	int	l;

	if (n)
	{
		i = 0;
		l = n;
		l /= 10;
		while (l)
		{
			l /= 10;
			i++;
		}
		culclate(n / 10, s);
		if (n < 0)
		{
			n *= -1;
			s[0] = '-';
			i++;
		}
		s[i] = n % 10 + '0';
		s[i + 1] = '\0';
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	long	tendigit;
	int		count;

	count = 1;
	nbr = n;
	tendigit = n;
	if (nbr < 0)
	{
		nbr *= -1;
		count += 1;
	}
	while (nbr > 10)
	{
		nbr = nbr / 10;
		count++;
	}
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	culclate(tendigit, str);
	return (str);
}
