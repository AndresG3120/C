/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:09:49 by andresga          #+#    #+#             */
/*   Updated: 2023/07/19 14:01:11 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c]) && (c < n))
	{	
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = {"Mi tio tiene un camion"};
	char	src[] = {"a"};
	printf("%s",ft_strncpy(dest,src,4));
	printf(" %s",strncpy(dest,src,4));
}*/