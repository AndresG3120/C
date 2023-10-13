#include "libft.h"

voidft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t n;

    n = 0;
    if (!(s == NULL && f == NULL))
    {
        while (s[n] != '\0')
        {
            f(n,&s[n]);
            n++;
        }
    }
}