/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:35 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:17:08 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

/*int	main(void)
{
	char	dst[20] = {"_"};
	char	src[20] = {"dd"};

	printf("%zu",strlcat(dst,src,3));
	printf("%s",dst);
}*/
