/*
split => Crea un espaciode memoria para un array de strings,
las cuales encuentra dentro de s1 a partir del delimitador.
Crearé 4-5 funciones auxiliares:
 - wrds_s1 =>
 - len_wrds =>
 - malloc_sub =>
 - cln_wrds =>
*/
#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	size_t	i;
	char	array[a][b];

	a = 0;
	b = 0;
	i = 0;
	while(s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[a][b] = s[i];
			i++;
			b++;
		}
		if (s[i] == c && s[i + 1] != c)
		{
			i++;
			a++;
			b = 0;
		}else
			i++;
	}
	return (array);
}

int	main(void)
{
	const char	*s;
	char		c;
	char		**array;
	size_t		i;

	s = "Pablito clavo un clavito";
	c = 'l';
	i = 0;
	array = ft_split(s, c);
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
