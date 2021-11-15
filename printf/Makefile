NAME = libftprintf.a

GCC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar

RC = -rcs

SRC = ft_printf.c ft_putnbr.c ft_strchr.c ft_strlen.c test.c

OBJ = ${SRC:.c=.o}

$(NAME): $(OBJ)
	$(AR) ${RC} $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean:clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus