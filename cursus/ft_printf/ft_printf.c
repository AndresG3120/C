/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:16:45 by andresga          #+#    #+#             */
/*   Updated: 2023/12/11 14:05:59 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(va_list va, char type, int *c)
{
	if (type == 'c')
		ft_putchar(va_arg(va, int), c);
	else if (type == 's')
		ft_putstr(va_arg(va, char *), c);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(va, int), c);
}

int	ft_printf(char const *str, ...)
{
	int count;
	va_list va;

	if (!str)
		return (0);
	va_start(va, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_type(va, *str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(va);
	return (count);
}

int		main(void)
{
	int c = 42;
	ft_printf("Hola %d", c);
}