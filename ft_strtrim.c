#include "libft.h"

int	ft_check(char c, char *set)
{
	while (*set != '\0')
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

int	trim_lead(char *str, char *set)
{
	int	start;

	start = 0;
	while (ft_check(str[start], set) == 1)
	{
		start++;
	}
	return (start);
}

int	trim_end(char *str, char *set)
{
	int	end;

	end = ft_strlen(str) - 1;
	while (ft_check(str[end], set) == 1)
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		i;

	start = trim_lead((char *)s1, (char *)set);
	end = trim_end((char *)s1, (char *)set);
	if (start > end)
		return ("");
	p = (char *)malloc(sizeof(char) * (end - start + 2));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
