/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:02:06 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 13:19:26 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatena la cadena de destino(dst) con la cadena fuente(src) sin sobrepasar el
tamaño del buffer deseado(destsize).
 - Si dest < destsize la cadena se trunca.
 - Devuelve la longitud de la cadena concatenada.
 - Si destsize es 0 devuelve la longitud de la cadena fuente(src).
*/
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	i = len_src;
	j = 0;
	while (i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
	}
	return (ft_strlen(dst));
}
/*
int	main(void)
{
	char		*dst = "";
	const char	*src = "";
	size_t		dstsize;

	dstsize = 15;
	printf("Original: %lu\n", strlcat(dst, src, dstsize));
	printf("Libft: %zu\n", ft_strlcat(dst, src, dstsize));
	return (0);
}*/
