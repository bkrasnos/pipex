# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 13:23:46 by bkrasnos          #+#    #+#              #
#    Updated: 2022/05/24 08:33:46 by bkrasnos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

HEADER_SRCS = pipex.h pipex_bonus.h
HEADER_DIR = includes/
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_SRCS))

MPATH_SRCS = pipex.c childs.c errors.c parents.c
MPATH_DIR = mandatory/
MPATH = $(addprefix $(MPATH_DIR), $(MPATH_SRCS))
OBJ_M = $(MPATH:.c=.o)

BPATH_SRCS = errors_bonus.c free_bonus.c here_doc_bonus.c\
					 pipex_bonus.c childs_bonus.c file_bonus.c
BPATH_DIR = bonus/
BPATH = $(addprefix $(BPATH_DIR), $(BPATH_SRCS))
OBJ_B = $(BPATH:.c=.o)

LPATH_SRCS = ft_strncmp.c ft_strdup.c ft_split.c ft_strjoin.c ft_strlen.c
LPATH_DIR = libft/
LPATH = $(addprefix $(LPATH_DIR), $(LPATH_SRCS))
OBJ_L = $(LPATH:.c=.o)

GNLPATH_SRCS = get_next_line.c get_next_line_utils.c
GNLPATH_DIR = get_next_line/
GNLPATH = $(addprefix $(GNLPATH_DIR), $(GNLPATH_SRCS))
OBJ_GNL = $(GNLPATH:.c=.o)

%.o: %.c $(HEADER) Makefile
		@${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJ_M) $(OBJ_L) $(OBJ_GNL)
		@$(CC) $(OBJ_M) $(OBJ_L) $(OBJ_GNL) -o $(NAME)
		@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

all:	$(NAME)

bonus:	$(OBJ_B) $(OBJ_L) $(OBJ_GNL)
		@$(CC) $(OBJ_B) $(OBJ_L) $(OBJ_GNL) -o $(NAME)
		@echo "$(GREEN)$(NAME) created!$(DEFAULT)"
	
clean:
		@$(RM) $(OBJ_M)
		@$(RM) $(OBJ_B)
		@$(RM) $(OBJ_GNL)
		@$(RM) $(OBJ_L)
		@echo "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:	clean
		@$(RM) $(NAME)
		@echo "$(RED)all deleted!$(DEFAULT)"

re:	fclean all

.PHONY:	all clean fclean bonus re

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m