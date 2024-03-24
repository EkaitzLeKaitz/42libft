/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:23:49 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/21 17:08:57 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_lstclear.c => Recibe un puntero al primer nodo de una lista, y los borra en
bucle hasta el final. Iguala el puntero del nodo a NULL al terminar.
 - Si lst no existe o del no existe sale de la función.
*/
//#include <stdio.h>
#include "libft.h"
/*
static void	del(void *content)
{
	free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*alter_nodo;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		alter_nodo = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = alter_nodo;
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*nodo4;
	t_list	**lst;

	nodo1 = ft_lstnew(ft_strdup("Habia"));
	nodo2 = ft_lstnew(ft_strdup("una vez"));
	nodo3 = ft_lstnew(ft_strdup("un barquito"));
	nodo4 = ft_lstnew(ft_strdup("chiquitito"));
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = nodo4;
	nodo4->next = NULL;
	lst = &nodo1;
	printf("%s\n%s\n", (char *)(*lst)->content, (char *)
	/ENTER_PARANORMINETTE/ft_lstlast(*lst)->content);
	ft_lstclear(lst, del);
	if (*lst == NULL)
		printf("Se ha completado la desinstalación");
	return (0);
}*/
