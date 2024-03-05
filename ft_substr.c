/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:28:36 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 10:59:38 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
substr =>  Reserva un espacio de memoria con malloc y devuelve una substring de
la string s. La substring comienza desde el indice start y tiene una longitud 
maxima de len.
Devuelve la substring resultante o NULL si falla la reserva de memoria.
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
	sub_s = malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	while (s[start] && i <= len)
	{
		sub_s[i] = s[start];
		start++;
		i++;
	}
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
