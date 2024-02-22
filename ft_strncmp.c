/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:09:23 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/22 07:45:15 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strncmp=> Compara dos string caracter a caracter hasta n caracteres.
Devuelve la diferencia en ascii. Para asegurarnos que los caracteres que se 
restan al compararlos son positivos los casteamos con unsigned char.
 - Si no hay diferencias devuelve 0.
 - Si n == 0 o str1 y str2 están vacias devuelve 0.
 - Si str1 > str2 = +.
 - Si str1 < str2 = -.
*/
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (s1 == 0 && s2 == 0))
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t	n;
	char	*s1 = "cba";
	char	*s2 = "cbc";

	n = 3;
	printf("Original: %d\n", strncmp(s1, s2, n));
	printf("Propia: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
