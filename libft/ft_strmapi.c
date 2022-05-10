/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:39:21 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:12:24 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_new;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s_new = malloc(sizeof(char) * (len + 1));
	if (!s_new)
		return (NULL);
	while (i < len)
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}

// int	main(void)
// {
// 	char	s[] = "Hello world!";
// 	char	*mapi;

// 	printf("Initial str is '%s'\n", s);
// 	mapi = ft_strmapi(s, NULL);
// 	printf("Mapped str is '%s'\n", mapi);
// 	return (0);
// }