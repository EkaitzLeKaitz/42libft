/*
lstiter => Aplica una funcion al content de cada nodo.
*/
//#include <stdio.h>
#include "libft.h"
/*
static void	f_toupper(void *s)
{
	int	i;
	char	*c;

	c = s;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f((lst)->content);
		lst = (lst)->next;
	}
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	nodo1 = ft_lstnew(ft_strdup("HaNTi"));
	nodo2 = ft_lstnew(ft_strdup("moni"));
	nodo3 = ft_lstnew(ft_strdup("DIMOnI"));
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	ft_lstiter(nodo1, f_toupper);
	printf("%s\n", (char *)(nodo1)->content);
	printf("%s\n", (char *)(nodo2)->content);
	printf("%s\n", (char *)(nodo3)->content);
	return (0);
}*/
