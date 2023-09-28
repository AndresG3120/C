/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:23:40 by andresga          #+#    #+#             */
/*   Updated: 2023/07/24 12:41:07 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c < nb)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

//nb < 2, antes nb == 1 && nb == 0

/*int main(void)
{
	printf("%d",ft_is_prime(5));
	return (0);
}*/
