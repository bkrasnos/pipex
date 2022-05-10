/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:37:06 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:13:00 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n < 10)
		ft_putchar_fd((char)(n + '0'), fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

// int	main(void)
// {
// 	int		n;
// 	int		fd;

// 	fd = 1;
// 	n = 0;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	n = -1;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	n = -100;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	n = -2147483648;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	n = 100000000000000000;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	n = 2147483647;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	return (0);
// }