/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:55:19 by andresga          #+#    #+#             */
/*   Updated: 2023/07/12 11:50:17 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	b;
	int	c;

	b = 1;
	c = 0;
	while (b != 0)
	{
		b = 0;
		while (c < (size - 1))
		{
			if (tab[c] > tab[c + 1])
			{
				aux = tab[c + 1];
				tab[c + 1] = tab[c];
				tab[c] = aux;
				b = 1;
			}
			c++;
		}
		c = 0;
	}
}

int main(){
	int a[] = {2,3,1,4,5,6,7};
	ft_sort_int_tab(a,7);
	printf("%d",a[0]);
	printf("%d",a[1]);
	printf("%d",a[2]);
	printf("%d",a[3]);
	printf("%d",a[4]);
	printf("%d",a[5]);
	printf("%d",a[6]);
	return ((0));
}
