NAME	= libft.a

SRC	= ft_isalpha.c ft_memchr.c ft_strchr.c ft_strncmp.c \
ft_atoi.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
ft_calloc.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
ft_isalnum.c ft_memccpy.c ft_memset.c ft_strlen.c ft_toupper.c \
OBJ	= $(SRC:.c=.o)

INCLUDE		= includes
$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME) 
CFLAGS	= -Wextra -Wall -Werror -I

CC	= clang

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

RM	= rm -f

clean:
	$(RM) $(OBJ)

all:	$(NAME)
fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
