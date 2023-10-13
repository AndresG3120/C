/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:26:49 by andresga          #+#    #+#             */
/*   Updated: 2023/10/13 17:55:48 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
	{
		if (c < (n - 1))
			c++;
		else
			return (0);
	}
    return ((unsigned char)(s1[c]) - (unsigned char)(s2[c]));
}

/*int	main(void)
{
	char a[] = {"HolaL"};
	char b[] = {"HolaM"};
	printf("%d",ft_strncmp(a,b,0));
	printf(" %d",strncmp(a,b,0));
}*/
