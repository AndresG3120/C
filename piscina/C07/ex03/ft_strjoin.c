/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:49:46 by andresga          #+#    #+#             */
/*   Updated: 2023/07/27 10:53:33 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c1;
	int		c2;
	int		c3;
	char	*p;

	c1 = 0;
	c2 = 1;
	while (c1 < size)
		c2 += ft_strlen(strs[c1++]) + ft_strlen(sep);
	p = (char *)malloc(sizeof(c2));
	c1 = 0;
	c2 = 0;
	c3 = 0;
	while (c2 < size)
	{
		c3 = 0;
		while (strs[c2][c3])
			p[c1++] = strs[c2][c3++];
		c3 = 0;
		while (sep[c3])
			p[c1++] = sep[c3++];
		c2++;
	}
	return (p);
}

/*int	main(void){
    char    *tab[4];
    tab[0] = "uno";
    tab[1] = "dos";
    tab[2] = "tres";
    tab[3] = "cuatro";
    printf("%s", ft_strjoin(4, tab, "--ESPACIO--"));
    return (0);
}*/