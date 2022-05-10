/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:03:02 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/10 13:24:04 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*find_path(char **envp)
{
	while (ft_strncmp("PATH", *envp, 4))
		envp++;
	return (*envp + 5);
}

void	close(t_pipex *pipex)
{
	close(pipex->tube[0]);
	close(pipex->tube[1]);
}
int	main(int argc, char **argv, char *envp[])
{
	t_pipex	pipex;
	
	if (argc != 5)
		return (msg(ERR_INPUT));
}