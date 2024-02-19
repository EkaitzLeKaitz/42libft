/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:12:17 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 10:46:23 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcmp => Convierte las cadenas a bytes y las compara byte a byte hasta n bytes.
Devuelve 0 si las dos son identicas, sino devuelve l diferencia de la primera
menos la segunda. Si las dos son 0 actua como identicas tbb.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*onebyte_s1;
	const unsigned char	*onebyte_s2;
	size_t				i;

	onebyte_s1 = s1;
	onebyte_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (onebyte_s1[i] != onebyte_s2[i])
			return (onebyte_s1[i] - onebyte_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[4];
	char	s2[4];
	size_t	n;

	n = 4;
	
	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = 'c';
	s1[3] = 'd';
	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = 'd';
	s2[3] = 'd';
	printf("%d\n",memcmp(s1, s2, n));
	printf("%d\n",ft_memcmp(s1, s2, n));
	return (0);
}*/
