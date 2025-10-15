#include "libft.h"
#include <stdio.h>

void	*ft_my_fc(unsigned int i, char *c)
{
	(void)i;
	c = '%';
	return (c);
}

int	main(int argc, char **argv)
{
	(void)argc;

// strrchr

	//printf("%s", ft_strrchr((const char *)argv[1], 48));

// strtrim

	//printf("%s", ft_strtrim((const char *)argv[1], (const char*)argv[2]));

// split

	/*char	**ar;
	ar = ft_split(argv[1], argv[2][0]);
	while (*ar)
	{
		printf("%s\n", *ar);
		ar++;
	}
	return (0); */

// itoa
	
	/*(void)argv;
	printf("%s", ft_itoa(-199));*/

//	strmapi

//	printf("%s", ft_strmapi(argv[1], ft_my_fc));

// striteri
	ft_striteri(argv[1], &ft_my_fc);
	printf("%s", argv[1]);


}


