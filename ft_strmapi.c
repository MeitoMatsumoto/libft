#include "libft.h"

char	*put_null(char *str, size_t len)
{
	while (len)
	{
		str[len--] = '\0';
	}
	str[0] = '0';
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	if (s == 0 || f == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (len > 0)
	{
		put_null(str, len);
	}
	else if (!len)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
