CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean oclean fclean re
