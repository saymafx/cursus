NAME = jojo_game.a

LIBFT = libft/libft.h

GCC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar

RC = -rcs

LIBFT = $(addprefix libft/,) \
	   ft_strlen.c \
	   ft_atoi.c \
	   ft_isdigit.c \
	   ft_isascii.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \

SRC = src/jojo_game.c \
			collisions.c \
			error.c \
			img.c \
			key_hand.c \
			maps.c \
			maps2.c \

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	mv libft/libft.a 
	$(AR) ${RC} $(NAME) $(OBJ)
	

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	make -C libft/ clean
	rm -rf ${OBJ}

fclean:clean
	rm -rf ${NAME}

re: fclean all