# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfalasch <pfalasch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 17:32:17 by pfalasch          #+#    #+#              #
#    Updated: 2023/02/22 18:20:01 by pfalasch         ###   ########.fr        #
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
INCLUDE = includes
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT := libs/libft/
LIBRARY := libs/libft/libft.a libs/libft/ft_printf/libftprintf.a
SRC = src/
OBJ = obj/
#manca printf

OBJF		=	.cache_exists

SRC =	push_swap.c \
		src/check_input/check_input.c \
		src/close_error/ft_close.c \
		src/move/push.c \
		src/move/rotate.c \
		src/move/swap.c \
		src/move/reverse.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
		make -C $(LIBFT)
		make -C $(FT_PRINTF)
	$(CC) $(FLAGS) $(SRC) $(LIBRARY) -o $(NAME)
	@echo "$(GREEN)push_swap compiled!$(DEF_COLOR)"

clean:

		rm -f $(OBJ)
		make clean -C $(LIBFT)
		make clean -C $(FT_PRINTF)
		@echo "$(BLUE)push_swap object files cleaned!$(DEF_COLOR)"
	
fclean: clean
		make fclean -C $(LIBFT)
		make fclean -C $(FTPRINTF)
	rm -f $(NAME)

fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"


re: fclean all clean