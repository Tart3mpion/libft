NAME	= libft.a

SRC	= ft_isalpha.c ft_memchr.c ft_strchr.c ft_strncmp.c \
ft_atoi.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
ft_calloc.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
ft_isalnum.c ft_memccpy.c ft_memset.c ft_strlen.c ft_toupper.c \
OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
all: $(NAME)

CFLAGS	= -Wextra -Wall -Werror -I

CC	= gcc

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

RM	= rm -f

clean:
	$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
