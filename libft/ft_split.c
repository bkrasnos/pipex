/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:37:52 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:12:49 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	len_words(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*leak(char **spl, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(spl[i]);
		i++;
	}
	free(spl);
	return (NULL);
}

static char	**fill(char const *s, char **spl, char c, int words)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = len_words(s, c);
		spl[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!spl[i])
			return (leak(spl, i));
		j = 0;
		while (j < len)
			spl[i][j++] = *s++;
		spl[i][j] = '\0';
		++i;
	}
	spl[i] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	spl = (char **)malloc(sizeof(char *) * (words + 1));
	if (!spl)
		return (NULL);
	spl = fill(s, spl, c, words);
	return (spl);
}

// int	main(void)
// {
// 	// char	s[] = "dfdfgk";
// 	char	s[] = "klgvjknvzdgob odi f ";
// 	// char	s[] = "gg";
// 	char	c;
// 	char	**spl;
// 	int		i;

// 	c = 'a';
// 	ret = ft_split(s, c);
// 	i = 0;
// 	while (spl[i])
// 	{
// 		printf("str[%d] is '%s'\n", i, spl[i]);
// 		++i;
// 	}
// 	printf("Amount of strings is %d\n", i);
// 	free(spl);
// 	return (0);
// }