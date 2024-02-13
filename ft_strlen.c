/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:10:52 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/22 12:00:47 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlen => Devuelve la longitud de una cadena sin contar el caracter nulo
final.*/
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/*
int	main(void)
{
	const char	*str;
	str = "prueba";
	printf ("La longitud es %zu\n", ft_strlen(str));
	return (0);
}*/
