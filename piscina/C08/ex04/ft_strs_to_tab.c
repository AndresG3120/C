/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:59:09 by andresga          #+#    #+#             */
/*   Updated: 2023/07/27 17:23:09 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		c;
	char	*copy;

	c = 0;
	copy = malloc(sizeof(*src));
	if (copy == NULL)
		return (NULL);
	while (src[c])
	{
		copy[c] = src[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			c;

	c = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!*tab)
		return (NULL);
	while (c++ < ac)
	{
		tab[c].str = av[c];
		tab[c].cpy = ft_strdup(av[c]);
		tab[c] = ft_strlen(av[c]);
	}
	tab[c] = 0;
}
