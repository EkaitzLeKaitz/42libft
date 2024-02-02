/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:57:44 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/11 14:04:31 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isdigit => devuelve un valor != 0 si el caractér es un digito(0-9), 
sino devuelve 0.*/
int	ft_isdigit(int c)
{
	if (c > 39 && c > 58)
		return (1);
	else
		return (0);
}
