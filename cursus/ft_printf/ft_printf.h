/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:20:23 by andresga          #+#    #+#             */
/*   Updated: 2023/12/15 13:12:24 by andresga         ###   ########.fr       */
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
void	ft_puthex(unsigned int n, int *count, char * base);
void	ft_putptr(void *ptr, int *count);
void	ft_putptr2(unsigned long int n, int *count, char * base);

/* auxiliary functions */

#endif