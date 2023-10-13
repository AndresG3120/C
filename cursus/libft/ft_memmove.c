/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:30:32 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 18:57:35 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	size_t	c;

	c = 0;
    if (!dst && !src)
        return (0);
	str = (unsigned char *)malloc(len);
	while (c < len)
	{
		*(str + c) = *(char *)(src + c);
		c++;
	}
	c = 0;
	while (c < len)
	{
		*(char *)(dst + c) = *(str + c);
		c++;
	}
	return (dst);
}

/*int main(){
	char a[] = {"Hola"};
	char b[] = {"Adios"};
	printf("%s",memmove(&a, &b, 2));
	return ((0));
}*/
