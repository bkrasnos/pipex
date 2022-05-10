/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:52:37 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/05/10 11:53:21 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 
# endif

size_t	ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_new_str(char *str);
char	*ft_read_str(int fd, char *str);
char	*ft_strchr(char *s, int c);
char	*ft_get_line(char *str);
char	*ft_strjoin(char *str, char *buff);

#endif