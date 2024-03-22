/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:24:33 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 14:15:14 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strdup => Recibe una string (s1) y reserva memoria para una copia , 
realiza la copia de la string (s1) y devuelve un puntero a la copia.
Si la memoria es insuficiente devuelve NULL.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) +1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	const char	*s1;
	
	s1 = "pimiento";
	printf("%s\n", ft_strdup(s1));
	return (0);
}*/
