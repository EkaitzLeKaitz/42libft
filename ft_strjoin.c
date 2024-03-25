/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:29:53 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/25 15:11:23 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strjoin => Reserva memoria con malloc y devuelve la concatenación de s1 y s2.+
Si la reserva de memoria falla devuelve NULL.
*/
//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_conc;
	size_t	len_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len_str = ft_strlen(s1) + ft_strlen(s2);
	str_conc = malloc(sizeof(char) * len_str + 1);
	if (!str_conc)
		return (0);
	while (s1[i])
	{
		str_conc[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str_conc[i + j] = s2[j];
		j++;
	}
	str_conc[i + j] = '\0';
	return (str_conc);
}
/*
int	main(void)
{
	const char	*s1;
	const char	*s2;
	char		*str_conc;

	s1 = "Cambia";
	s2 = "formas";
	str_conc = ft_strjoin(s1, s2);
	printf("%s\n", str_conc);
	free(str_conc);
	return (0);
}*/
