/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:10:57 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/21 15:11:02 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstsize => Cuenta el numero de nodos que tiene una lista y devuelve un int con
el número.
*/
//#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*nodo4;

	nodo1 = ft_lstnew("un");
	nodo2 = ft_lstnew("pasito");
	nodo3 = ft_lstnew("pa");
	nodo4 = ft_lstnew("lante");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = nodo4;
	nodo4->next = NULL;
	printf("%d\n", ft_lstsize(nodo1));
	return (0);
}*/
