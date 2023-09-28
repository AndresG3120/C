/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:59:54 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 17:41:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	while ((src[c]) && (size > 0) && (c < size - 1))
	{
		dest[c] = src[c];
		c++;
	}
	if (size != 0)
		dest[c] = '\0';
	c = 0;
	while (src[c])
	{
		c++;
	}
	return (c);
}

/*int	main(void)
{
	char	dest[] = {"Hola"};
	char	src[] = {"AAAA"};

	printf("%lu",strlcpy(dest,src,0));
	printf("%s",dest);
}*/
