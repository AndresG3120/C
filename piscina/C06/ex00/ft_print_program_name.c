/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 03:36:54 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 10:09:22 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c;

	c = 0;
	while (argv[0][c] && argc != 0)
	{
		write(1, &argv[0][c], 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
