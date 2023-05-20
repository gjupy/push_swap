# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjupy <gjupy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 15:39:40 by gjupy             #+#    #+#              #
#    Updated: 2022/06/24 22:58:29 by gjupy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = push_swap
CC    = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT = ./libft/libft.a
SRCS  = ./src/main.c \
		./src/check_errors/check_errors.c ./src/check_errors/check_errors_utils.c ./src/check_errors/error_messages.c \
		./src/stack/init_stack.c \
		./src/operations/push_and_swap.c ./src/operations/reverse.c ./src/operations/rotate.c \
		./src/sort/init_sort.c ./src/sort/sort_big.c ./src/sort/sort_small.c ./src/sort/chunks.c \
		./src/sort/cases/0-2_cases_three_nbrs.c ./src/sort/cases/3-5_cases_three_nbrs.c \
		./src/utils/index.c ./src/utils/rotations.c ./src/utils/rank.c ./src/utils/print.c \
		./src/exit/exit.c

OBJS = $(SRCS:c=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

inside: $(OBJS) $(LIBFT) so_long.h
	ar -t $(NAME)

git:
	git add .
	git commit -m "commit"
	git push

.PHONY: all clean fclean re git libft