# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 09:14:27 by aqueiroz          #+#    #+#              #
#    Updated: 2023/06/22 09:44:35 by aqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL := all

## COLORS DEFINITIONS

red:=$(shell tput setaf 1)
green:=$(shell tput setaf 2)
yellow:=$(shell tput setaf 3)
blue:=$(shell tput setaf 4)
purple:=$(shell tput setaf 5)
cyan:=$(shell tput setaf 6)
white:=$(shell tput setaf 7)
reset:=$(shell tput sgr0)

color:
	@make -s _color-test

_color-test:
	$(info $(red)Message$(reset))
	$(info $(green)Message$(reset))
	$(info $(yellow)Message$(reset))
	$(info $(blue)Message$(reset))
	$(info $(purple)Message$(reset))
	$(info $(cyan)Message$(reset))
	$(info $(white)Message$(reset))

# PATHS

SRC_PATH = srcs
TEST_PATH = tests
PATH_INC = ./

# FILES

NAME = libft.a
FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint
SRCS = $(addprefix $(SRC_PATH)/, $(addsuffix .c, $(FILES)))
OBJS := ${SRCS:.c=.o}

# FLAGS

CC = cc
CFLAGS = -Wall -Wextra -Werror

# TARGETS

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	@$(CC) $(CFLAGS) -I tests tests/*.c -L ./ -lft -o test
	@./test

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) test

re: fclean all

.PHONY: all clean fclean re test