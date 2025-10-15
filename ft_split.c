#include "libft.h"
#include <stdio.h>

static
size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;

	if (!s)
		return (0);
	while (s[i] == c && c)
		i++;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if(!s[i])
			break;
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static
char	*dup_and_alloc(char *str, char c)
{
	char	*end;
	char	*temp;

	end = ft_strchr(str, c);
	if(!end)
		end = str + ft_strlen(str);
	temp = str;
	str = malloc(sizeof(char) * (end - str + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (const char *)temp, (end - temp + 1));
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	size_t	count;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	i = 0;
	str = (char *)s;
	ar = malloc(sizeof(char *) * (count + 1));
	if (!ar)
		return (NULL);
	while (i < count)
	{
		while (*str == c)
			str++;
		ar[i] = dup_and_alloc(str, c);
		i++;
		if (!(ft_strchr((const char *)str, c)))
			break;
		str = ft_strchr((const char *)str, c);
	}
	ar[i] = NULL;
	return (ar);
}

/*
int	main(void)
{
	char	**ar;
	int	i;
	char	*s = "\0";

	i = 0;
	ar = ft_split(s, ' ');
	printf("Number of words is: %zu\n", count_words(s, '\0'));
	while (ar[i])
	{
		printf("String %d: %s\n", i, ar[i]);
		i++;
	}
	return (0);
}*/
