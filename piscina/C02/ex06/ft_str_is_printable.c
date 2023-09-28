/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:17:50 by andresga          #+#    #+#             */
/*   Updated: 2023/07/12 19:51:02 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (((str[c] >= 0) && (str[c] <= 31)) || (str[c] == 127))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_str_is_printable("dsdsadasda\n"));
	return (0);
}*/
