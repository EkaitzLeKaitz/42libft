/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:03:21 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 10:23:51 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
atoi => Convierte una string de caracteres en un entero(int), recogiendo los
primeros números(char) de la cadena.
 - Si se encuentra espacios solo al inicio de la string los salta. (incluyendo
 \t (tab horizontal), \n (salto linea), \v (tab vertical), \f (salto página),
 \r (enter).
 - Si se encuentra '-' antes de los números char, el int sera negativo.
 - Si hay mas de 1 '+' o '-' devuelve 0.
 - Si después de un número se encuentra otro tipo de char, la función termina.
 - Conviete los numeros ascii a enteros (-48). 
*/
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	neg = 0;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
	}
	if (neg == 1)
		return (-res);
	return (res);
}
/*
int	main(void)
{
	char	*str = " \n\t\v\f\r-455f3aggr";	
	printf("Original: %d\n", atoi(str));
	printf("Libft: %d\n", ft_atoi(str));
	return (0);
}*/
