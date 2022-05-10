/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:40:15 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:14:17 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos_c;

	pos_c = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			pos_c = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (pos_c == -1)
		return (NULL);
	return ((char *)s + pos_c);
}

// int	main(void)
// {
// 	char	str[] = "Hello tworld!";
// 	char	c;
// 	char	*ret;
// 	char	str2[] = "Hello tworld!";
// 	char	*ret2;

// 	c = '\0';
// 	ret = ft_strrchr(str, c);
// 	if (NULL == ret)
// 		printf("C was not found. Ret(ft) is '%s'\n", ret);
// 	else
// 		printf("C was found. Ret(ft) is '%s'\n", ret);
// 	ret2 = strrchr(str2, c);
// 	if (NULL == ret2)
// 		printf("C was not found. Ret(or) is '%s'\n", ret2);
// 	else
// 		printf("C was found. Ret(or) is '%s'\n", ret2);
// 	return (0);
// }
