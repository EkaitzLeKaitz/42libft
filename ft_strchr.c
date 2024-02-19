/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:54:59 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 08:55:31 by sagnzal          ###   ########.fr       */
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

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)&str[i]);
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}
/*
int	main(void)
{
	const char	*str;
	int		c;

	str = "comion";
	c = 'o';
//	printf ("Original: %s\n", strchr(str, c));
	printf ("Propia: %s\n", ft_strchr(str, c));
	return (0);
}*/
