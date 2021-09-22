#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (needle_len == 0 || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && 0 < len--)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && !(j > len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
