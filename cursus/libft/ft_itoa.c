#include "libft.h"

size_t ft_digitcount(long x)
{
    size_t c;

    c = 0;
    if (x == 0)
    {
        c++;
        return(c);
    }
    if (x < 0)
    {
        x *= -1;
        c++;
    }
    while (x > 0)
    {
        x = x / 10;
        c++;
    }
    return (c);
}

char *ft_itoa(int n)
{
    char *p;
    size_t len;
    long ln;

    ln = n;
    len = ft_digitcount(ln);
    p = (char *)malloc(sizeof(char *) * (len + 1));
    if (!p)
        return '\0';
    p[len--] = '\0';
    if (n == 0)
        p[0] = 0;
    if (ln < 0)
    {
        p[0] = '-';
        ln *= -1;
    }
    while (ln > 0)
    {
        p[len] = (ln % 10) + '0';
        ln = ln / 10;
        len--;
    }
    return (p);
}

/*int main(void)
{
    printf("%s", ft_itoa(642));
}*/