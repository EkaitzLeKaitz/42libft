/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:01:55 by sagnzal           #+#    #+#             */
/*   Updated: 2024/02/19 08:49:05 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*toupper => Convierte una letra minuscula a mayuscula. */
//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 123 && chr > 96)
		c = c - 32;
	return (c);
}
/*
int main(void)
{
    int c;
    c = 'a';
    printf("%c", ft_toupper(c));
    return (0);
}*/
