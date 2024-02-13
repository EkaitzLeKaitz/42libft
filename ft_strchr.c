/* strchr => (String Character) Busca un caracter dentro de una cadena, 
 recorriendola caracter a caracter. 
 -Si no lo encuentra devuelve nulo.
 -Si lo encuentra devuelve un puntero en la posicion donde encuentra 
  el caracter.
 -Si el caracter es nulo devuelve el caracter nulo que encuentre.
 -Si str esta vacia devuelve NULL {return (0) o return((void *) 0)}.
*/
//#include <string.h>
//#include <stdio.h>
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == "")
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)&str[i]);
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}
/*
int	main(void)
{
	const char	*str;
	int		c;

	str = "pepito";
	c = 'i';
//	printf ("original: %s\n", strchr(str, c));
	printf ("propia: %s\n", ft_strchr(str, c));
	return (0);
}*/
