/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:20:23 by andresga          #+#    #+#             */
/*   Updated: 2023/12/11 13:47:41 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *str, ...);

/* format functions */

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int num, int *count);

/* auxiliary functions */

#endif