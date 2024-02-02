/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:35 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/12 13:19:04 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii => Devuelve != 0 si el caractér es ascii, sino devuelve 0.*/
int	ft_isascii(int c)
{
	if (c > 0 && c <= 127)
		return (1);
	else
		return (0);
}
