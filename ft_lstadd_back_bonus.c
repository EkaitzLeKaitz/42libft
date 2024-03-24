/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:06 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/21 15:05:17 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstadd_back => Añade el nodo new al final de la lista lst.
Si lst no existe 
*/
//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
	{
		lst = &((*lst)->next);
	}
	(*lst)->next = new;
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*new;

	nodo1 = ft_lstnew("Dredi");
	nodo2 = ft_lstnew("Pata");
	nodo3 = ft_lstnew("Dija");
	new = ft_lstnew("Pija");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	new->next = NULL;
	printf("%s\n", (char *)nodo1->content);
	ft_lstadd_back(&nodo1, new);
	printf("%s\n", (char *)ft_lstlast(nodo1)->content);
	return (0);
}*/
