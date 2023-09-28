/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:43:10 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 00:59:23 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
	{
		c1++;
	}
	while (src[c2])
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
	char	a[3] = {"a"};
	char    b[] = {"fa"};
	printf("%s", ft_strcat(a, b));
	printf(" %s", strcat(a, b));
}*/
