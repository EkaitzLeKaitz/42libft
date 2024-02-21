/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:10:52 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/21 14:59:32 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
strlen => Devuelve la longitud de una cadena sin contar el caracter nulo
final.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/*
int	main(void)
{
	const char	*s;
	s = "prueba";
	printf ("Original: La longitud es %zu\n", strlen(s));
	printf ("Libft: La longitud es %zu\n", ft_strlen(s));
	return (0);
}*/
