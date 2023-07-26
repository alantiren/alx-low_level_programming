CC := gcc-9
CFLAGS := -Wall -Wextra -std=c11

all: program1 program2 program3

program1: main.c
    $(CC) $(CFLAGS) -o $@ $<

program2: school.c
    $(CC) $(CFLAGS) -o $@ $<

clean:
    rm -f program1 program2 program3
