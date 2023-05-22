# Dynamic Libraries Project

This project contains a dynamic library named `libdynamic.so` that provides various functions for different operations.

## Functions

The dynamic library `libdynamic.so` includes the following functions:

1. `_putchar(char c)`: Outputs a single character to the standard output.
2. `_islower(int c)`: Checks if a character is a lowercase letter.
3. `_isalpha(int c)`: Checks if a character is an alphabetic character.
4. `_abs(int n)`: Computes the absolute value of an integer.
5. `_isupper(int c)`: Checks if a character is an uppercase letter.
6. `_isdigit(int c)`: Checks if a character is a digit.
7. `_strlen(char *s)`: Computes the length of a string.
8. `_puts(char *s)`: Prints a string to the standard output.
9. `_strcpy(char *dest, char *src)`: Copies a string from source to destination.
10. `_atoi(char *s)`: Converts a string to an integer.
11. `_strcat(char *dest, char *src)`: Concatenates two strings.
12. `_strncat(char *dest, char *src, int n)`: Concatenates n characters from source to destination.
13. `_strncpy(char *dest, char *src, int n)`: Copies n characters from source to destination.
14. `_strcmp(char *s1, char *s2)`: Compares two strings.
15. `_memset(char *s, char b, unsigned int n)`: Fills a block of memory with a specific byte value.
16. `_memcpy(char *dest, char *src, unsigned int n)`: Copies a block of memory from source to destination.
17. `_strchr(char *s, char c)`: Locates the first occurrence of a character in a string.
18. `_strspn(char *s, char *accept)`: Computes the length of a prefix substring.
19. `_strpbrk(char *s, char *accept)`: Searches a string for any of a set of bytes.
20. `_strstr(char *haystack, char *needle)`: Locates the first occurrence of a substring in a string.

## Usage

To compile and link your code with the `libdynamic.so` library, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o program