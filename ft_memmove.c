/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:38:08 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 07:35:54 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memmove => Copia n bytes del bloque de memoria src al bloque de memoria dst,
incluso si las areas de memoria se superponen. 
Recibe void *src, void *dst y size_t n. 
Devuelve un * al area de memoria dst.
 -Si dst >= src copia de forma descendente (n-1).
 -Si dst < src copia desde el principio hasta '\0'.
 -Si src y dst = 0 devuelve NULL ((void *)0).
 -Si src es 0 no compila.
*/

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*onebyte_src;
	unsigned char		*onebyte_dst;
	size_t				i;

	i = 0;
	onebyte_src = src;
	onebyte_dst = dst;
	if (src == 0 && dst == 0)
		return (NULL);
	while (i < len)
	{
		if (src <= dst)
		{
			onebyte_dst[len - 1] = onebyte_src[len - 1];
			len--;
		}
		if (src > dst)
		{
			onebyte_dst[i] = onebyte_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[8];
	char	src[4];
	size_t	len;

	len = 4;
	src[0] = 'a';
	src[1] = 'n';
	src[2] = 't';
	src[3] = 'i';
	dst[0] = 'p';
	dst[1] = 'r';
	dst[2] = 'o';
	dst[3] = 'n';
	dst[4] = ' ';
	dst[5] = 'g';
	dst[6] = 'a';
	dst[7] = 's';
	memmove (dst, src, len);
	ft_memmove (dst, src, len);
	printf ("%s\n", dst);
	return (0);
}*/
