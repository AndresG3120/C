#include "libft.h"

size_t ft_wordcount(char *s, char c)
{
    size_t c1;
    size_t c2;

    c1 = 0;
    c2 = 0;

    while (s[c1])
    {
        if (s[c1] != c && (s[c1 + 1] == c || s[c1 + 1]) == '\0')
            c2++;
    }
    return(c2);
}

char    **ft_split (char const *s, char c)
{
    char *p;
    size_t c1;
    size_t c2;
    size_t size;

    c1 = 0;
    c2 = 0;
    p = malloc(sizeof(char *) * (ft_wordcount(s,c) + 1));
    if (!p)
        return NULL;
    while (s[c1])
    {
        if (*p != c)
        {
            c2 = 0;
            while (*p && *p != c)
            {
                size++;
                p++;
            }
            p[c2++] = ft_substr(s - size, 0, size);
        }
        else
            c1++;
    }
    p[c2] = '\0';
    return (p);
}