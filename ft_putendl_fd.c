/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:19:20 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:19:22 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putendl_fd => Envia una string 's' al fd dado seguido de un salto de linea.
No devuelve nada.
*/
//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*s = "NO ESTOY DE BROMA ";
	int	fd;

	fd = open("PruebaPut.txt", O_CREAT | O_RDWR | O_APPEND, 0666);
	ft_putendl_fd(s, fd);
	close (fd);
	return (0);
}*/
