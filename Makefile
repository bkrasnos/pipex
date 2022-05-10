# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 13:23:46 by bkrasnos          #+#    #+#              #
#    Updated: 2022/05/10 14:27:49 by bkrasnos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

HEADER_SRCS = pipex.h pipex_bonus.HEADER_SRCS
HEADER_DIR = includes/
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_SRCS))

