/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_family.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:04:25 by andresga          #+#    #+#             */
/*   Updated: 2023/12/13 16:48:20 by andresga         ###   ########.fr       */
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
	write(1,"0x",2);
    *count += 2;
    ft_puthex(c, count, hex_lw);
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

void	ft_puthex(unsigned long n, int *count, char * base)
{
	char	res[25];
	int		c;
    char    len;
    
    len = ft_strlen(base);
	c = 0;
    if (n == 0)
        ft_putchar('0', count);
    else
    {
        while (n != 0)
        {
            res[c] = base[n % len];
            c++;
            n /= len;
        }
        res[c] = '\0';
        ft_rev_char_tab(res, ft_strlen(res));
        ft_putstr(res, count);
    }
}
