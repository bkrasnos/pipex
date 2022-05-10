/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:39:09 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:12:06 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*dest;
// 	char	*dest2;
// 	size_t	ret;
// 	size_t	ret2;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	if (!(dest2 = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	memset(dest2, 0, 15);
// 	memset(dest2, 'r', 6);
// 	ret = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
// 	ret2 = strlcpy(dest2, "lorem ipsum dolor sit amet", 0);
// 	printf("FT: dest is '%s', ret is %ld\n", dest, ret);
// 	printf("OR: dest is '%s', ret is %ld\n", dest2, ret2);
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// 	write(1, "\n", 1);
// 	write(1, dest2, 15);
// 	return (0);
// }