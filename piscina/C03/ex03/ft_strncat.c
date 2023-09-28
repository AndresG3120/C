/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:57:35 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 02:54:04 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
	{
		c1++;
	}
	while (src[c2] && c2 < nb)
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	a[4] = {"a"};
	char    b[] = {"bb"};
	printf("%s", ft_strncat(a, b, 2));
	//printf("%s", strncat(a, b, 2));
}*/
