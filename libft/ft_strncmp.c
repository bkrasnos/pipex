/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:39:33 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 09:39:00 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0' && s2[i] == '\0') || i == (n - 1))
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	printf("TEST 1\n");
// 	printf("return(ft) is %d\n", ft_strncmp("salut", "salut", 5));
// 	printf("return(or) is %d\n", strncmp("salut", "salut", 5));
// 	printf("TEST 2\n");
// 	printf("return(ft) is %d\n", ft_strncmp("test", "testss", 7));
// 	printf("return(or) is %d\n", strncmp("test", "testss", 7));
// 	printf("TEST 3\n");
// 	printf("return(ft) is %d\n", ft_strncmp("testss", "test", 7));
// 	printf("return(or) is %d\n", strncmp("testss", "test", 7));
// 	printf("TEST 4\n");
// 	printf("return(ft) is %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("return(or) is %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("TEST 5\n");
// 	printf("return(ft) is %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf("return(or) is %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf("TEST 6\n");
// 	printf("return(ft) is %d\n", ft_strncmp("abcdefgh", "", 0));
// 	printf("return(or) is %d\n", strncmp("abcdefgh", "", 0));
// 	printf("TEST 7\n");
// 	printf("return(ft) is %d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("return(or) is %d\n", strncmp("test\200", "test\0", 6));
// 	return (0);
// }