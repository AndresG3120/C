/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:16:15 by andresga          #+#    #+#             */
/*   Updated: 2023/07/22 17:50:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	if (!to_find[0])
		return (str);
	while (str[c2])
	{
		while (str[c2 + c1] == to_find[c1] && to_find[c1])
		{
			c1++;
		}
		if (to_find[c1] == '\0')
			return (str + c2);
		else
			c1 = 0;
		c2++;
	}
	return (NULL);
}

int	main(void)
{
	char	a[8] = {"HolaL p"};
	char    b[] = {"p"};
	printf("%s ", ft_strstr(a, b));
	printf("%s", strstr(a, b));
}
