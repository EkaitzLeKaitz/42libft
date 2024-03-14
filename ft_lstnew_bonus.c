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
