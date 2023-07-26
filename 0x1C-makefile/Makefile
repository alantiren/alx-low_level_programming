CC := gcc-9
CFLAGS := -Wall -Wextra -std=c11

all: program1 program2 program3

program1: file1.c
    $(CC) $(CFLAGS) -o $@ $<

program2: file2.c
    $(CC) $(CFLAGS) -o $@ $<

program3: file3.c
    $(CC) $(CFLAGS) -o $@ $<

clean:
    rm -f program1 program2 program3
