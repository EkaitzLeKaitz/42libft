/*
 memset => Recibe una cadena de cualquier tipo, un
 size_t n que indica el numero de carcteres que va a alterar
 memset, y un int c que indica el nuevo valor que tendra 
 cada byte de str. (Al convertir a bytes)
 Convierte la cadena a unsigned char, y la sustituye por c.
 Devuelve la dirección de memoria original ya modificada.
 */
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	unsigned char	*onebyte;

	i = 0;
	onebyte = str;
	while (i < n && n != 0 && str != 0)
	{
		onebyte[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[];
	int	c;
	size_t	n;

	n = 4;
	c = 1432;
	str[0] = 'H';
	str[1] = 'O';
	str[2] = 'L';
	str[3] = 'I';
//	memset(str, c, n);
	ft_memset(str, c, n);
	printf("%s\n", str);
	return (0);
}*/
