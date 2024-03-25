/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:31:44 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/25 15:25:02 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strtrim => Elimina todos los caracteres de la string "set" desde principio y 
desde el final de "s1" hasta encontrar un caracter no perteneciente a "set".
La string resultante se devuelve con una reserva en malloc.
Devuelve NULL si falla la memoria.
 - Si s1 == NULL, devuelve 
*/

//#include <stdio.h>
#include "libft.h"

static char	*copy(size_t i, size_t j, char *trim, char const *s1)
{
	size_t	n;

	n = 0;
	while (i < j)
	{
		trim[n] = s1[i];
		i++;
		n++;
	}
	trim[n] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return ((char *)(s1));
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[j - 1]) && s1[i] != '\0')
		j--;
	trim = malloc(sizeof(char) * ((j - i) + 1));
	if (!trim)
		return (0);
	trim = copy(i, j, trim, s1);
	return (trim);
}
/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*trim;

	s1 = "122212pacoporras12212212";
	set = "1212";
	trim = ft_strtrim(s1, set);
	printf("%s\n", trim);
	free(trim);
	return (0);
}*/
