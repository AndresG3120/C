/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:31:04 by andresga          #+#    #+#             */
/*   Updated: 2023/07/27 17:20:02 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb == 2)
		return (2);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
//---El 1

/*int main(void)
{
	printf("%d", ft_recursive_factorial(0));
	return (0);
}*/