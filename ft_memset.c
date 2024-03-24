/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:53:26 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 15:09:53 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 memset => Recibe una espacio de memoria de cualquier tipo, un
 size_t n que indica el numero de carcteres que va a alterar
 memset, y un int c que indica el nuevo valor que tendra 
 cada byte de b. (Al convertir a bytes)
 Convierte la cadena a unsigned char, y la sustituye por c.
 Devuelve la dirección de memoria original ya modificada.
 */
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*onebyte;

	i = 0;
	onebyte = b;
	while (i < n)
	{
		onebyte[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	b[4];
	int	c;
	size_t	n;

	n = 4;
	c = 1432;
	b[0] = 'H';
	b[1] = 'O';
	b[2] = 'L';
	b[3] = 'I';
//	memset(b, c, n);
	ft_memset(b, c, n);
	printf("%s\n", b);
	return (0);
}*/
