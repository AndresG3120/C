/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_family.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:04:25 by andresga          #+#    #+#             */
/*   Updated: 2023/12/11 13:51:04 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
    (*count)++;
}

void	ft_putnbr(int n, int *count)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(1, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr(copia / 10, count);
		ft_putchar((copia % 10) + '0', count);
	}
	else
		ft_putchar(copia + '0', count);
}

void	ft_putstr(char *str, int *count)
{
	int	c;

	c = 0;
	while (str)
	{
		ft_putchar(*str, count);
		str++;
	}
}
