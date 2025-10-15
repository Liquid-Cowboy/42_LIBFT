#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*tab;
	size_t	needle_size;

	tab = (char *)s1;
	if (!s1)
		return (ft_strdup(""));
	ptr = ft_strnstr(s1, set, ft_strlen(s1));
	needle_size = ft_strlen(set);
	if (!ptr)
	{
		s1 = (char *)malloc(sizeof(char) * (ft_strlen(tab) + 1));
		if (!tab)
			return (NULL);
		return (tab);
	}
	if (*(ptr + needle_size + 1) == '\0')
	{
		tab = (char *)malloc(sizeof(char) * (ptr - tab + 1));
		if (!tab)
			return(NULL);
		ft_strlcpy(tab, s1, (ptr - tab));
		return (tab);
	}
	tab = (char *)malloc(sizeof(char) * (ft_strlen(tab) - needle_size + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, (ptr - tab));
	ft_strlcat(tab, (ptr + needle_size), (ft_strlen(s1) - needle_size));	
	return (tab);
}
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("hello", "ell"));
	return (0);
}
