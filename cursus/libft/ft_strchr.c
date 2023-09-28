/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:46 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 13:35:00 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int cont;
    cont = -1;
    while (s[cont])
    {
        cont++;
        if ((s[cont]) == c)
        {
            return ((char *)&s[cont]);
        }
    }
    return (NULL);
}

/*int	main(void)
{
	char	dest[] = {"Hola buenas"};
    char x = 'b';
    printf("%s", ft_strchr(dest,x));
}*/