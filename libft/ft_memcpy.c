/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:38:20 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/14 16:23:03 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src || !n)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

// #include <string.h>
// int	main(void)
// {
// 	char	dst[12] = "Hello world";
// 	char	dst2[12] = "Hello world";

// 	printf("FT: %s\n", ft_memcpy(dst+2, dst, 5));
// 	printf("OR: %s\n", memcpy(dst2+2, dst2, 5));
// 	return (0);
// }