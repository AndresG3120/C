/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_family.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:04:25 by andresga          #+#    #+#             */
/*   Updated: 2023/12/15 13:24:55 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putnbr(int n, int *count)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		ft_putchar('-', count);
	}
	if (copia > 9)
	{
		ft_putnbr(copia / 10, count);
		ft_putchar((copia % 10) + '0', count);
	}
	else
		ft_putchar(copia + '0', count);
}

void	ft_putstr(char *str, int *count)
{
	int	c;

	c = 0;
    if (!str)
        ft_putstr("(null)", count);
    else
    {    
        while (*str)
        {
            ft_putchar(*str, count);
            str++;
        }
    }
}

void	ft_putptr(void *ptr, int *count)
{
    unsigned long c;

    c = (unsigned long)ptr;
	ft_putstr("0x",count);
    ft_putptr2(c, count, hex_lw);
}

int	ft_strlen(char *str)
{
	int c;

    c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		c;
	char	aux;

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

void	ft_putptr2(unsigned long int n, int *count, char * base)
{
    unsigned long int    len;

    len = ft_strlen(base);
	if (n >= len)
	{
		ft_putptr2(n / len, count, base);
		ft_putchar(base[n % len], count);
	}
	else
		ft_putchar(base[n], count);
}

void	ft_puthex(unsigned int n, int *count, char * base)
{
    unsigned int    len;

    len = ft_strlen(base);
	if (n >= len)
	{
		ft_puthex(n / len, count, base);
		ft_putchar(base[n % len], count);
	}
	else
		ft_putchar(base[n], count);
}
