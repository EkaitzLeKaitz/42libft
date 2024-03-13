/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:14:56 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:14:59 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
itoa => Genera una string con malloc,que convierte el int en char y 
que representa el valor entero recibido como argumento. 
Los numeros negativos tienen que gestionarse.
Devuelve la string que represente el número o NULL si falla la reserva de 
memoria.
*/
//#include <stdio.h>
#include "libft.h"

static int	i_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = 1;
	return (len);
}

static char	*memfil(int n, int val, int len, char *str_n)
{
	if (val == 1)
	{
		str_n[0] = '-';
		len--;
		while (len > 0)
		{
			str_n[len] = n % 10 +48;
			n = n / 10;
			len--;
		}
	}
	while (val == 0 && len > -1)
	{
		str_n[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str_n);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		val;
	int		num;
	int		len;

	len = i_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	val = 0;
	if (n < 0)
	{
		val = 1;
		len++;
		n = -n;
	}
	num = n;
	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	str_n = malloc(sizeof(char) * len + 1);
	if (!str_n)
		return (0);
	return (memfil(n, val, len, str_n));
}
/*
int	main(void)
{
	int	n;

	n = 143;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
