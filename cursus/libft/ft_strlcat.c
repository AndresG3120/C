/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:35 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 16:58:47 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	c1;
	size_t	c2;
	size_t	total;

	c1 = 0;
	c2 = 0;
	total = ft_strlen(dst);
	if (total < (dstsize - 1) && dstsize > 0)
	{
		while (dst[c1])
		{
			c1++;
		}
		while (src[c2] && c1 < (dstsize - 1))
		{
			dst[c1] = src[c2];
			c1++;
			c2++;
		}
		dst[c1] = '\0';
	}
	if (total >= dstsize)
		total = dstsize;
	return (total + ft_strlen(src));
}

/*int	main(void)
{
	char	dst[20] = {"_"};
	char	src[20] = {"dd"};

	printf("%zu",strlcat(dst,src,3));
	printf("%s",dst);
}*/
