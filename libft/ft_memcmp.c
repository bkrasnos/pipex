/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:36:15 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:09:40 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx)
			== *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}

// int	main(void)
// {
// 	const char	buffer1[] = "t\200a";
// 	const char	buffer2[] = "t\0a";
// 	const char	buffer3[] = "t\200a";
// 	const char	buffer4[] = "t\0a";

// 	printf("ret(ft) is %d\n", ft_memcmp(buffer1, buffer2, 3));
// 	printf("ret(or) is %d\n", memcmp(buffer3, buffer4, 3));
// 	return (0);
// }
