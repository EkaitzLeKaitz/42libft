/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:59:58 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 11:48:35 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcpy => Copia dstsize -1 caracteres de la cadena origen(src) al buffer de 
destino(dest), y garantiza que el resultado termine en caracter nulo ('\0') 
aunque la cadena de origen sea más larga que el tamaño especificado.
Devuelve el tamaño de la cadena origen.
 - dstsize => Tamaño maximo de destino incluyendo '\0'.
 - Si dstsize es 0 devuelve la cadena origen sin copiar nada.
 - Si dstsize es < src + 1(contemplo el nulo) copia src en dst hasta dstsze 
  -1 para añadir el nulo.
 - Si dstsize es >= src + 1(contemplo el nulo) copia src entera.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_src + 1)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len_src);
}
/*
int	main(void)
{
	char	*src = "coucou";
	char	dst[50] = "AAAAAAAAA";
	size_t	dstsize;

	dstsize = 2;
	printf("Orginal: %lu\n", strlcpy(dst, src, dstsize));
//	printf("Libft: %zu\n", ft_strlcpy(dst, src, dstsize));
	printf ("%s\n", dst);
	return (0);
}*/
