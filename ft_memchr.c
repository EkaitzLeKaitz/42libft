/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:30:58 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 08:33:40 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memchr => Recorre un area de memoria byte a byte n veces buscando c.
Convertir a unsigned char para pasar a bytes la string y c.
Devuelve un puntero a byte localizado o NULL ((void *) 0) si no se encuenta en
n bytes.
Para devolver un puntero & y donde apunta. O s + numero de la posición.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*onebyte_s;
	unsigned char		onebyte_c;
	size_t				i;

	onebyte_s = s;
	onebyte_c = c;
	i = 0;
	while (i < n)
	{
		if (onebyte_s[i] == onebyte_c)
			return ((void *)(s + i));
		else
			i++;
	}
	return ((void *) 0);
}
/*
int	main(void)
{
	char	c;
	char	s[4];
	size_t	n;

	c = 'z';
	n = 4;
	s[0] = 'a';
	s[1] = 'n';
	s[2] = 't';
	s[3] = 'i';
	//printf ("%s\n", memchr(s, c, n));
	printf ("%s\n", ft_memchr(s, c, n));
	return (0);
}*/
