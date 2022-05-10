/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:46:37 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/14 16:30:51 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		idx;

	if (dst == src || !n)
		return (dst);
	idx = 0;
	if (dst < src)
	{
		while (idx < n)
		{
			*((char *)dst + idx) = *((char *)src + idx);
			idx++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dst + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dst);
}

// #include <string.h>
// int	main(void)
// {
// 	char	src[12] = "Hello world";
// 	char	dst[12] = "Hello world";
// 	char	dst2[12] = "Hello world";

// 	printf("FT: %s\n", ft_memmove(src, dst, 5));
// 	// printf("FT: %s\n", ft_memmove(dst+2, dst, 5));
// 	printf("OR: %s\n", memmove(dst2+2, dst2, 5));
// 	return (0);
// }