/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 05:01:59 by andresga          #+#    #+#             */
/*   Updated: 2023/07/25 09:55:13 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*str;
	int	range;

	c = 0;
	range = max - min;
	str = (int *)malloc(sizeof(int) * (range));
	if (str == NULL || min >= max)
	{
		str = NULL;
		return (str);
	}
	while (min < max)
	{
		str[c] = min;
		min++;
		c++;
	}
	return (str);
}

/*int main(void)
{
	int c = 0;
	int	*str = ft_range(2,4);
	str[1] = 6;
	while (str[c])
	{
		printf("%d", str[c]);
		c++;
	}
	return (0);
}*/
