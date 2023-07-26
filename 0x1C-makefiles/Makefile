CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

SRC = main.c school.c
OBJ = $(SRC:.c=.o)

all: a.out

a.out: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c m.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean all
