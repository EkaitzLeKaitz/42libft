/*
memmove => Copia n bytes del bloque de memoria src al bloque de memoria dest,
incluso si las areas de memoria se superponen. 
Recibe void *src, void *dest y size_t n. 
Devuelve un * al area de memoria dest.
 -Si dest >= src copia de forma descendente (n-1).
 -Si dest < src copia desde el principio hasta '\0'.
 -Si src y dest = 0 devuelve NULL ((void *)0).
 -Si src es 0 no compila.
*/

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*onebyte_src;
	unsigned char		*onebyte_dest;
	size_t			i;

	i = 0;
	onebyte_src = src;
	onebyte_dest = dest;
	if (src == 0 && dest == 0)
		return (NULL);
	while (i < n)
	{
		if (src <= dest)
		{
			onebyte_dest[n - 1] = onebyte_src[n - 1];
			n--;
		}
		if (src > dest)
		{
			onebyte_dest[i] = onebyte_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[8];
	char	src[4];
	size_t	n;

	n = 4;
	src[0] = 'a';
	src[1] = 'n';
	src[2] = 't';
	src[3] = 'i';
	dest[0] = 'p';
	dest[1] = 'r';
	dest[2] = 'o';
	dest[3] = 'n';
	dest[4] = ' ';
	dest[5] = 'g';
	dest[6] = 'a';
	dest[7] = 's';
	memmove (dest, src, n);
	ft_memmove (dest, src, n);
	printf ("%s\n", dest);
	return (0);
}*/
