/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:17:09 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/14 17:17:13 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstnew => Crear un nodo.
*/
//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(t_list));
	if (!nodo)
		return (0);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
/*
int	main(void)
{
	char	*content = "abcd";
	printf("%s\n", (char *)ft_lstnew(content)->content);
	return (0);
}*/
