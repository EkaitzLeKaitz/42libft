/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:38:41 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 08:48:30 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*tolower => Convierte una letra mayuscula a minuscula. */
//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 'a';
	printf("%d", ft_tolower(c));
	return (0);
}*/
