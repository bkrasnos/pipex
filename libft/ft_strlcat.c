/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:38:57 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:11:45 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	j = dst_length;
	i = 0;
	if (dst_length < size - 1 && size > 0)
	{
		while (src[i] && dst_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_length >= size)
		dst_length = size;
	return (dst_length + src_length);
}

// int	main(void)
// {
// 	char	*dest;
// 	char	*dest2;
// 	size_t	ret;
// 	size_t	ret2;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	if (!(dest2 = (char *)malloc(sizeof(*dest2) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	memset(dest2, 0, 15);
// 	memset(dest2, 'r', 6);
// 	dest[11] = 'a';
// 	dest2[11] = 'a';
// 	ret = ft_strlcat(dest, "lorem", 15);
// 	ret2 = strlcat(dest2, "lorem", 15);
// 	printf("FT: dest is '%s', ret is %ld\n", dest, ret);
// 	printf("OR: dest is '%s', ret is %ld\n", dest2, ret2);
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// 	write(1, "\n", 1);
// 	write(1, dest2, 15);
// 	write(1, "\n", 1);
// 	return (0);
// }
