/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:36:26 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:09:21 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s + idx) == (unsigned char)c)
			return ((void *)s + idx);
		idx++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char buffer[] = {0, 1, 2 ,3 ,4 ,5};
// 	int		c;
// 	char	*ret;
// 	const char buffer2[] = {0, 1, 2 ,3 ,4 ,5};
// 	char	*ret2;

// 	c = 'e';
// 	ret = ft_memchr(buffer, 2 + 256, 6);
// 	if (NULL == ret)
// 		printf("C was not found. Ret(ft) is '%s'\n", ret);
// 	else
// 		printf("C was found. Ret(ft) is '%s'\n", ret);
// 	ret2 = memchr(buffer, 2 + 256, 6);
// 	if (NULL == ret2)
// 		printf("C was not found. Ret(or) is '%s'\n", ret2);
// 	else
// 		printf("C was found. Ret(or) is '%s'\n", ret2);
// 	return (0);
// }