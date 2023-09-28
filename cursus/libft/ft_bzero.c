/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:39:37 by andresga          #+#    #+#             */
/*   Updated: 2023/09/21 16:46:04 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*str;
	int		contador;

	str = s;
	contador = 0;
	while (contador < len)
	{
		str[contador] = '\0';
		contador++;
	}
	return ;
}

/*int main(){
	char a[] = {"Hola"};
	ft_bzero(&a, 0);
	printf("%s", a);
	return ((0));
}*/
