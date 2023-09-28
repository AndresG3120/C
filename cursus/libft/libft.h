/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:51:29 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 13:37:45 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(const char *str);
char *ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif