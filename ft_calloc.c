/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:23:01 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/23 08:35:28 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
calloc => Reserva un espacio de memoria de count posiciones de size 
bytes por posicion, y los iguala a 0(NULL) para asegurarse de que no hay
nada escrito en esa memoria.

malloc => Reserva un espacio de memoria con el tamaño del dato(sizeof), el
tipo de dato(char/int/etc) multiplicado por el numero de elementos más  1 
para el nulo del final de la cadena * (ft_strlen(str) + 1).
Despues de usar malloc comprobamos si se ha reservado bien el espacio de memoria
con un si str no tiene valor (if(!str)) retorna NULL (return (0)).

 - Ambas devuelven un puntero al espacio de memoria.
 - Si fallan devuelven NULL.

*/
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	total_size;

	total_size = count * size;
	str = malloc(total_size);
	if (!str)
		return (0);
	ft_bzero(str, total_size);
	return (str);
}
/*
int	main(void)
{
	char	*str = "Avioneta";
	size_t	size;
	size_t	count;

	count = ft_strlen(str);
	size = sizeof(char);
//	str = calloc(count, size);
	str = ft_calloc(count, size);
	if (!str)
		printf("fallo");
	else
		printf("éxito");
	return (0);
}*/
