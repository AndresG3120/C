/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:36:45 by andresga          #+#    #+#             */
/*   Updated: 2023/07/11 16:51:41 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 6;
	b = 3;
	ft_div_mod(&a, &b);
	return (0);
}*/
