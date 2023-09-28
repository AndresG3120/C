/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:58:16 by andresga          #+#    #+#             */
/*   Updated: 2023/07/13 16:30:12 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while ((src[c]))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

/*int	main(void)
{
	char a[] = {"a aaaaa"};
	char b[] = {"bbbb"};
	printf("%s",ft_strcpy(a,b));
	printf(" %s",strcpy(a,b));
}*/