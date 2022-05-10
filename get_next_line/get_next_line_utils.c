/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:56:54 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/28 14:44:46 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*string;

	if (!str)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buff)
		return (NULL);
	string = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(buff)) + 1));
	if (string == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			string[i] = str[i];
	while (buff[j] != '\0')
		string[i++] = buff[j++];
	string[ft_strlen(str) + ft_strlen(buff)] = '\0';
	free(str);
	return (string);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*string;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	string = (char *)malloc(sizeof(char) * (i + 2));
	if (!string)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		string[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_new_str(char *str)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	string = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!string)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		string[j++] = str[i++];
	string[j] = '\0';
	free(str);
	return (string);
}
