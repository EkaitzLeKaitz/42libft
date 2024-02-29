/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:31:44 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 09:32:13 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strtrim => Elimina todos los caracteres de la string "set" desde principio y 
desde el final de "s1" hasta encontrar un caracter no perteneciente a "set".
La string resultante se devuelve con una reserva en malloc.
Devuelve NULL si falla la memoria.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	n;
	int	len_set;
	char	*trim;

	trim = 0;
	len_set = ft_strlen(set);
	n = 0;
	i = 0;
	j = ft_strlen(s1);
	while (s1[i]  && len_set >= 0)
	{
		if (s1[i] != ft_strchr(set, set[len_set]))
			len_set--;
		else
		{
			i++;
			len_set = ft_strlen(set);
		}
	}
	while (s1[j - 1] && len_set >= 0)
	{
		if (s1[j - 1] != ft_strchr(set, set[len_set]))
			len_set--;
		else
		{
			j--;
			len_set = ft_strlen(set);
		}
	}
	while (s1[i] <= s1[j])
	{
		trim[n] = s1[i];
		i++;
	}
	return (trim);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "122212pacoporras12212212";
	set = "1212";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
