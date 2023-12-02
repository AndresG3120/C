/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:37:29 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:05:26 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long i)
{
	size_t	j;

	j = 0;
	if (i == 0)
	{
		j++;
		return (j);
	}
	if (i < 0)
	{
		i = i * -1;
		j++;
	}
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = n;
	len = ft_numlen(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = nl * -1;
	}
	while (nl > 0)
	{
		str[len] = (nl % 10) + '0';
		nl = nl / 10;
		len--;
	}
	return (str);
}

/*int main(void)
{
	printf("%s", ft_itoa(642));
}*/