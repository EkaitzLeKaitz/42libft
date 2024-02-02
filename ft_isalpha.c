/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:29:58 by sagnzal           #+#    #+#             */
/*   Updated: 2024/01/11 14:04:10 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha => devuelve un valor distinto a de 0 si el caractér es alfabético,
sino devuelve 0*/
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
