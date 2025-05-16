/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:46:48 by andresga          #+#    #+#             */
/*   Updated: 2024/08/19 15:46:48 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_modified(char *s1, char *s2)
{
	size_t	size;
	char	*p;
	size_t	c1;
	size_t	c2;

	c1 = -1;
	c2 = 0;
	if (!s1 || !s2)
		return (0);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	while (s1[++c1])
		p[c1] = s1[c1];
	while (s2[c2])
	{
		p[c1] = s2[c2];
		c1++;
		c2++;
	}
	p[c1] = '\0';
	free(s1);
	return (p);
}

char	*get_line2(char *text)
{
	int		c;
	char	*str;

	c = 0;
	if (!text[c])
		return (NULL);
	while (text[c] && text[c] != '\n')
		c++;
	str = ft_calloc(c + 2, sizeof(char));
	c = 0;
	while (text[c] && text[c] != '\n')
	{
		str[c] = text[c];
		c++;
	}
	if (text[c] && text[c] == '\n')
		str[c++] = '\n';
	str[c] = 0;
	return (str);
}

char	*clean_first_line(char *text)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (text[i] && text[i] != '\n')
		i++;
	if (!text[i])
	{
		free (text);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(text) - i + 1), sizeof(*text));
	if (!str)
		return (NULL);
	while (text[++i])
		str[j++] = text[i];
	str[j] = '\0';
	free (text);
	return (str);
}

char	*read_stack(int fd, char *text)
{
	char	*buff;
	int		size;

	size = 1;
	if (!text)
		text = ft_calloc(1, 1);
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (size > 0 && !(ft_strchr(text, '\n')))
	{
		size = read(fd, buff, BUFFER_SIZE);
		if (size == -1)
		{
			free (text);
			free (buff);
			return (NULL);
		}
		buff[size] = 0;
		text = ft_strjoin_modified(text, buff);
	}
	free (buff);
	return (text);
}

char	*get_next_line(int fd)
{
	char		*output;
	static char	*text;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	text = read_stack(fd, text);
	if (!text)
		return (NULL);
	output = get_line2(text);
	text = clean_first_line(text);
	return (output);
}

/*int main()
{
	int fd = open("hola.txt", O_RDONLY);
	char *a;

	while ((a = get_next_line(fd)))
	{
		printf("%s", a);
	}

	// printf("%s", get_next_line(fd));

	return 0;
}*/