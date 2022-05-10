/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:08:00 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 16:50:45 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	print;

// 	print = ft_isprint('a');
// 	printf("for 'a' return is %d\n", print);
// 	print = ft_isprint('\0');
// 	printf("for '\0' return is %d\n", print);
// 	print = ft_isprint(' ');
// 	printf("for ' ' return is %d\n", print);
// 	print = ft_isprint('~');
// 	printf("for '~'return is %d\n", print);
// 	return (0);
// }