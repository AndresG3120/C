/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 05:50:15 by andresga          #+#    #+#             */
/*   Updated: 2023/07/21 01:36:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	ft_putnbr(int nbr, char *base)
{
	int	size;

	size = ft_strlen(base);
	if (nbr >= size)
	{
		ft_putnbr(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}
	else
		ft_putchar(base[nbr]);
}

/*int	main(void)
{
	ft_putnbr(160, "0123456789ABCDEF");
	return (0);
}*/