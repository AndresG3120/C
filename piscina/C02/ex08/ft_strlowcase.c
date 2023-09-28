/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:31:18 by andresga          #+#    #+#             */
/*   Updated: 2023/07/12 19:58:31 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] += 32;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char a[] = {"me Cago En tOdo 3"};
	printf("%s",ft_strlowcase(a));
	return (0);
}*/
