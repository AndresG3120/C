/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:17:40 by andresga          #+#    #+#             */
/*   Updated: 2023/07/27 12:18:55 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

# define EVEN_MSG "Es par",
# define ODD_MSG "Es impar",
# define SUCCESS 0,
# define EVEN(nbr) (nbr % 2 == 0),

#endif