/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:38:07 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:10:30 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	b;
	size_t			i;

	str = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == b)
			return ((char *)str + i);
		++i;
	}
	if (str[i] == b)
		return ((char *)str + i);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "";
// 	char	str2[] = "";
// 	char	c;
// 	char	*ret;
// 	char	*ret2;

// 	c = '\0';
// 	ret = ft_strchr(str, c);
// 	if (NULL == ret)
// 		printf("C was not found. Ret(ft) is '%s'\n", ret);
// 	else
// 		printf("C was found. Ret(ft) is '%s'\n", ret);
// 	ret2 = strchr(str2, c);
// 	if (NULL == ret2)
// 		printf("C was not found. Ret(or) is '%s'\n", ret2);
// 	else
// 		printf("C was found. Ret(or) is '%s'\n", ret2);
// 	return (0);
// }
