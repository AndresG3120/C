/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:37:35 by andresga          #+#    #+#             */
/*   Updated: 2023/07/24 13:00:53 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < (nb / 2) && (y * y) < nb)
	{
		y++;
		x = y * y;
	}
	if (x == nb)
		return (y);
	else
		return (0);
}

// Time out

/*int main(void)
{
	printf("%d",ft_sqrt(49));
	return (0);
}*/