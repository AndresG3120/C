#include "libft.h"

voidft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}