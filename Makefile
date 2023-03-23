# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 11:58:42 by rsoo              #+#    #+#              #
#    Updated: 2023/03/16 11:58:42 by rsoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_std.c ft_errorhandling.c rush00.c rush01.c rush02.c rush03.c rush04.c main.c

all: runprogram

runprogram: $(CFILES)
	@echo "Compiling C file..."
	@$(CC) $(CFLAGS) $(CFILES)
