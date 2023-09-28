/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:07:17 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 07:08:44 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_atoi_base(char *str, char *base)
{
	int	c;
	int	x;
	int	neg;

	x = 0;
	c = 0;
	neg = 1;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	while ((str[c] == '-' || str[c] == '+'))
	{
		if (str[c] == '-')
			neg *= -1;
		c++;
	}
	while ((str[c] >= '0' && str[c] <= '9'))
	{
		x = x * 10 + (str[c] - '0');
		c++;
	}
	return (x * neg);
}