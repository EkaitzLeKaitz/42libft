/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:37:05 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/25 13:11:00 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstmap => Crea una copia alterada de la lista por la funcion f. Si la copia
falla boora la lista. f devueve void *. La función devuelve un puntero a una
lista.
*/
//#include <stdio.h>
#include "libft.h"
/*
static void	*f_toupper(void *s)
{
	int		i;
	char	*c;

	c = s;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}

void	del(void *nodo)
{
	free(nodo);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodo;
	t_list	*new_lst;
	void	*buffer;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		buffer = (f((lst)->content));
		nodo = ft_lstnew(buffer);
		if (!nodo)
		{
			del(buffer);
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, nodo);
		lst = lst->next;
	}
	return (new_lst);
}
/*
int	main(void)
{
	t_list	*no1;
	t_list	*no2;
	t_list	*no3;
	t_list	*lstcpy;

	no1 = ft_lstnew(ft_strdup("uno"));
	no2 = ft_lstnew(ft_strdup("dos"));
	no3 = ft_lstnew(ft_strdup("tres"));
	no1->next = no2;
	no2->next = no3;
	no3->next = 0;
	printf("antes, lst original: ");
	printf("%s ", (char *)no1->content);
	printf("%s ", (char *)no2->content);
	printf("%s\n", (char *)no3->content);
	lstcpy = ft_lstmap(no1, f_toupper, del);
	printf("después, lst copia: ");
	while (lstcpy)
	{
		printf("%s ", (char *)lstcpy->content);
		lstcpy = lstcpy->next;
	}
	ft_lstclear(&no1, del);
	ft_lstclear(&lstcpy, del);
	return (0);
}*/
