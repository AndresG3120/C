/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:17:50 by andresga          #+#    #+#             */
/*   Updated: 2023/09/28 12:36:44 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char *str)
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
