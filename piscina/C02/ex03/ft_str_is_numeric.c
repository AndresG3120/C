/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:48:19 by andresga          #+#    #+#             */
/*   Updated: 2023/07/11 18:32:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (!(((str[c] >= '0') && (str[c] <= '9'))))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_str_is_numeric("123124214124"));
	return 0;
}*/
