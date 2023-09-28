/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 05:37:09 by andresga          #+#    #+#             */
/*   Updated: 2023/07/26 15:25:47 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;

	c = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[c] = min;
		c++;
		min++;
	}
	return (c);
}

int	main(void)
{
	int *p;
	int i;
	int size;
	
	size = 0;
	i = 0;
	size = ft_ultimate_range(&p, 0, 6);
	while (i < size){
		printf ("%d", p[i]);
		i++;
	}
}
