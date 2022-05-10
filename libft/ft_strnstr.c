/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:39:45 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:14:01 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i0;
	size_t	i;
	size_t	j;

	i = 0;
	i0 = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i0 < len)
	{
		while (haystack[i] && haystack[i] == needle[j] && (i0 + i) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i - j);
			i++;
			j++;
		}
		i = 0;
		j = 0;
		haystack++;
		i0++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[] = "aaabcabcd";
// 	char	needle[] = "cd";
// 	char	*ret;
// 	char	haystack2[] = "aaabcabcd";
// 	char	needle2[] = "cd";
// 	char	*ret2;

// 	ret = ft_strnstr(haystack, needle, 8);
// 	if (ret == NULL)
// 		printf("Needle(ft) was not found!\n");
// 	else
// 		printf("Needle(ft) was found! Return is '%s'!\n", ret);
// 	ret2 = strnstr(haystack2, needle2, 8);
// 	if (ret2 == NULL)
// 		printf("Needle(or) was not found!\n");
// 	else
// 		printf("Needle(or) was found! Return is '%s'!\n", ret2);
// 	return (0);
// }