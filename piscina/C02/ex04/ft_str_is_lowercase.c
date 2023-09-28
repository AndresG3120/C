/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:14:28 by andresga          #+#    #+#             */
/*   Updated: 2023/07/11 18:32:01 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (!(((str[c] >= 'a') && (str[c] <= 'z'))))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_str_is_lowercase("sdasdasdas"));
	return 0;
}*/
