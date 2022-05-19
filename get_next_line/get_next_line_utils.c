/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:56:54 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/19 13:32:25 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	find_newline(char *str)
{
	if (str)
	{
		while (*str)
		{
			if (*str == '\n')
				return (1);
			str++;
		}
	}
	return (0);
}

char	*ft_strjoin_gnl(char *str, char *buff)
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
	string = malloc(sizeof(char)
			*((ft_strlen_gnl(str) + ft_strlen_gnl(buff)) + 1));
	if (string == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			string[i] = str[i];
	while (buff[j] != '\0')
		string[i++] = buff[j++];
	string[ft_strlen_gnl(str) + ft_strlen_gnl(buff)] = '\0';
	free(str);
	return (string);
}

char	*ft_get_line(char *str)
{
	size_t		i;
	size_t		j;
	char		*string;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	string = (char *)malloc(i + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (str[j] != '\0' && str[j] != '\n')
	{
		string[j] = str[j];
		j++;
	}
	string[j] = '\0';
	return (string);
}

char	*ft_trim(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	i++;
	while (str[i + j])
	{
		str[j] = str[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
