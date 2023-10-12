# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 13:11:55 by andresga          #+#    #+#              #
#    Updated: 2023/09/28 13:47:54 by andresga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la biblioteca
NAME = libft.a

# Lista de archivos fuente
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

# Lista de objetos
OBJ = $(SRC:.c=.o)

# Compilador
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

# Regla de compilación genérica
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	del -f $(OBJ)

fclean: clean
	del -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
