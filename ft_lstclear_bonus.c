/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:23:49 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/21 15:08:03 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_lstclear.c => Recibe un puntero al primer nodo de una lista, y los borra en
bucle hasta el final.
*/
#include <stdio.h>
#include "libft.h"

static void	del(*content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*alter_nodo;

	while (lst)
	{
		alter_nodo = &lst;
		ft_lstdelone(lst, del(lst), (void *));
		&lst = alter_nodo->next;
	}
}

int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*nodo4;
	t_list	**lst;

	lst = &nodo1;
	nodo1->content = ft_lstmew(ft_strdup("Habia"));
	nodo2->content = ft_lstmew(ft_strdup("una vez"));
	nodo3->content = ft_lstmew(ft_strdup("un barquito"));
	nodo4->content = ft_lstmew(ft_strdup("chiquitito"));
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = nodo4;
	nodo4->next = NULL;
	printf("%s\n%s\n", (char *)(lst)->content, (char *)ft_lstlast(lst)->content);
	ft_lstclear(lst, del(lst), (void *));
}
