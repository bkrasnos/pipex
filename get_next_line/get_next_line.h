/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:52:37 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/23 08:35:57 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen_gnl(char *s);
int		get_next_line(int fd, char **line);
char	*ft_get_line(char *str);
char	*ft_strjoin_gnl(char *str, char *buff);
int		find_newline(char *str);
char	*ft_trim(char *str);
int		error(char *str);

#endif
