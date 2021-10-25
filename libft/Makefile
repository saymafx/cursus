
NAME=libft.a

GCC=gcc

FLAGS=-Wall -Wextra -Werror

AR=ar

RC=-rc

SRC= ft_strlen.c ft_isalpha.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_memmove.c\

OBJ=${SRC:.c=.o}

$(NAME): $(OBJ)
	$(AR) ${RC} $(NAME) $(OBJ) 

all:$(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean:clean
	rm -rf ${NAME}

re: fclean all0