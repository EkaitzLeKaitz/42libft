/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:28:36 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 14:36:07 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
substr =>  Reserva un espacio de memoria con malloc y devuelve una substring de
la string s. La substring comienza desde el indice start y tiene una longitud 
maxima de len.
Devuelve la substring resultante o NULL si falla la reserva de memoria.
 - Si el tamaño de s < start reserva memoria y hace una copia de '\0' y 
 devuelve la copia.
 - Si len_s desde start hasta '\0' < len(longitud de la sub_s) 
*/
//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	while (i < len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
/*
int	main(void)
{
	char const	*s;
	unsigned int	start;
	size_t		len;
	char		*sub_s;


	s = "";
	start = 5;
	len = 	7;
	sub_s = ft_substr(s, start, len);
	printf("%s\n", sub_s);
	free(sub_s);
	return (0);
}*/
