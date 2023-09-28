/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:41:57 by andresga          #+#    #+#             */
/*   Updated: 2023/07/24 15:49:16 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;
	int	y;

	x = 1;
	y = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (x < power)
	{
		nb *= y;
		x++;
	}
	return (nb);
}

//(2,1) No funciona bie, usar contador?

/*int	main(void)
{
	printf("%d", ft_iterative_power(6, 2));
	return (0);
}*/