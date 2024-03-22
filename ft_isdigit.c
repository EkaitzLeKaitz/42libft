/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:57:44 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 10:45:03 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isdigit => devuelve un valor != 0 si el caractér es un digito(0-9), 
sino devuelve 0.
*/
//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = '5';
	printf("%i\n", ft_isdigit(c));
	return (0);
}*/
