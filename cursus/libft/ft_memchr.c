/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:08:57 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 17:58:32 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*uc;

	uc = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if ((uc[cont]) == (unsigned char)c)
		{
			return ((void *)(uc + cont));
		}
		cont++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	dest[] = {"Hola buenas"};
	char    x = 'b';
	printf("%d", ft_memchr(dest,x,7));
}*/