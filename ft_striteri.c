/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:16:20 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/25 14:37:47 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
striteri => Aplica la funcion (f) a cada caracter de la string s y la dirección
del propio caracter, que podra modificarse si es necesario. Enviamos los datos
a la funcion auxiliar desde la funcion principal, que a su vez los recibe del
main.
La funcion no deveulve nada.
*/
//#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || s[i] == '\0')
		return ;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
/*
static void	ft_toUp(unsigned int i, char *s)
{
	if ((i % 2 == 0) && (*s >= 'a' && *s <= 'z'))
		*s = *s - 32;
}

int	main(void)
{
	char	s[] = "capricornio";

	printf("%s\n", s);
	ft_striteri(s, ft_toUp);
	printf("%s\n", s);
	return (0);
}*/
