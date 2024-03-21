/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:08:38 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/21 16:33:00 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst_delone => Envia a del el content de lst y se aplica. Luego hace un free de
lst. Toma como parametro un nodo lst y libera la memoria del contenido
utilizando la funcion del, además de liberar el nodo. La memoria de next no
debe liberarse. Si dentro de una función (*del) significa que no devuelve nada,
apunta a otra función. Si es *(*del) significa que si devuelve un puntero.
Uso ft_strdup para hacer una copia con memoria del content del nodo, ya que
solo reservo la memoria del nodo en lstnew.
*/
//#include <stdio.h>
#include "libft.h"
/*
static void	del(void *content)
{
	free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*nodo1;

	nodo1 = ft_lstnew(ft_strdup("hola"));
	nodo1->next = NULL;
	printf("%s\n", (char *)(nodo1)->content);
	ft_lstdelone(nodo1, &del);
	printf("%s\n", (char *)(nodo1)->content);
	return (0);
}*/
