#include "libft.h"
#include <stdio.h>

static
char	*ft_putnbr(int n, char *dest, int *i)
{
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		dest[*i] = '-';
		nbr = -nbr;
		i++;
	}
	if (nbr < 10)
		dest[*i] = (char)(nbr + '0');
	else
		ft_putnbr(nbr / 10, dest, i);
	dest[*i] = (char)((nbr % 10) + '0');
	(*i)++;

	return (dest);
}

char	*ft_itoa(int n)
{
	long	digits;
	long	nbr;
	char	*dest;
	int	i;

	i = 0;
	digits = 1;
	nbr = (long)n;
	if (nbr < 0)
	{
		digits++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		digits++;
	}
	dest = (char *)malloc(sizeof(char) * (digits + 1));
	if (!dest)
		return (NULL);
	dest = ft_putnbr(n, dest, &i);
	return (dest);	
}

int	main(void)
{
	printf("%s", ft_itoa(-1234));
	return (0);
}
