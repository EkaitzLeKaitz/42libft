/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:35:49 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 08:36:35 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcpy => Copia n bytes del area de memoria src al area dest.
Recive el  *src , *dest y size_t n.
Devuelve * al area de memoria dest.
dest debe ser mayor que src para que compile.
Si src y dest es 0 devuelve NULL o ((void*)0).
Si src es 0 copia null('\0') en dest.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*onebyte_src;
	unsigned char		*onebyte_dest;
	size_t				i;

	onebyte_src = src;
	onebyte_dest = dest;
	i = 0;
	if (src == 0 && dest == 0)
		return ((void *)0);
	while (i < n && n != 0 && dest > src)
	{
		onebyte_dest[i] = onebyte_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[20];
	char	src[5];
	size_t	n;

	n = 3;
	src[0] = 'a';
	src[1] = 'b';
	src[2] = 'c';
	src[3] = 'd';
	src[4] = 'e';
//	memcpy(dest, src, n);
	ft_memcpy(dest, src, n);
	printf("%s\n", src, dest);
	return (0);
}*/
