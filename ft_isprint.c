/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:26:37 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/12 13:53:52 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isprint => Comprueba si el carácter es es imprimible (devuelve != 0),
no es un caracter de control (sirve para uso interno del ordenador).
sino devuelve 0. */
int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
		return (1);
	else
		return (0);
}
