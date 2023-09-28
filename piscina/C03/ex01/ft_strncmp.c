/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:26:49 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 01:00:00 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && s1[c] && s2[c] && c < n - 1)
		c++;
	if (n != 0)
		c = s1[c] - s2[c];
	return (c);
}

/*int	main(void)
{
	char a[] = {"HolaL"};
	char b[] = {"HolaM"};
	printf("%d",ft_strncmp(a,b,0));
	printf(" %d",strncmp(a,b,0));
}*/
