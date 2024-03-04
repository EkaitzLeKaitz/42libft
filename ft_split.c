/*
split => Crea un espacio de memoria para un array de strings,
las cuales encuentra dentro de la string s, a partir del delimitador c.
El null del final de una array de array_s es NULL (vale mas de un byte).
Al recorrer todos los n de array el ultimo, se iguala a 0(NULL) porque es lo
que indica que acaba el array de strings.
Crearé 5 funciones auxiliares:
 - wrds_s => Encuentra el numero de string que hay dentro de s.
 - len_wrds => Calcula la longitud de cada subcadena de s.
 - free_wrds => Si ha habido un fallo al reservar/copiar en la memoria, 
 libera toda las areas de memoria copiadas de las cadenas de **array(array[n]).
 - sub_array => Esta funcion se encarga de rellenar el array anterior con las 
 subcadenas y establece el ultimo elemento como NULLm para terminar el array.
 + Devuelve el array de nuevas strings resultante de la separación.
 + Si ha habido un fallo en la memoria devuelve NULL.
static se añade delante de las funciones auxiliares para que tu libreria no 
confunda las funciones auxiliares con la principal.
*/
#include "libft.h"
#include <stdio.h>

static size_t	wrds_s(char const *s, char c)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			a++;
			while (s[i] != c)
				i++;
		}
	}
	return (a);
}

static size_t	len_wrds(char const *s, size_t i_wrd, char c)
{
	size_t	i;

	i = i_wrd;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i - i_wrd);
}

static void	free_wrds(char **array, size_t n)
{
	while (n > 0)
	{
		n--;
		free(array[n]);
	}
}

static char	**sub_array(char **array, const char *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			array[n] = ft_substr(s, i, len_wrds(s, i, c));
			if (!array[n])
			{
				free_wrds(array, n);
				return (0);
			}
			n++;
			i = i + len_wrds(s, i ,c);
		}
		else
			i++;
	}
	array[n] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **)malloc(sizeof(char *) * (wrds_s(s, c) + 1));
	if (!array)
		return (0);
	return (sub_array(array, s, c));
}
/*
int	main(void)
{
	const char	*s;
	char		c;
	char		**array;
	size_t		n;

	s = " Pablito clavo un clavito  ";
	c = ' ';
	n = 0;
	array = ft_split(s, c);
	while (array[n])
	{
		printf("%s\n", array[n]);
		n++;
	}
	return (0);
}*/
