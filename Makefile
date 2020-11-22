NAME	= libft.a
SRC	=
$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
OBJ = $(SRC:.C=.O)
all: $(NAME)
CC	= clang
CFLAGS	= -Wextra -Wall -Werror -I
RM	= rm -f
clean:
	$(RM) $(OBJ)
fclean:	clean
		$(RM) $(NAME)
re:	fclean all
.PHONY:	all clean fclean re
