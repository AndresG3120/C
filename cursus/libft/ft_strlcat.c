/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:35 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 19:08:24 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
	{
		c1++;
	}
	while (src[c2] && c2 < dstsize)
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	c1++;
	return (c1);
}


int	main(void)
{
	char	dest[20] = {"Hola buenas"};
	char	src[1] = {"M"};

	printf("%zu",strlcat(dest,src,2));
	printf("%s",dest);
}
