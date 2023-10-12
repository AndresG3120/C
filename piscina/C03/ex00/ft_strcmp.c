/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:58:48 by andresga          #+#    #+#             */
/*   Updated: 2023/07/18 09:05:01 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && s1[c] && s2[c])
		c++;
	c = s1[c] - s2[c];
	return (c);
}

int	main(void)
{
	char	a[] = {"Hola A"};
	char	b[] = {"Hola M"};
	printf("%d", ft_strcmp(a, b));
	printf(" %d", strcmp(a, b));
}
