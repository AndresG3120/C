/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:11:42 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 16:13:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (!(((str[c] >= 'A') && (str[c] <= 'Z'))
				|| ((str[c] >= 'a') && (str[c] <= 'z'))))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void){
	printf("%d",ft_str_is_alpha(""));
	return 0;
}*/