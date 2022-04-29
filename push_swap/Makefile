NAME = push_swap

LIB_NAME = push_swap.a

CC = gcc

FLAG = -Wall -Wextra -Werror -g

SRC = push_swap.c

AR = ar -rcs

OBJ = $(addprefix src/,$(SRC:.c=.o))

src/%.o: src/%.c
		$(CC) $(FLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJ)
	make -C libft/
	mv libft/libft.a src/$(LIB_NAME)
	$(AR) src/$(LIB_NAME) $(OBJ)
	$(CC) -lmlx -framework OpenGL -framework AppKit src/$(LIB_NAME) -o $(NAME) $?

clean:
	make -C libft/ clean
	rm -rf $(OBJ)

fclean: clean
	make -C libft/ fclean	
	rm -f $(NAME) src/$(LIB_NAME)

re: fclean clean all