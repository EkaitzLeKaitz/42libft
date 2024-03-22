/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:02:06 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 13:38:43 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatena la cadena de destino(dst) con la cadena fuente(src) sin sobrepasar el
tamaño del buffer deseado(destsize).
 - Si dst < dstsize la cadena se trunca.
 - Si dstsize <= len_dst devuelve len_src + dstsize.
 - Devuelve la longitud de la cadena concatenada posible.
 - Si destsize es 0 devuelve la longitud de la cadena fuente(src).
 -
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] != '\0' && len_dst < (dstsize - 1))
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return ((len_dst - i) + len_src);
}
/*
int	main(void)
{
	char		dst[13] = "perrrro";
	const char	*src = " gato";
	size_t		dstsize;

	dstsize = 40;
//	printf("Original: %lu\n", strlcat(dst, src, dstsize));
	printf("Libft: %zu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	return (0);
}*/
