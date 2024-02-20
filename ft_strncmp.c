/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:09:23 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 09:10:18 by sagnzal          ###   ########.fr       */
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

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (str1 == 0 && str2 == 0))
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t	n;
	char	*str1 = "cba";
	char	*str2 = "cbc";

	n = 3;
	printf("Original: %d\n", strncmp(str1, str2, n));
	printf("Propia: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
