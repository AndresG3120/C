/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:33:33 by andresga          #+#    #+#             */
/*   Updated: 2023/07/12 10:55:32 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	maripili(char a)
{
	if (!(((a >= '0') && a <= '9') || ((a >= 'A') && (a <= 'Z')) || ((a >= 'a')
				&& (a <= 'z'))))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
			if (maripili(str[c - 1]) == 0)
				str[c] -= 32;
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			if (maripili(str[c - 1]) == 1)
				str[c] += 32;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char	a[] = {"Salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	ft_strcapitalize(a);
	printf("%s",a);
	return (0);
}*/