/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:35:26 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/17 13:22:51 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	while (i < count * size)
	{
		str[i] = 0;
		++i;
	}
	return (str);
}

// if ((count * size) / size != count)
// 	return (NULL);

// int	main(void)
// {
// 	size_t	i;
// 	size_t	num;
// 	int		*ptr;

// 	i = 0;
// 	num = 5624;
// 	ptr = ft_calloc(num, sizeof(num));
// 	while (i < num)
// 	{
// 		write(1, &ptr[i], 1);
// 		write(1, "\n", 1);
// 		++i;
// 	}
// 	free(ptr);
// 	return (0);
// }