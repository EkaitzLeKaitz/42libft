/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:19:52 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:19:54 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
putnbr_fd => Envia el numero n al fd dado.
*/
//#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	res;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
		}
		res = (n % 10) + 48;
		write (fd, &res, 1);
	}
}
/*
int	main(void)
{
	int	n;
	int	fd;

	n = -2147483648;
	fd = open("PruebaPut.txt", O_RDWR | O_CREAT | O_APPEND, 0666);
	ft_putnbr_fd(n, fd);
	close (fd);
	return (0);
}*/
