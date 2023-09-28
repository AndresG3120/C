/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:22:21 by andresga          #+#    #+#             */
/*   Updated: 2023/07/12 19:56:28 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
			str[c] -= 32;
		c++;
	}
	return (str);
}

/*int	main(void){
	char a[] = {"cAgGendie"};
	printf("%s",ft_strupcase(a));
	return (0);
}*/
