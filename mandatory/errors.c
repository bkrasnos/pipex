/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:24:28 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/23 10:25:09 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	error_message(char *error)
{
	perror(error);
	exit (1);
}

int	message(char *error)
{
	write(2, error, ft_strlen(error));
	return (1);
}
