/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   here_doc_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:44:59 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/11 15:51:33 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex_bonus.h"


void	here_doc(char *argv, t_pipexb *pipex)
{
	int		file;
	char	*buff;

	file = open(".heredoc_tmp", O_CREAT | O_WRONLY | O_TRUNC, 0000644);
	if (file < 0)
		error_message(ERR_HEREDOC);
	while (1)
	{
		write(1, "heredoc> ", 9);
		if (get_next_line(0, &buff) < 0)
			exit(1);
		if (!ft_strncmp(argv, buff, ft_strlen(argv) + 1))
			break ;
		write(file, buff, ft_strlen(buff));
		write(file, "\n", 1);
		free(buff);
	}
	free(buff);
	close(file);
	pipex->infile = open(".heredoc_tmp", O_RDONLY);
	if (pipex->infile < 0)
	{
		unlink(".heredoc_tmp");
		msg_error(ERR_HEREDOC);
	}
}

int	args_in(char *arg, t_pipexb *pipex)
{
	if (arg && !ft_strncmp("here_doc", arg, 9))
	{
		pipex->here_doc = 1;
		return (6);
	}
	else
	{
		pipex->here_doc = 0;
		return (5);
	}
}