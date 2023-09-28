/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:55:15 by andresga          #+#    #+#             */
/*   Updated: 2023/07/19 14:55:52 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 32 || str[c] > 126)
		{
			write(1, "\\", 1);
			ft_putchar("0123456789abcdef"[str[c] / 16]);
			ft_putchar("0123456789abcdef"[str[c] % 16]);
		}
		else
			ft_putchar(str[c]);
		c++;
	}
}

/*int	main(void)
{
	char	x[] = {"Coucou\ntu vas bien ?"};
	ft_putstr_non_printable(x);
}*/
