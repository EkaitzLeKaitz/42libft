/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:16:31 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/25 14:23:38 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strnstr=> Encuentra una subcadena const char *needle (aguja) dentro de otra
const char *haystack (pajar) especificando el numero máximo de caracteres
a buscar (len).
 - Si encuetra needle en haystack devuelve un puntero a su primera aparición.
 - Si no lo encuentra devuelve NULL / ((void *)0) / 0.
 - Si needle == '\0' devuelve un puntero al inicio de haystack.
 - Si la comparación es interrummpida por len no debe encontrarse.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i] && needle[j] && (i + j) < len)
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
	}
	return (0);
}
/*
int    main(void)
{
	const char			*str;
    const char			*needle;
    size_t				len;

    str = "aaabcabcd";
	needle = "aabc";
   	len = -1;
//	printf("Original: %s\n", strnstr(str, needle, len));
	printf("Propia: %s\n", ft_strnstr(str, needle, len));
	return (0);
}*/
