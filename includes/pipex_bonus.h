/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:36:22 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/23 11:27:52 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <string.h>
# include <stdio.h>
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

# define ERR_INFILE "Infile"
# define ERR_OUTFILE "Outfile"
# define ERR_INPUT "Invalid number of arguments.\n"
# define ERR_PIPE "Pipe"
# define ERR_CMD "Command not found\n"
# define ERR_ENVP "Environment"
# define ERR_HEREDOC "here_doc"

typedef struct s_pipexb
{
	pid_t	pid;
	int		*pipe;
	int		here_doc;
	int		cmd_nmbs;
	int		pipe_nmbs;
	int		idx;
	int		infile;
	int		outfile;
	char	*env_path;
	char	**cmd_paths;
	char	**cmd_args;
	char	*cmd;
}	t_pipexb;

void	child_free(t_pipexb *pipex);
void	message_pipe(char *arg);
void	error_message(char *error);
int		message(char *error);
void	parent_free(t_pipexb *pipex);
void	pipe_free(t_pipexb *pipex);
void	close_pipes(t_pipexb *pipex);
void	here_doc(char *argv, t_pipexb *pipex);
int		args_in(char *arg, t_pipexb *pipex);
void	child(t_pipexb p, char **argv, char **envp);
char	*find_path(char **envp);
void	get_infile(char **argv, t_pipexb *pipex);
void	get_outfile(char *argv, t_pipexb *pipex);

#endif