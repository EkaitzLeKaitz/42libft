/* 
  strrchr => (String Reverse Character) Busca un caracter dentro de una 
  cadena, recorriendola caracter a caracter empezando por el final.
  -Si no lo encuentra devuelve nulo.
  -Si lo encuentra devuelve un puntero en la posicion donde 
  encuentra el caracter.
  -Si el caracter es nulo devuelve el caracter nulo que encuentre. 
  -Si str esta vacía devuelve NULL {return (0) o return ((void *) 0)}.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if (str == "")
		return ((void*) 0);
	if (c == '\0')
		return ((char*)&str[len]);
	while (len >= 0)
	{
		if (str[len] != c)
			len--;
		else
			return ((char *)&str[len]);
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str;
	int		c;

	c = 'o';
	str ="comion";
//	printf ("Original %s\n", strrchr(str, c));
	printf ("Propia %s\n", ft_strrchr(str, c));
	return (0);
}
 */
