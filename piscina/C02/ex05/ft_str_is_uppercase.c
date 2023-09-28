/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:16:09 by andresga          #+#    #+#             */
/*   Updated: 2023/07/10 11:35:07 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (!(((str[c] >= 'A') && (str[c] <= 'Z'))))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_str_is_uppercase("sdasdasdas"));
	return 0;
}*/
