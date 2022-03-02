NAME = $(SERVER) $(CLIENT)

GCC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar

RC = -rcs

SERVER = server
CLIENT = client

SRC = server.c client.c

LIBFT = $(addprefix libft/,) \
	   ft_strlen.c \
	   ft_atoi.c \
	   ft_isdigit.c \
	   ft_isascii.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \

# ifdef FLAG
# 	SRC_COMP = $(SRC) $(SRC_B)
# else
# 	SRC_COMP = $(SRC)
# endif

OBJ = ${SRC:.c=.o}

$(NAME): $(OBJ)
	$(AR) ${RC} $(NAME) $(OBJ)
	$(CC) -o $(SERVER) server.c $(NAME)
	$(CC) -o $(CLIENT) client.c $(NAME)

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ} ${OBJ_B}

fclean:clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus