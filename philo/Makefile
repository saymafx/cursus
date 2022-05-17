NAME = philo

LIB_NAME = philo.a

CC = gcc

FLAG = -Wall -Wextra -Werror -g

SRC = philo.c philo_utils.c

AR = ar -rcs

OBJ = $(SRC:.c=.o))

src/%.o: src/%.c
		$(CC) $(FLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJ)
	$(AR) $(OBJ)
	$(CC) -o $(NAME) $?

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean clean all