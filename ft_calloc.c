/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:23:01 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 11:58:49 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
calloc => Reserva un espacio de memoria de count posiciones de size 
bytes por posicion, y los iguala a 0(NULL) para asegurarse de que no hay
nada escrito en esa memoria.

malloc => Reserva un espacio de memoria con el tamaño del dato(sizeof), el
tipo de dato(char/int/etc) multiplicado por el numero de elementos más  1 
para el nulo del final de la cadena * (ft_strlen(str) + 1).
Despues de usar malloc comprobamos si se ha reservado bien el espacio de memoria con 
un si str no tiene valor (if(!str)) retorna NULL (return (0)).

 - Ambas devuelven un puntero al espacio de memoria.
 - Si fallan devuelven NULL.

*/
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(size * (ft_strlen(count) + 1));
	if (!str)
		return (0);
	ft_bzero(
