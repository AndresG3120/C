/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:30:32 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:25:44 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (dest_ptr > src_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n-- > 0)
		{
			*(--dest_ptr) = *(--src_ptr);
		}
	}
	else if (dest_ptr < src_ptr)
	{
		while (n-- > 0)
		{
			*dest_ptr++ = *src_ptr++;
		}
	}
	return (dest);
}

/*void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned char *str;
	size_t c;

	c = 0;
	if (!dst && !src)
		return (0);
	str = (unsigned char *)malloc(n);
	while (c < n)
	{
		*(str + c) = *(char *)(src + c);
		c++;
	}
	c = 0;
	while (c < n)
	{
		*(char *)(dst + c) = *(str + c);
		c++;
	}
	return (dst);
}*/

/*int main(){
	char a[] = {"Hola"};
	char b[] = {"Adios"};
	printf("%s",memmove(&a, &b, 2));
	return ((0));
}*/
