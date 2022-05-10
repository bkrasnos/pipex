/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:24:06 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:13:11 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	*b1 = (char*)malloc(sizeof(char) * (20 + 1));
// 	char	*b2 = (char*)malloc(sizeof(char) * (20 + 1));
// 	char	*ret;
// 	char	*ret2;

// 	*b1 = 0;
// 	*b2 = 0;
// 	ret = memset(b1, '\5', 20);
// 	ret2 = ft_memset(b2, '\5', 20);
// 	printf("return(or) is '%s'\n", ret);
// 	printf("return(ft) is '%s'\n", ret2);
// }

// int	main(void)
// {
// 	char	s[] = "hello world";
// 	char	*ret;
// 	char	s2[] = "hello world";
// 	char	*ret2;

// 	ret = ft_memset(s, 'A', 5);
// 	ret2 = memset(s2, 'A', 5);
// 	printf("return(ft) is '%s'\n", ret);
// 	printf("return(or) is '%s'\n", ret2);
// 	return (0);
// }