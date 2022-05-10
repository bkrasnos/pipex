/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:41:56 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 17:08:31 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	int		c;

// 	c = 'a';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	c = 'A';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	c = '1';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	c = '~';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	c = 'g';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	c = ' ';
// 	printf("c was '%c' and now is '%c'\n", c, ft_tolower(c));
// 	return (0);
// }
