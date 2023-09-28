/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:15:56 by andresga          #+#    #+#             */
/*   Updated: 2023/07/10 12:45:33 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	aux;

	c = 0;
	size--;
	while (c < (size - c))
	{
		aux = tab[c];
		tab[c] = tab[size - c];
		tab[size - c] = aux;
		c++;
	}
}

/*int main(void){
	int a[] = {1,2,3};
	ft_rev_int_tab(a,3);
	return ((0));
}*/
