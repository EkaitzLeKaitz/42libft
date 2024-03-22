/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:35 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/22 10:51:42 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
isascii => Devuelve != 0 si el caractér es ascii, sino devuelve 0.
*/
//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;
	
	c = ' ';
	printf("%d\n", ft_isascii(c));
	return (0);
}*/
