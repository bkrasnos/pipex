/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:02 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 17:11:34 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	digit;
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	num = ft_isalnum('0');
// 	printf("for '0' return is %d\n", num);
// 	return (0);
// }