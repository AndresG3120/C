/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:49:10 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:24:47 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char			*dest_ptr;
	const char		*src_ptr;
	unsigned int	i;

	if (dest == 0 && src == 0)
		return (0);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (0);
	while (n-- > 0)
	{
		*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	return (dst);
}*/

/*int main(){
	char a[] = {"Hola"};
	char b[] = {"Adios"};
	printf("%s",ft_memcpy(&a, &b, 2));
	return ((0));
}*/
