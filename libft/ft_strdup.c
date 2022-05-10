/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:38:18 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:12:42 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		idx;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	idx = 0;
	while (str[idx])
	{
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

// int	main()
// {
// 	char	src[] = "Copy me";
// 	char	src2[] = "Me too!";

// 	printf("dest(ft) is %s\n", ft_strdup((void *)0));
// 	printf("dest(or) is %s\n", strdup((void *)0));
// 	return (0);
// }