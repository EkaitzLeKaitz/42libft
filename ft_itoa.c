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
 - val == 1 => Negativo.
 - val == 0 => Positivo.
*/
//#include <stdio.h>
#include "libft.h"

static int	len_n(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
	}
	while (n > 9 || n < -9)
	{
		n = n / 10;
		len++;
	}
	if (n <= 9 && n >= -9)
		len++;
	return (len);
}

static char	*memfil(int n, int len, char *str_n)
{
	if (n < 0)
		str_n[0] = '-';
	while ((len > 1 && n < -9) || (len > 0 && n > 9))
	{
		if (n < 0)
			n = -n;
		str_n[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (n <= 9 && n >= 0)
		str_n[len - 1] = n + 48;
	if (n >= -9 && n < 0)
	{
		if (n < 0)
			n = -n;
		str_n[len - 1] = n + (48);
	}
	return (str_n);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		len;

	len = len_n(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str_n = malloc(sizeof(char) * len + 1);
	if (!str_n)
		return (0);
	memfil(n, len, str_n);
	str_n[len] = '\0';
	return (str_n);
}
/*
int	main(void)
{
	int	n;

	n = 143;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
