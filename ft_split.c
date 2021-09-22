#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*make_word(char *cpy, char const *s, int j, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		cpy[i] = s[j - len];
		i++;
		len--;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**split(char **word, char const *s, char c, int num)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[j] && i < num)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			len++;
		}
		word[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!word)
			return (NULL);
		make_word(word[i], s, j, len);
		len = 0;
		i++;
	}
	word[i] = NULL;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		num;

	if (s == NULL)
		return (NULL);
	num = count_words(s, c);
	word = (char **)malloc(sizeof(char *) * (num + 1));
	if (!word)
		return (NULL);
	split(word, s, c, num);
	return (word);
}
