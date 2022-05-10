/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:42:02 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/14 11:35:00 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int		c;

// 	c = 'a';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	c = 'A';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	c = '0';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	c = ' ';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	c = 'z';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	c = '@';
// 	printf("c was '%c' and now is '%c'\n", c, ft_toupper(c));
// 	return (0);
// }