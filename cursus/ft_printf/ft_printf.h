/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:20:23 by andresga          #+#    #+#             */
/*   Updated: 2023/12/13 15:59:39 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define hex_up "0123456789ABCDEF"
# define hex_lw "0123456789abcdef"

int		ft_printf(char const *str, ...);

/* format functions */

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int num, int *count);
void	ft_puthex(unsigned long n, int *count, char * base);
void	ft_putptr(void *ptr, int *count);

/* auxiliary functions */

#endif