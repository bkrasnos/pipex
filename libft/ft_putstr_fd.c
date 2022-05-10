/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:37:17 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:12:55 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx])
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
}

// int	main(void)
// {
// 	char	s[] = "Hello world!";
// 	int		fd;

// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// 	ft_putstr_fd("\n", fd);
// 	return (0);
// }