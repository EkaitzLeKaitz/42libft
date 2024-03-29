/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:57:06 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 14:02:27 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
  strrchr => (String Reverse Character) Busca un caracter dentro de una 
  cadena, recorriendola caracter a caracter empezando por el final.
  -Si no lo encuentra devuelve nulo.
  -Si lo encuentra devuelve un puntero en la posicion donde 
  encuentra el caracter.
  -Si el caracter es nulo devuelve el caracter nulo que encuentre. 
  -Si str esta vacía devuelve NULL {return (0) o return ((void *) 0)}.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] != (char)c)
			len--;
		else
			return ((char *)&s[len]);
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s;
	int		c;

	c = 'o';
	str ="comion";
//	printf ("Original %s\n", strrchr(s, c));
	printf ("Propia %s\n", ft_strrchr(s, c));
	return (0);
}
 */
