/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:17:50 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 16:14:23 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 0) && (str[c] <= 127))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_isascii("dsdsadasda\n"));
	return (0);
}*/
