/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:49:10 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 18:57:13 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (0);
	while (n-- > 0)
	{
		*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	return (dst);
}

/*int main(){
	char a[] = {"Hola"};
	char b[] = {"Adios"};
	printf("%s",ft_memcpy(&a, &b, 2));
	return ((0));
}*/
