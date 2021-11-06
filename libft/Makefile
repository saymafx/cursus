
NAME = libft.a

GCC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar

RC = -rc

SRC = ft_strlen.c ft_isalpha.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memset.c ft_memmove.c ft_calloc.c ft_memchr.c ft_memcmp.c \
	ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJ = ${SRC:.c=.o}

OBJ_B = ${SRC_B:.c=.o}

$(NAME): $(OBJ)
	$(AR) ${RC} $(NAME) $(OBJ) 

bonus: $(OBJ_B)
	$(AR) ${RC} $(NAME) $(OBJ_B) 

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ} ${OBJ_B}

fclean:clean
	rm -rf ${NAME}

re: fclean all