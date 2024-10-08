# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfalasch <pfalasch@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 17:32:17 by pfalasch          #+#    #+#              #
#    Updated: 2023/03/21 03:26:27 by pfalasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m



NAME = push_swap
NAME_B = checker
INCLUDE = includes
CC = gcc
SRC = src/
OBJ = obj/
FLAGS = -Wall -Wextra -Werror
#LIBFT = libs/libft/
FTPRINTF = libs/ft_printf/
LIBRARY = libs/ft_printf/libftprintf.a
#libs/libft/libft.a

#OBJF		=	.cache_exists

SRC_1 =	push_swap.c


SRC_2 =	src/check_input/ft_check_input.c \
		src/check_input/ft_check_sort.c \
		src/close_error/ft_close.c \
		src/close_error/ft_error.c \
		src/move/push.c \
		src/move/rotate.c \
		src/move/swap.c \
		src/move/reverse.c \
		src/sorting/ft_check_maxmin.c \
		src/sorting/ft_check_pusha.c \
		src/sorting/ft_check_to_b.c \
		src/sorting/ft_count_move_to_b.c \
		src/sorting/ft_pushb.c \
		src/sorting/ft_sorting_a.c \
		src/sorting/ft_sorting.c \
		src/check_input/ft_utils.c \
		
BONUS = bonus/checker.c \
		libs/get_next_line/get_next_line.c \
		libs/get_next_line/get_next_line_utils.c \
		

OBJ_1 = $(SRC_1:.c=.o)
OBJ_2 = $(SRC_2:.c=.o)
BOBJ = $(BONUS.c=.o)

all:
		make -C $(FTPRINTF)
	$(CC) $(FLAGS) $(SRC_1) $(SRC_2) $(LIBRARY) -o $(NAME)
	@echo "$(GREEN)push_swap compiled!$(DEF_COLOR)"

bonus : all
	$(CC) $(FLAGS) $(BONUS) $(SRC_2) $(LIBRARY) -o $(NAME_B)
	
clean:
		rm -f $(OBJ_1)
		rm -f $(OBJ_2)
		rm -f $(BOBJ)
		make clean -C $(FTPRINTF)
		@echo "$(BLUE)push_swap object files cleaned!$(DEF_COLOR)"
	
fclean: clean
		make fclean -C $(FTPRINTF)
	rm -f $(NAME)
	rm -f $(NAME_B)

re: clean fclean all clean