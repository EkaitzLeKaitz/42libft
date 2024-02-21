/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:59:58 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 13:48:32 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcpy => Copia size -1 caracteres de la cadena origen(src) al buffer de 
destino(dest), y garantiza que el resultado termine en caracter nulo ('\0') 
aunque laa cadena de origen sea más larga que el tamaño especificado.
Devuelve el tamaño de la cadena origen.
 - size => Tamaño maximo de destino incluyendo '\0'.
 - Si dstsize es 0 devuelve la cadena origen sin copiar nada.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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
