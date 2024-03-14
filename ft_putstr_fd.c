/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:18:21 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:18:32 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putstr_fd => Envia la string 's' al descriptor especificado.
La función no devuelve nada.
O_APPENED = Escribe a continuación en un archivo en vez de sobreescribirlo.
O_CREAT = Si no existe lo crea.
O_RDWR = Permisos de lectura y escritura.
*/
//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*s = "Esto no es un simulacro ";
	int	fd;

	fd = open("PruebaPut.txt", O_RDWR | O_APPEND | O_CREAT, 0666);
	ft_putstr_fd(s, fd);
	close (fd);
	return (0);
}*/
