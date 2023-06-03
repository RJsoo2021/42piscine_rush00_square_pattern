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

NAME = solver
CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
SRCS_DIR = srcs/
SRCS = ft_std.c ft_errorhandling.c rush00.c rush01.c rush02.c rush03.c rush04.c main.c
SRCS_CFILES = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(SRCS_CFILES:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling all files... Creating output file..."
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
