/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:54:59 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 07:38:48 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
strchr => (String Character) Busca un caracter dentro de una cadena, 
recorriendola caracter a caracter. 
 -Si no lo encuentra devuelve nulo.
 -Si lo encuentra devuelve un puntero en la posicion donde encuentra 
  el caracter.
 -Si el caracter es nulo devuelve el caracter nulo que encuentre.
 -Si str esta vacia devuelve NULL {return (0) o return((void *) 0)}.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else
			return ((char *)&s[i]);
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	const char	*s;
	int		c;

	s = "comion";
	c = 'o';
//	printf ("Original: %s\n", strchr(s, c));
	printf ("Propia: %s\n", ft_strchr(s, c));
	return (0);
}*/
