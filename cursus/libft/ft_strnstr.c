/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:37:12 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:27:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *dest, unsigned int len)
{
	unsigned int	dest_len;
	unsigned int	i;

	if (*dest == '\0')
		return ((char *)source);
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (*source != '\0' && len >= dest_len)
	{
		if (*source == *dest)
		{
			i = 0;
			while (i < dest_len && source[i] == dest[i])
				i++;
			if (i == dest_len)
				return ((char *)source);
		}
		source++;
		len--;
	}
	return ((char *)0);
}

/*char	*ft_strnstr(const char *source, const char *dest, unsigned int len)
{
	unsigned int	dest_len;
	unsigned int	i;

	if (*dest == '\0')
		return ((char *)source);
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (*source != '\0' && len >= dest_len)
	{
		if (*source == *dest)
		{
			i = 0;
			while (i < dest_len && source[i] == dest[i])
				i++;
			if (i == dest_len)
				return ((char *)source);
		}
		source++;
		len--;
	}
	return ((char *)0);
}*/

/*int	main(void)
{
	char	a[8] = {"HolaL p"};
	char    b[] = {"p"};
	printf("%s ", ft_strnstr(a, b, 7));
	printf("%s", strnstr(a, b, 7));
}*/