/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:05:30 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 11:07:53 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int cont;
    cont = -1;
    char *p;
    p = NULL;
    while (s[cont])
    {
        cont++;
        if ((s[cont]) == c)
        {
            p = (char *)&s[cont];
        }
    }
    return (p);
}

/*int	main(void)
{
	char	dest[] = {"Hola buenbas"};
    char x = 'b';
    printf("%s", ft_strrchr(dest,x));
}*/