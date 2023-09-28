/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 03:49:59 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 12:59:18 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = argc - 1;
	while (c2 > 0)
	{
		while (argv[c2][c1])
		{
			write(1, &argv[c2][c1], 1);
			c1++;
		}
		c1 = 0;
		c2--;
		write(1, "\n", 1);
	}
	return (0);
}
