/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:29:51 by andresga          #+#    #+#             */
/*   Updated: 2023/07/24 15:49:48 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	y;
	int	c;

	c = 2;
	y = nb;
	if (nb < 0)
		nb = 1;
	if (nb == 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
		if (nb == 2)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c < (nb / 2) && c < 46341)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

// time out

/*int main(void)
{
	printf("%d",ft_find_next_prime(40));
	return (0);
}*/
