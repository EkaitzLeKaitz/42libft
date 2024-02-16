/*
 bzero => Recibe una string generica y un entero (n).
 n siempre es un numero mas que la cadena, al empezar
 en posicion 0 los arrays.
 Al trabajar en bytes, transforma la str a caracteres de 
 un byte (char/unsigned char) y sustituye n caracteres por 
 '\0' => es 0 en ascii y representa el byte nulo (0 bytes).
 NULL => Representa un * que no apunta a nada/no encontrado.
 void dentro de una funcion representa todo tipo de datos.
 Definir una cadena entre comillas solo da permisos de 
 lectura, por eso rellenamos el array en la main.
*/
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	onebyte;
	size_t		i;

	i = 0;
	onebyte = str;
	while (i < n && n != 0 && str != 0)
	{
		onebyte[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	void	str[];
	size_t	n;

	str[0] = 'a';
	str[1] = 'n';
	str[2] = 'd';
	str[3] = 'r';
	str[4] = 'i';
	str[5] = 'w';
	n = 0;
//	bzero(str, n);
	ft_bzero(str, n)
	printf("%s\n", str);
	return (0);
}*/
