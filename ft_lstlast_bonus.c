/*
lstlast => Devuelve el ultimo nodo de la lista. si lst no existe devuelve NULL.
*/
//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;

	nodo1 = ft_lstnew("Antes");
	nodo2 = ft_lstnew("fue");
	nodo3 = ft_lstnew("Es ahora");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	printf("%s\n", (char *)(nodo1)->content);
	printf("%s\n", (char *)ft_lstlast(nodo1)->content);
	return (0);
}*/
