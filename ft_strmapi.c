#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;

	if (!s || !f)
		return (NULL);
	i = 0;
	dest = ft_strdup(s);
	if (!dest)
		return (NULL);
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i++;
	}
	return (dest);
}
