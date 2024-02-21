/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:59:58 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 13:23:24 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcpy => Copia size -1 caracteres de la cadena origen(src) al buffer de 
destino(dest), y garantiza que el resultado termine en caracter nulo ('\0') 
aunque laa cadena de origen sea más larga que el tamaño especificado.
Devuelve el tamaño de la cadena origen.
 - size => Tamaño maximo de destino incluyendo '\0'.
 -
*/
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char	*src = "camioneta";
	char	*dst = "solo";
	size_t	dstsize;

	dstsize = 40;
	printf("Orginal: %lu\n", strlcpy(dst, src, dstsize));
	printf("Libft: %zu\n", ft_strlcpy(dst, src, dstsize));
	return (0);
}
