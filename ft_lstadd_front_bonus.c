/*
ft_lstadd_front => Añade el nodo new al principio de la lista lst.
Primero creamos el main con la lista lst y sus nodos respectivos, y el nodo
new. Imprimo lst para comprobar que apunta al primer nodo antes de llamar
a la función.
Si lst o new no existen sale de la funcion (return).
return ; => Cuando la funcion no deveulve nada, return se usa para salir de
la función.
Establecemos como next de new el primer nodo de lst y luego igualamos *lst
a new, para que pase a ser el primero de la lista.
*/
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*new;
	t_list	**lst;

	nodo1 = ft_lstnew("pata");
	nodo2 = ft_lstnew("pato");
	nodo3 = ft_lstnew("pita");
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	lst = &nodo1;
	new = ft_lstnew("dija");
	new->next = NULL;
	printf("%s\n", (char *)(*lst)->content);
	ft_lstadd_front(lst, new);
	printf("%s\n", (char *)(*lst)->content);
	return (0);
}
