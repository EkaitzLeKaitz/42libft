/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:15:32 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:15:41 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strmapi => Aplica la funcion f a cada caracter de la string s, creando una 
nueva string con el resultado del uso continuado de f.
Devuelve la string creada con f sobre cada caracter o NULL si hay un fallo de 
memoria.
*/
//#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_str;
	unsigned int	i;

	i = 0;
	f_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!f_str)
		return (0);
	while (s[i] != '\0')
	{
		f_str[i] = f(i, s[i]);
		i++;
	}
	f_str[i] = '\0';
	return (f_str);
}
/*
static char	fibonacci(unsigned	int i, char chr)
{
	i = 2 * i;
	chr = chr + i;
	return (chr);
}

int	main(void)
{
	char const	*s;
	char		*f_str;

	s = "aaaaaa";
	f_str = ft_strmapi(s, fibonacci);
	printf("%s\n", f_str);
	free(f_str);
	return (0);
}*/
