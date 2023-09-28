/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:02:13 by andresga          #+#    #+#             */
/*   Updated: 2023/07/09 15:27:06 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *b;
	*b = *a;
	*a = x;
}

/*int main(){
	int a = 3;
	int b = 4;
	ft_swap (&a,&b);
	return ((0));
}*/
