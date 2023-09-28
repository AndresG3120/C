/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:19:33 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 13:38:24 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t c;
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    c = ft_strlen((char *)s1);
    while (c && ft_strchr(set,s1[c]))
        c--;
    return(ft_substr(s1, 0, c + 1));
}

int	main(void)
{
	char	a[] = {"paco_paco"};
	char    b[] = {"p"};
	printf("%s ", ft_strtrim(a, b));
}
