/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:17:22 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:17:24 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putchar_fd => Envia el caracter 'c' al file descriptor especificado.
Para indicar que archivo es el fd, utilizamos la función open() con el nombre
del archivo y el tipo de permisos en el main. Al terminar de operar ese fd
lo cerramos con close(fd).
<fcntl.h> => Libreria del open y close.
No devuelve nada.
*/
//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'p';
	fd = open("PruebaPut.txt", O_RDWR | O_CREAT | O_APPEND);
	ft_putchar_fd(c, fd);
	close (fd);
	return (0);
}*/
