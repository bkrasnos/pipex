/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:48:28 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 14:26:00 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	alpha;

// 	alpha = ft_isalpha('A');
// 	printf("for 'A' return is %d\n", alpha);
// 	alpha = ft_isalpha('z');
// 	printf("for 'z' return is %d\n", alpha);
// 	alpha = ft_isalpha('K');
// 	printf("for 'K' return is %d\n", alpha);
// 	alpha = ft_isalpha(' ');
// 	printf("for ' ' return is %d\n", alpha);
// 	alpha = ft_isalpha('.');
// 	printf("for '.' return is %d\n", alpha);
// 	alpha = ft_isalpha('NULL');
// 	printf("for 'NULL' return is %d\n", alpha);
// 	alpha = ft_isalpha('G');
// 	printf("for 'G' return is %d\n", alpha);
// 	alpha = ft_isalpha('0');
// 	printf("for '0' return is %d\n", alpha);
// 	return (0);
// }