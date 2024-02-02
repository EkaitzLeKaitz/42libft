/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:08:56 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/11 14:16:18 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalnum => Devuelve un valor != 0 si es un digito o una letra,
sino devuelve 0.*/
int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
