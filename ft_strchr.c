/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:50:16 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/11 15:50:22 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strchr => Busca un caracter dentro de una cadena, 
recorriendola caracter a caracter. 
Si no lo encuentra devuelve nulo.
Si lo encuentra devuelve un puntero en la posicion donde encuentra el caracter.
Si el caracter es nulo devuelve el caracter nulo que encuentre.
*/
//#include <string.h>
//#include <stdio.h>
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)str[i]);
	}
	if (c == '\0')
		return ((char *)str[i]);
	return (NULL);
}
/*
int	main
{
	const char	*str;
	int		c;

	str = "pepito";
	c = 'i';
	printf ("original: %s\n", strchr(str, c));
//	printf ("propia: %s\n", ft_strchr(str, c));
	return (0);
}*/
