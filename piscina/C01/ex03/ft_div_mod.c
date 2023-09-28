/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:57:37 by andresga          #+#    #+#             */
/*   Updated: 2023/07/09 15:27:53 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;

	*div = a / b;
	*mod = a % b;
	x = *mod;
}

/*int main(){
	int a = 6;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
	return ((0));
}*/
