NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

HEADERS = $(INC_DIR)/ft.h

SRC_FILES = $(SRC_DIR)/ft_putchar.c\
			$(SRC_DIR)/ft_putstr.c\
			$(SRC_DIR)/ft_strcmp.c\
			$(SRC_DIR)/ft_strlen.c\
			$(SRC_DIR)/ft_swap.c

OBJ_FILES = $(SRC_FILES:c=.o)

all: $(NAME)

$(OBJ_FILES): $(SRC_FILES) $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	
clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
