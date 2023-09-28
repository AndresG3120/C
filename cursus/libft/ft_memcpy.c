/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:49:10 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 17:23:02 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		c;

	c = 0;
	while (c < n)
	{    
		*(char *)(dst + c) = *(char *)(src + c);
        c++;
	}
	return (dst);
}

/*int main(){
	char a[] = {"Hola"};
    char b[] = {"Adios"};
	printf("%s",ft_memcpy(&a, &b, 2));
	return ((0));
}*/
