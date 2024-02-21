/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:35:49 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 12:18:54 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcpy => Copia n bytes del area de memoria src al area dst.
Recive el  *src , *dst y size_t n.
Devuelve * al area de memoria dst.
dst debe ser mayor que src para que compile.
Si src y dst es 0 devuelve NULL o ((void*)0).
Si src es 0 copia null('\0') en dst.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*onebyte_src;
	unsigned char		*onebyte_dest;
	size_t				i;

	onebyte_src = src;
	onebyte_dst = dst;
	i = 0;
	if (src == 0 && dst == 0)
		return ((void *)0);
	while (i < n && n != 0 && dst > src)
	{
		onebyte_dst[i] = onebyte_src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[20];
	char	src[5];
	size_t	n;

	n = 3;
	src[0] = 'a';
	src[1] = 'b';
	src[2] = 'c';
	src[3] = 'd';
	src[4] = 'e';
//	memcpy(dst, src, n);
	ft_memcpy(dst, src, n);
	printf("%s\n", src, dst);
	return (0);
}*/
