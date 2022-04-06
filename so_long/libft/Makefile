NAME = libft.a

GCC = gcc

FLAGS = -Wall -Wextra -Werror 
AR = ar

RC = -rcs

SRC = ft_putendl_fd \
	ft_strlen.c \
	ft_strchr.c \
	ft_strjoin.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	get_next_line.c \

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