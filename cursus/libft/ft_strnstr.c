#include "libft.h"

char	*ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	int	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[c2] && c2 < len)
	{
		while (haystack[c2 + c1] == needle[c1] && needle[c1])
		{
			c1++;
		}
		if (needle[c1] == '\0')
			return ((char *)haystack + c2);
		else
			c1 = 0;
		c2++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	a[8] = {"HolaL p"};
	char    b[] = {"p"};
	printf("%s ", ft_strnstr(a, b, 7));
	printf("%s", strnstr(a, b, 7));
}*/