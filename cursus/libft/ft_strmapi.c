#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t n;
    char *str;

    if (s == NULL && f == NULL)
        return (NULL);
    n = ft_strlen((char *)s);
    str = (char *)malloc(sizeof(*s)*(n + 1));
    if (!str)
        return (null);
    n = 0;
    while (s[n] != '\0')
    {
        str[n] = f(n, s[n]);
        n++;
    }
    str[n] = '\0';
    return (str);
}
    