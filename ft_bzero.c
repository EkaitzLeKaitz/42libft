/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 07:31:39 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 07:29:53 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 bzero => Recibe una string generica y un entero (n).
 n siempre es un numero mas que la cadena, al empezar
 en posicion 0 los arrays.
 Al trabajar en bytes, transforma la str a caracteres de 
 un byte (char/unsigned char) y sustituye n caracteres por 
 '\0' => es 0 en ascii y representa el byte nulo (0 bytes).
 NULL => Representa un * que no apunta a nada/no encontrado.
 void dentro de una funcion representa todo tipo de datos.
 Definir una cadena entre comillas solo da permisos de 
 lectura, por eso rellenamos el array en la main.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*onebyte;
	size_t			i;

	i = 0;
	onebyte = s;
	while (i < n && n != 0 && s != 0)
	{
		onebyte[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[6];
	size_t	n;

	s[0] = 'a';
	s[1] = 'n';
	s[2] = 'd';
	s[3] = 'r';
	s[4] = 'i';
	s[5] = 'w';
	n = 0;
//	bzero(s, n);
	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
}*/
