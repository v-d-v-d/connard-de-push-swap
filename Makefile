# Nom de l'exécutable
NAME= push_swap

# Compilateur et drapeaux
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -Ilibft 
# Fichiers sources et objets
SRC =	push_swap.c \
		\
		move/push_stack.c \
		move/reverse_rotate_stack.c \
		move/rotate_stack.c \
		move/swap_stack.c \
		\
		utils.c\
		for_less_5.c\
		radix.c\

OBJ= $(SRC:.c=.o)

# Règle all
all: $(NAME)

# Règles pour créer l'exécutable
$(NAME): $(OBJ)
	$(MAKE) -C newlibft
	$(CC) $(CFLAGS) $(OBJ) newlibft/libft.a -o $(NAME)

# Règle clean
clean:
	$(RM) $(OBJ)
	$(MAKE) -C newlibft clean

# Règle fclean
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C newlibft fclean

# Règle re
re: fclean all

.PHONY: all clean fclean re
