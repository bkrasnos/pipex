/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:03:38 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 14:33:43 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	ascii;

// 	ascii = ft_isascii('0');
// 	printf("for '0' return is %d\n", ascii);
// 	ascii = ft_isascii('g');
// 	printf("for 'g' return is %d\n", ascii);
// 	ascii = ft_isascii('5');
// 	printf("for '5' return is %d\n", ascii);
// 	ascii = ft_isascii(' ');
// 	printf("for ' ' return is %d\n", ascii);
// 	ascii = ft_isascii('&');
// 	printf("for '&' return is %d\n", ascii);
// 	ascii = ft_isascii('A');
// 	printf("for 'A' return is %d\n", ascii);
// 	return (0);
// }