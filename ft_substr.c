#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s || *s == 1)
		return (NULL);
	if (len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
	free(str);
}
