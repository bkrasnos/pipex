/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:56:14 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 17:14:41 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	num;

// 	num = ft_isalnum('5');
// 	printf("for '5' return is %d\n", num);
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	num = ft_isalnum('9');
// 	printf("for '9' return is %d\n", num);
// 	num = ft_isalnum('A');
// 	printf("for 'A' return is %d\n", num);
// 	num = ft_isalnum(' ');
// 	printf("for ' ' return is %d\n", num);
// 	return (0);
// }