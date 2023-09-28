/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:03:44 by andresga          #+#    #+#             */
/*   Updated: 2023/07/09 17:48:38 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_maripili(char n[4])
{
	write(1, &n[0], 1);
	write(1, &n[1], 1);
	write(1, &n[2], 1);
	if ((n[0] != '7') || (n[1] != '8') || (n[2] != '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				ft_maripili(n);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

/*int main()
{
	ft_print_comb();
	return (0);
}*/