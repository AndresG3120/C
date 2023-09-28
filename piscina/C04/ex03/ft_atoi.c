/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:20 by andresga          #+#    #+#             */
/*   Updated: 2023/07/20 01:01:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
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

/*int main(void)
{
    char s1[] = {"676"};
	printf("%d",ft_atoi(s1));
    return (0);
}*/