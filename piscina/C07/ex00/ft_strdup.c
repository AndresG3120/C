/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 04:49:30 by andresga          #+#    #+#             */
/*   Updated: 2023/07/24 19:13:25 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*copy;

	c = 0;
	copy = malloc(sizeof(*src));
	if (copy == NULL)
		return (NULL);
	while (src[c])
	{
		copy[c] = src[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

/*int main(void)
{
	char s1[] = "Hola";
	printf("%s", ft_strdup(s1));
	return (0);
}*/
