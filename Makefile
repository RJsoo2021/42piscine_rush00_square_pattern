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

NAME = rush00
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CFILES = ft_std.c ft_errorhandling.c rush00.c rush01.c rush02.c rush03.c rush04.c main.c

OBJS = $(CFILES:.c=.o)

$(OBJS): $(CFILES)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Object file created"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Executable created"

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all